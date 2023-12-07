#include "Stock.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Stock::Stock()
{
	this->prixHT = 0;
	this->designation = "";
	this->quantite = 0;
	this->seuilReapprovisionnement = 0;
	this->tauxTVA = 0;
	this->nature = "";
}


Stock::Stock(System::String^ name, System::Decimal quantite, System::String^ nature, System::Decimal prix_HT, System::String^ designation, System::Decimal stock, System::Decimal reapro, System::Decimal TVA)
{
	this->name = msclr::interop::marshal_as<std::string>(name);
	this->quantite = System::Convert::ToInt32(quantite);
	this->nature = msclr::interop::marshal_as<std::string>(nature);
	this->prixHT = System::Convert::ToSingle(prix_HT);
	this->designation = msclr::interop::marshal_as<std::string>(designation);
	this->stock = System::Convert::ToInt32(stock);
	this->seuilReapprovisionnement = System::Convert::ToInt32(reapro);
	this->tauxTVA = System::Convert::ToSingle(TVA);
}


//DB related methods
void Stock::insert()
{
	//We firt need to insert the article in the catalog table (price, designation, stock, reappro, tva).
	System::String^ query = "INSERT INTO Catalog (price_ET, designation, stock, reorder_threshold, VAT) VALUES (" + this->prixHT + ", '" + gcnew System::String(this->designation.c_str()) + "', " + this->quantite + ", " + this->seuilReapprovisionnement + ", " + this->tauxTVA + ");";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);

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

//Form related methods
void Stock::afficher(System::Windows::Forms::DataGridView^ data)
{
	System::String^ query = "SELECT * FROM Catalog;";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

// Getter functions
int Stock::getID()
{
	return this->id;
}

float Stock::getPrixHT()
{
	return this->prixHT;
}

std::string Stock::getDesignation()
{
	return this->designation;
}

int Stock::getQuantite()
{
	return this->quantite;
}

int Stock::getSeuilReapprovisionnement()
{
	return this->seuilReapprovisionnement;
}

float Stock::getTauxTVA()
{
	return this->tauxTVA;
}

std::string Stock::getNature()
{
	return this->nature;
}

// Setter functions
void Stock::setID(int id)
{
	this->id = id;
}

void Stock::setPrixHT(float prixHT)
{
	this->prixHT = prixHT;
}

void Stock::setDesignation(const std::string& designation)
{
	this->designation = designation;
}

void Stock::setQuantite(int quantite)
{
	this->quantite = quantite;
}

void Stock::setSeuilReapprovisionnement(int seuilReapprovisionnement)
{
	this->seuilReapprovisionnement = seuilReapprovisionnement;
}

void Stock::setTauxTVA(float tauxTVA)
{
	this->tauxTVA = tauxTVA;
}

void Stock::setNature(const std::string& nature)
{
	this->nature = nature;
}

