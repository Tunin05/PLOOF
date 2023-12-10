#include "gestionClient.h"
#include "Gestion.h"
#include "Client.h"

System::Void PLOOF::gestionClient::btn_retourListe_Click(System::Object^ sender, System::EventArgs^ e)
{
	// On modifie le bouton retour par 'Retour à la liste des clients' et on change son action
	btn_retour->Click -= gcnew System::EventHandler(this, &gestionClient::btn_retourListe_Click);
	btn_retour->Click += gcnew System::EventHandler(this, &gestionClient::btn_retour_Click);

	label1->Text = "Liste des clients";
	panel1->Visible = true;
	panel2->Visible = false;

	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->show(dataGrid);
}

System::Void PLOOF::gestionClient::gestionClient_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->show(dataGrid);
}

System::Void PLOOF::gestionClient::btn_actu_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->show(dataGrid);
	GC::Collect();
}

System::Void PLOOF::gestionClient::SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int i = e->RowIndex;
	num_client->Value =Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
	nom_client->Text = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
	prenom_client->Text = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
	date_naissance->Value = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[3]->Value);
	date_commande->Value = Convert::ToDateTime(dataGridView1->Rows[i]->Cells[4]->Value);
}

System::Void PLOOF::gestionClient::btn_recherche_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->find(dataGrid, num_client->Value, nom_client->Text, prenom_client->Text, date_naissance->Value, date_commande->Value, date_bool->Checked);
	delete client;
}

System::Void PLOOF::gestionClient::btn_creer_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Client^ client = gcnew Client(num_client->Value, nom_client->Text, prenom_client->Text, date_naissance->Value, date_commande->Value);
	client->insert();
	delete client;
	gestionClient_Load(sender, e);
}

System::Void PLOOF::gestionClient::btn_modif_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Client^ client = gcnew Client(num_client->Value, nom_client->Text, prenom_client->Text, date_naissance->Value, date_commande->Value);
	client->update();
	delete client;
	gestionClient_Load(sender, e);
}

System::Void PLOOF::gestionClient::adr_client_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (num_client->Value > 0)
	{
		btn_retour->Click -= gcnew System::EventHandler(this, &gestionClient::btn_retour_Click);
		btn_retour->Click += gcnew System::EventHandler(this, &gestionClient::btn_retourListe_Click);

		label1->Text = "Liste des addresses de " + nom_client->Text + " " + prenom_client->Text;

        panel1->Visible = false;
		panel2->Visible = true;

		System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
		Client^ client = gcnew Client();
		client->setClientNum(Convert::ToInt32(num_client->Value));
		client->showAddresse(dataGrid);
		delete client;
	}
	else
	{
		MessageBox::Show("Veuillez selectionner un client");
	}
}

System::Void PLOOF::gestionClient::creer_adr_Click(System::Object^ sender, System::EventArgs^ e)
{

}
