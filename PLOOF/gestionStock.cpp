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
	//Champs et labels de l'ajout d'un article
	//appel de la fonction afficher de la classe stock

	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock();
	stock->afficher(dataGrid);
	delete stock;
}

System::Void PLOOF::gestionStock::Add_an_article_Click(System::Object^ sender, System::EventArgs^ e)
{
	mode = 1;
	//faire apparaitre le bouton "deny"
	this->deny->Visible = true;
	//faire disparaitre le bouton "add an article"
	this->Add_an_article->Visible = false;
	//faire apparaitre le bouton "valider"
	this->valider_bouton->Visible = true;

	//Champs et labels de l'ajout d'un article
	this->name_article->Visible = true;
	this->input_quantite->Visible = true;
	this->label_quantite->Visible = true;
	this->nature_article->Visible = true;
	this->label_article->Visible = true;
	this->label_catalog->Visible = true;
	this->label_prix_HT->Visible = true;
	this->input_prix_HT->Visible = true;
	this->designation->Visible = true;
	this->label_Stock->Visible = true;
	this->input_Stock->Visible = true;
	this->label2->Visible = true;
	this->input_reapro->Visible = true;
	this->input_TVA->Visible = true;
	this->label_TVA->Visible = true;
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
	//faire disparaitre le bouton "valider"
	this->valider_bouton->Visible = false;

	//Champs et labels de l'ajout d'un article
	this->name_article->Visible = false;
	this->label_quantite->Visible = false;
	this->input_quantite->Visible = false;
	this->nature_article->Visible = false;
	this->label_article->Visible = false;
	this->label_catalog->Visible = false;
	this->label_prix_HT->Visible = false;
	this->input_prix_HT->Visible = false;
	this->designation->Visible = false;
	this->label_Stock->Visible = false;
	this->input_Stock->Visible = false;
	this->label2->Visible = false;
	this->input_reapro->Visible = false;
	this->input_TVA->Visible = false;
	this->label_TVA->Visible = false;
}


System::Void PLOOF::gestionStock::valider_bouton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (mode == 1) {
		//récuperer les données des champs
		String^ name = this->name_article->Text;
		String^ q = this->input_quantite->Text;
		String^ nature = this->nature_article->Text;
		String^ prix_HT = this->input_prix_HT->Text;
		String^ designation = this->designation->Text;
		String^ stock = this->input_Stock->Text;
		String^ reapro = this->input_reapro->Text;
		String^ TVA = this->input_TVA->Text;


		//check si les champs sont remplis et si les données sont correctes
		if (name == "" || q == "" || nature == "" || prix_HT == "" || designation == "" || stock == "" || reapro == "" || TVA == "") {
			MessageBox::Show("Veuillez remplir tous les champs");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(name, "[^a-zA-Z0-9 ]")) {
			MessageBox::Show("Le nom de l'article ne doit contenir que des lettres, des chiffres ou des espaces");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(q, "[^0-9]")) {
			MessageBox::Show("La quantité ne doit contenir que des chiffres");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(nature, "[^a-zA-Z0-9 ]")) {
			MessageBox::Show("La nature ne doit contenir que des lettres, des chiffres ou des espaces");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(prix_HT, "[^0-9.]")) {
			MessageBox::Show("Le prix HT ne doit contenir que des chiffres ou des points");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(designation, "[^a-zA-Z0-9 ]")) {
			MessageBox::Show("La désignation ne doit contenir que des lettres, des chiffres ou des espaces");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(stock, "[^0-9]")) {
			MessageBox::Show("Le stock ne doit contenir que des chiffres");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(reapro, "[^0-9]")) {
			MessageBox::Show("Le réapprovisionnement ne doit contenir que des chiffres");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(TVA, "[^0-9]")) {
			MessageBox::Show("La TVA ne doit contenir que des chiffres");
			return;
		}


		//message box pour afficher les données récupérées des champs (pour tester)
		MessageBox::Show("name : " + name + "\nq : " + q + "\nnature : " + nature + "\nprix_HT : " + prix_HT + "\ndesignation : " + designation + "\nstock : " + stock + "\nreapro : " + reapro + "\nTVA : " + TVA);
	}
}

