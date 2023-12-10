#include "Stock.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Stock::Stock()
{
	this->id_article = 0;
	this->id_catalog = 0;
	this->name = "";
	this->quantity = 0;
	this->nature = "";
	this->priceHT = 0;
	this->designation = "";
	this->stock = 0;
	this->seuilReapprovisionnement = 0;
	this->VAT = 0;
}



Stock::Stock(System::String^ name, System::Decimal quantity, System::String^ nature, System::Decimal price_HT, System::String^ designation, System::Decimal stock, System::Decimal reapro, System::Decimal VAT, System::Decimal id_catalog, System::Decimal id_article)
{
	this->id_article = System::Convert::ToInt32(id_article);
	this->id_catalog = System::Convert::ToInt32(id_catalog);
	this->name = msclr::interop::marshal_as<std::string>(name);
	this->quantity = System::Convert::ToInt32(quantity);
	this->nature = msclr::interop::marshal_as<std::string>(nature);
	this->priceHT = System::Convert::ToSingle(price_HT);
	this->designation = msclr::interop::marshal_as<std::string>(designation);
	this->stock = System::Convert::ToInt32(stock);
	this->seuilReapprovisionnement = System::Convert::ToInt32(reapro);
	this->VAT = System::Convert::ToSingle(VAT);
}


//DB related methods
void Stock::insert()
{
	//We first need to insert the article in the catalog table (price, designation, stock, reappro, tva).
	System::String^ query = "INSERT INTO Catalog (price_ET, designation, stock, reorder_threshold, VAT) VALUES (" + this->priceHT + ", '" + gcnew System::String(this->designation.c_str()) + "', " + this->quantity + ", " + this->seuilReapprovisionnement + ", " + this->VAT + ");";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);

	//We then need to insert the article in the article table (name, nature, id_catalog, quantity).
	query = "INSERT INTO Articles (name, nature, id_catalog, quantity) VALUES ('" + gcnew System::String(this->name.c_str()) + "', '" + gcnew System::String(this->nature.c_str()) + "', (SELECT MAX(id_catalog) FROM Catalog), " + this->quantity + ");";
	db = gcnew CLDB();
	db->executeQuery(query);
}

void Stock::update()
{
	//We first need to update the article in the catalog table (price, designation, stock, reappro, tva).
	System::String^ query = "UPDATE Catalog SET price_ET = " + this->priceHT + ", designation = '" + gcnew System::String(this->designation.c_str()) + "', stock = " + this->quantity + ", reorder_threshold = " + this->seuilReapprovisionnement + ", VAT = " + this->VAT + " WHERE id_catalog = " + this->id_catalog + ";";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);

	//We then need to update the article in the article table (name, nature, id_catalog, quantity).
	query = "UPDATE Articles SET name = '" + gcnew System::String(this->name.c_str()) + "', nature = '" + gcnew System::String(this->nature.c_str()) + "', id_catalog = " + this->id_catalog + ", quantity = " + this->quantity + " WHERE article_ref = " + this->id_article + ";";
	db = gcnew CLDB();
	db->executeQuery(query);
}

void Stock::remove()
{
	//delete the article from the article table (name, nature, id_catalog, quantity).
	System::String^ query = "DELETE FROM Articles WHERE article_ref = " + this->id_article + ";";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);

	//delete the article from the catalog table (price, designation, stock, reappro, tva).
	query = "DELETE FROM Catalog WHERE id_catalog = " + this->id_catalog + ";";
	db = gcnew CLDB();
	db->executeQuery(query);

}

void Stock::select()
{
}


//Form related methods
void Stock::show(System::Windows::Forms::DataGridView^ data)
{
	System::String^ query = "SELECT C.*, A.article_ref, A.name, A.quantity, A.nature FROM PLOOF.dbo.Catalog C INNER JOIN PLOOF.dbo.Articles A ON C.id_catalog = A.id_catalog;";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

// Getter functions
float Stock::getPriceHT()
{
	return this->priceHT;
}

std::string Stock::getDesignation()
{
	return this->designation;
}

int Stock::getQuantite()
{
	return this->quantity;
}

int Stock::getReplenishmentThreshold()
{
	return this->seuilReapprovisionnement;
}

float Stock::getTauxVAT()
{
	return this->VAT;
}

std::string Stock::getNature()
{
	return this->nature;
}

// Setter functions

void Stock::setPriceHT(float priceHT)
{
	this->priceHT = priceHT;
}

void Stock::setDesignation(const std::string& designation)
{
	this->designation = designation;
}

void Stock::setQuantite(int quantity)
{
	this->quantity = quantity;
}

void Stock::setSeuilReapprovisionnement(int seuilReapprovisionnement)
{
	this->seuilReapprovisionnement = seuilReapprovisionnement;
}

void Stock::setTauxVAT(float VAT)
{
	this->VAT = VAT;
}

void Stock::setNature(const std::string& nature)
{
	this->nature = nature;
}

