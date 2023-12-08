#include "gestionClient.h"
#include "Gestion.h"
#include "Client.h"

System::Void PLOOF::gestionClient::gestionClient_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->afficher(dataGrid);
	delete client;
}

System::Void PLOOF::gestionClient::btn_actu_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Client^ client = gcnew Client();
	client->afficher(dataGrid);
}
