#include "Stock.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Stock::Stock()
{
	this->id = 0;
	this->prixHT = 0;
	this->designation = "";
	this->quantite = 0;
	this->seuilReapprovisionnement = 0;
	this->tauxTVA = 0;
	this->nature = "";
}

void Stock::insert()
{
}

void Stock::update()
{
}

void Stock::remove()
{
}

void Stock::select()
{
}

void Stock::select(int id)
{

}

void Stock::afficher(System::Windows::Forms::DataGridView^ data)
{
	System::String^ query = "SELECT * FROM Catalog;";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}


