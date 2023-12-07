#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

int mode = 0;
//mode = 0 : mode normal (sélection d'un mode)
//mode = 1 : mode ajout d'un article
//mode = 2 : mode suppression d'un article
//mode = 3 : mode modification d'un article



System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {

	this->deny->Visible = false;
	this->Add_an_article->Visible = true;
	this->valider_bouton->Visible = false;
	this->clear_button->Visible = false;
	//Champs et labels de l'ajout d'un article
	gestionStock::SetVisibility(false);

	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock();
	stock->afficher(dataGrid);
	delete stock;
}

System::Void PLOOF::gestionStock::Add_an_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	mode = 1;
	this->Add_an_article->Visible = false;
	this->deny->Visible = true;
	this->valider_bouton->Visible = true;
	this->clear_button->Visible = true;

	//Champs et labels de l'ajout d'un article
	gestionStock::SetVisibility(true);
}

System::Void PLOOF::gestionStock::refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);
}

System::Void PLOOF::gestionStock::deny_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Add_an_article->Visible = true;
	this->deny->Visible = false;
	this->valider_bouton->Visible = false;
	this->clear_button->Visible = false;


	//Champs et labels de l'ajout d'un article
	gestionStock::SetVisibility(false);
}

System::Void PLOOF::gestionStock::clear_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	//remettre les champs à leurs valeurs par défaut
	if (mode == 1) {
		this->name_article->Text = "Nom de l'article";
		this->input_quantite->Text = "0";
		this->nature_article->Text = "Nature de l'article";
		this->input_prix_HT->Text = "0";
		this->designation->Text = "Designation";
		this->input_Stock->Text = "0";
		this->input_reapro->Text = "0";
		this->input_TVA->Text = "0";
	}
}


System::Void PLOOF::gestionStock::valider_bouton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mode == 1) {
		//créer un objet stock avec les données récupérées
		Stock* stock = new Stock(this->name_article->Text, System::Convert::ToDecimal(this->input_quantite->Text), msclr::interop::marshal_as<std::string>(this->nature_article->Text), System::Convert::ToDecimal(this->input_prix_HT->Text), msclr::interop::marshal_as<std::string>(this->designation->Text), System::Convert::ToDecimal(this->input_Stock->Text), System::Convert::ToDecimal(this->input_reapro->Text), System::Convert::ToDecimal(this->input_TVA->Text);
		stock->insert();
		delete stock;
	}
}

