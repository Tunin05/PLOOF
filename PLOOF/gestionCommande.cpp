#include "gestionCommande.h"
#include "Gestion.h"
#include "Commande.h"
#include "Client.h"
#include "CLDB.h"

System::Void PLOOF::gestionCommande::gestionCommande_Load(System::Object^ sender, System::EventArgs^ e)
{
	//Affichage des clients
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView_clients;
	Client^ client = gcnew Client();
	client->afficherClientCommande(dataGrid);
	delete client;

}


System::Void PLOOF::gestionCommande::refresh_button_Click(System::Object^ sender, System::EventArgs^ e)
{
}


System::Void PLOOF::gestionCommande::SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
}

System::Void PLOOF::gestionCommande::SelectRowClients(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int i = e->RowIndex;
	name_client->Text = this->dataGridView_clients->Rows[i]->Cells[1]->Value->ToString();
	prenom_client->Text = this->dataGridView_clients->Rows[i]->Cells[2]->Value->ToString();
	id_client->Value = System::Convert::ToInt32(this->dataGridView_clients->Rows[i]->Cells[0]->Value);

	//Affichage des commandes
	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridViewListCommande;
	Commande^ commande = gcnew Commande();
	commande->afficherCommandeClient(dataGrid, System::Convert::ToInt32(id_client->Value));
	delete commande;
}

System::Void PLOOF::gestionCommande::SelectRowCommande(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int i = e->RowIndex;
	input_reference->Text = this->dataGridViewListCommande->Rows[i]->Cells[0]->Value->ToString();
	input_add_livraison->Text = this->dataGridViewListCommande->Rows[i]->Cells[1]->Value->ToString();
	date_de_livraison->Value = Convert::ToDateTime(dataGridViewListCommande->Rows[i]->Cells[3]->Value);
	date_de_commande->Value = Convert::ToDateTime(dataGridViewListCommande->Rows[i]->Cells[3]->Value);
	date_de_payement->Value = Convert::ToDateTime(dataGridViewListCommande->Rows[i]->Cells[4]->Value);
	input_methode_payement->Text = this->dataGridViewListCommande->Rows[i]->Cells[5]->Value->ToString();
	//num_serv_commercial->Value = System::Convert::ToInt32(this->dataGridViewListCommande->Rows[i]->Cells[6]->Value);
}
