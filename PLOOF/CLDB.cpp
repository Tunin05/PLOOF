#include "CLDB.h"

CLDB::CLDB() {
	try
	{
		//this->DBconn = gcnew System::Data::SqlClient::SqlConnection("Data Source = desktop-flnbqv7; Initial Catalog = PLOOF; User ID = PLOOF_USR; Password = azerty");
		this->DBconn = gcnew System::Data::SqlClient::SqlConnection("Data Source = PC-STEEVEN-LENO; Initial Catalog = PLOOF; Integrated Security = True");
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
			System::Windows::Forms::MessageBox::Show("Succès de l'opération \n" + nb_l + " lignes affectées", "Succès", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Echec de l'opération", "Echec", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			//afficher les details de l'erreur
			System::Windows::Forms::MessageBox::Show(command->CommandText, "Erreur", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
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
		System::Windows::Forms::MessageBox::Show(e->ToString());

		return nullptr;
	}
}