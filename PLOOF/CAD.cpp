#include "CAD.h"

NS_Comp_Data::CLcad::CLcad(void)
{
    this->sCnx = "Data Source = desktop-flnbqv7;Initial Catalog=PLOOF;User ID=PLOOF_USR;Password=azerty";

    this->sSql = "Rien";

    this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
    this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
    this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->oDs = gcnew System::Data::DataSet();

    this->oCmd->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ NS_Comp_Data::CLcad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
    this->oDs->Clear();
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;
	
    try
    {
        // Placer les données récupérées dans le DataSet
		this->oDA->Fill(this->oDs, sDataTableName);
	}
    catch (System::Exception^ ex)
    {
        // Afficher le message d'erreur si la requête SQL est incorrecte
		System::Windows::Forms::MessageBox::Show('"' + this->sSql + '"' + "\n\n" + ex->Message, "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
        
        // Renvoyer une table avec une colonne "Erreur" et une ligne avec le message d'erreur
        this->oDs->Tables->Add(sDataTableName);
        this->oDs->Tables[sDataTableName]->Columns->Add("Erreur");
        this->oDs->Tables[sDataTableName]->Rows->Add(ex->Message);
	}
    return this->oDs;
}

void NS_Comp_Data::CLcad::actionRows(System::String^ sSql)
{
    this->sSql = sSql;
    this->oCmd->CommandText = this->sSql;
    this->oDA->SelectCommand = this->oCmd;

    try
    {
		// Exécuter la requête SQL en recupérant le nombre de lignes affectées
        int nb_lignes = this->oCmd->ExecuteNonQuery();
	}
    catch (System::Exception^ ex)
    {
		// Afficher le message d'erreur si la requête SQL est incorrecte
		System::Windows::Forms::MessageBox::Show('"' + this->sSql + '"' + "\n\n" + ex->Message, "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
    if (this->oCmd->ExecuteNonQuery() == 0)
    {
		// Afficher le message d'erreur si la requête SQL n'a pas affecté de lignes
        System::Windows::Forms::MessageBox::Show("Aucune ligne affectée", "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
    }
    this->oCnx->Close();
}