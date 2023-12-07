#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

int mode = 0;
//mode = 0 : mode normal (s�lection d'un mode)
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
	//remettre les champs � leurs valeurs par d�faut
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
		//r�cuperer les donn�es des champs
		String^ name = this->name_article->Text;
		String^ q = this->input_quantite->Text;
		String^ nature = this->nature_article->Text;
		String^ prix_HT = this->input_prix_HT->Text;
		String^ designation = this->designation->Text;
		String^ stock = this->input_Stock->Text;
		String^ reapro = this->input_reapro->Text;
		String^ TVA = this->input_TVA->Text;


		//check si les champs sont remplis et si les donn�es sont correctes
		if (name == "" || q == "" || nature == "" || prix_HT == "" || designation == "" || stock == "" || reapro == "" || TVA == "") {
			MessageBox::Show("Veuillez remplir tous les champs");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(name, "[^a-zA-Z0-9 ]")) {
			MessageBox::Show("Le nom de l'article ne doit contenir que des lettres, des chiffres ou des espaces");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(q, "[^0-9]")) {
			MessageBox::Show("La quantit� ne doit contenir que des chiffres");
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
			MessageBox::Show("La d�signation ne doit contenir que des lettres, des chiffres ou des espaces");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(stock, "[^0-9]")) {
			MessageBox::Show("Le stock ne doit contenir que des chiffres");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(reapro, "[^0-9]")) {
			MessageBox::Show("Le r�approvisionnement ne doit contenir que des chiffres");
			return;
		}
		if (System::Text::RegularExpressions::Regex::IsMatch(TVA, "[^0-9]")) {
			MessageBox::Show("La TVA ne doit contenir que des chiffres");
			return;
		}


		//message box pour afficher les donn�es r�cup�r�es des champs (pour tester)
		MessageBox::Show("name : " + name + "\nq : " + q + "\nnature : " + nature + "\nprix_HT : " + prix_HT + "\ndesignation : " + designation + "\nstock : " + stock + "\nreapro : " + reapro + "\nTVA : " + TVA);
	}
}

