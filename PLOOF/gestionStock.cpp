#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

int mode = 0;
//mode = 0 : mode normal (sélection d'un mode)
//mode = 1 : mode ajout d'un article
//mode = 2 : mode suppression d'un article
//mode = 3 : mode modification d'un article


//Fonction au chargement de la page
System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {

	this->Add_an_article->Visible = true;
	this->delete_article->Visible = true;
	this->clear_button->Visible = false;
	//Champs et labels de l'ajout d'un article
	gestionStock::SetVisibility(true);

	//Affichage du stock
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock();
	stock->afficher(dataGrid);
	delete stock;
}


System::Void PLOOF::gestionStock::SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int i = e->RowIndex;
	input_prix_HT->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);

	/*name_article->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[]->Value);
	input_quantite->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[]->Value);
	nature_article->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[]->Value);
	designation->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[]->Value);
	input_Stock->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[]->Value);
	input_reapro->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[]->Value);
	input_TVA->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[]->Value);*/


}

System::Void PLOOF::gestionStock::refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);
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

//Fonction lors du clic sur le bouton "Ajouter un article"
System::Void PLOOF::gestionStock::Add_an_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	mode = 1;
}

System::Void PLOOF::gestionStock::delete_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	mode = 2;
}