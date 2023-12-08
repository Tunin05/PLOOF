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

}
