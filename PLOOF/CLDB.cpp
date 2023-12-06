#include "CLDB.h"

CLDB::CLDB() {
	try
	{
		this->DBconn = gcnew System::Data::SqlClient::SqlConnection("desktop-flnbqv7;Initial Catalog=PLOOF;User ID=PLOOF_USR;Password=azerty");
		this->DBconn->Open();
	}
	catch (System::Exception^ e)
	{
		System::Console::WriteLine(e->ToString());
	}
}

CLDB::~CLDB() {
	try
	{
		this->DBconn->Close();
	}
	catch (System::Exception^ e)
	{
		System::Console::WriteLine(e->ToString());
	}
}

void CLDB::executeQuery(System::String^ query) {
	try
	{
		System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(query, this->DBconn);
		int nb_l = command->ExecuteNonQuery();
		
		if (nb_l > 0)
		{
			System::Console::WriteLine("Query executed successfully");
		}
		else
		{
			System::Console::WriteLine("Query failed");
		}
	}
	catch (System::Exception^ e)
	{
		System::Console::WriteLine(e->ToString());
	}
}

System::Data::DataSet^ CLDB::getDataSet(System::String^ query)
{
	try
	{
		System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(query, this->DBconn);
		System::Data::DataSet^ ds = gcnew System::Data::DataSet();
		adapter->Fill(ds);
		return ds;
	}
	catch (System::Exception^ e)
	{
		System::Console::WriteLine(e->ToString());
		return nullptr;
	}
}