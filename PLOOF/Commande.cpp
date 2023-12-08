#include "Commande.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Commande::Commande()
{
}

Commande::~Commande()
{
}

void Commande::afficherCommandeClient(System::Windows::Forms::DataGridView^ data, int client_num)
{
	System::String^ query = "SELECT * FROM Orders WHERE client_num = " + client_num;
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

