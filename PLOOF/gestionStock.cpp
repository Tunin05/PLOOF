#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {

	//faire disparaitre le bouton "deny"
	this->deny->Visible = false;
	//faire apparaitre le bouton "add an article"
	this->Add_an_article->Visible = true;

	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock();
	stock->afficher(dataGrid);
	delete stock;
}

System::Void PLOOF::gestionStock::Add_an_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	//faire apparaitre le bouton "deny"
	this->deny->Visible = true;
	//faire disparaitre le bouton "add an article"
	this->Add_an_article->Visible = false;
}

System::Void PLOOF::gestionStock::refresh_button_Click(System::Object^ sender, System::EventArgs^ e) {
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionStock_Load(sender, e);
}

System::Void PLOOF::gestionStock::deny_Click(System::Object^ sender, System::EventArgs^ e)
{
	//faire disparaitre le bouton "deny"
	this->deny->Visible = false;
	//faire apparaitre le bouton "add an article"
	this->Add_an_article->Visible = true;
}
