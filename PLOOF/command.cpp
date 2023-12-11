#include "command.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Commande::Commande()
{
}

Commande::~Commande()
{
}

//Afficher les commandes d'un client
void Commande::afficherCommandeClient(System::Windows::Forms::DataGridView^ data, int client_num)
{
	System::String^ query = "SELECT * FROM Orders WHERE client_num = " + client_num;
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

void Commande::afficherDetailCommande(System::Windows::Forms::DataGridView^ data, System::String^ order_ref)
{
	System::String^ query = "SELECT * FROM Order_Containers WHERE order_ref = '" + order_ref + "'";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

