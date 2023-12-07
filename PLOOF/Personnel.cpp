#include "Personnel.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Personnel::Personnel()
{
	this->name = "";
	this->firstname = "";
	this->name = "";
	this->superior = -1;
	this->address = "";
}

Personnel::Personnel(int id_personal, std::string firstname, std::string name, int superior, std::string address)
{
	this->name = name;
	this->firstname = firstname;
	this->address = address;
	this->superior = superior;
}

void Personnel::insert()
{
	System::String^ query = "INSERT INTO personnel (firstname, name, superior, address) VALUES ('" + gcnew System::String(this->firstname.c_str()) + "', '" + gcnew System::String(this->name.c_str()) + "', " + this->superior + ", '" + gcnew System::String(this->address.c_str()) + "');";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);
}

void Personnel::update()
{
	try
	{
		System::String^ query = "UPDATE personnel SET firstname = '" + gcnew System::String(this->firstname.c_str()) + "', name = '" + gcnew System::String(this->name.c_str()) + "', superior = " + this->superior + ", address = '" + gcnew System::String(this->address.c_str()) + "' WHERE id_personal = " + this->id_personal + ";";
		CLDB^ db = gcnew CLDB();
		db->executeQuery(query);
	}
	catch (System::Exception^ e)
	{
		System::Console::WriteLine(e->ToString());
	}
}


void Personnel::remove()
{
	System::String^ query = "DELETE FROM personnel WHERE id_personal = " + this->id_personal + ";";
	CLDB^ db = gcnew CLDB();
	db->executeQuery(query);
}

void Personnel::select()
{
	System::String^ query = "SELECT * FROM personnel WHERE id_personal = " + this->id_personal + ";";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ data = db->getDataSet(query);
	this->firstname = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[1]->ToString());
	this->name = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[2]->ToString());
	this->superior = System::Convert::ToInt32(data->Tables[0]->Rows[0]->ItemArray[3]->ToString());
	this->address = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[4]->ToString());
}

void Personnel::select(int id)
{
	System::String^ query = "SELECT * FROM personnel WHERE id_personal = " + id + ";";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ data = db->getDataSet(query);
	this->id_personal = System::Convert::ToInt32(data->Tables[0]->Rows[0]->ItemArray[0]->ToString());
	this->firstname = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[1]->ToString());
	this->name = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[2]->ToString());
	this->superior = System::Convert::ToInt32(data->Tables[0]->Rows[0]->ItemArray[3]->ToString());
	this->address = msclr::interop::marshal_as<std::string>(data->Tables[0]->Rows[0]->ItemArray[4]->ToString());
}

void Personnel::afficher(System::Windows::Forms::DataGridView^ data)
{
	System::String^ query = "SELECT * FROM personnel;";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

std::string Personnel::getFirstname() const
{
	return this->firstname;
}

std::string Personnel::getName() const
{
	return this->name;
}

int Personnel::getSuperior() const
{
	return this->superior;
}

std::string Personnel::getAddress() const
{
	return this->address;
}

int Personnel::getId() const
{
	return this->id_personal;
}

void Personnel::setId(int id)
{
	this->id_personal = id;
}

void Personnel::setFirstname(std::string firstname)
{
	this->firstname = firstname;
}

void Personnel::setName(std::string name)
{
	this->name = name;
}

void Personnel::setSuperior(int superior)
{
	this->superior = superior;
}

void Personnel::setAddress(std::string address)
{
	this->address = address;
}
