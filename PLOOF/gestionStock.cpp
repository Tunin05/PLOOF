#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"


//Fonction au chargement de la page
System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {

	this->Add_an_article->Visible = true;
	this->delete_article->Visible = true;
	this->clear_button->Visible = true;
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
	id_catalog_input->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
	input_prix_HT->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[1]->Value);
	designation->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value);
	input_Stock->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
	input_reapro->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[4]->Value);
	input_TVA->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value);
	id_article_input->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[6]->Value);
	name_article->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[7]->Value);
	input_quantite->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[8]->Value);
	nature_article->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[9]->Value);
}

System::Void PLOOF::gestionStock::refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);
}


System::Void PLOOF::gestionStock::clear_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->id_article_input->Text = "0";
	this->name_article->Text = "";
	this->id_catalog_input->Text = "0";
	this->input_quantite->Text = "0";
	this->nature_article->Text = "";
	this->input_prix_HT->Text = "0";
	this->designation->Text = "";
	this->input_Stock->Text = "0";
	this->input_reapro->Text = "0";
	this->input_TVA->Text = "0";

}

//Fonction lors du clic sur le bouton "Ajouter un article"
System::Void PLOOF::gestionStock::Add_an_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Ajout d'un article
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock(name_article->Text, input_quantite->Value, nature_article->Text,
		input_prix_HT->Value, designation->Text, input_Stock->Value, input_reapro->Value,
		input_TVA->Value, id_catalog_input->Value, id_article_input->Value);
	stock->insert();
	delete stock;
	clear_button_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);

}

System::Void PLOOF::gestionStock::delete_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Suppression d'un article
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock(name_article->Text, input_quantite->Value, nature_article->Text,
		input_prix_HT->Value, designation->Text, input_Stock->Value, input_reapro->Value,
		input_TVA->Value, id_catalog_input->Value, id_article_input->Value);
	stock->remove();
	delete stock;
	clear_button_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);
}

//Fonction lors du clic sur le bouton "Modifier un article"
System::Void PLOOF::gestionStock::change_article_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock(name_article->Text, input_quantite->Value, nature_article->Text,
		input_prix_HT->Value, designation->Text, input_Stock->Value, input_reapro->Value,
		input_TVA->Value, id_catalog_input->Value, id_article_input->Value);
	stock->update();
	delete stock;
	clear_button_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);

}
