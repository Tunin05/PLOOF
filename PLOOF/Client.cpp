#include "Client.h"
#include "client.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>

Client::Client()
{
    this->client_num = 0;
    this->name = "";
    this->firstname = "";
    this->birthday = System::DateTime::Now;
    this->first_purchase_date = System::DateTime::Now;
}

Client::Client(System::Decimal client_num, System::String^ name, System::String^ firstname, System::DateTime birthday, System::DateTime first_purchase_date)
{
    this->client_num = System::Convert::ToInt32(client_num);
    this->name = name;
    this->firstname = firstname;
    this->birthday = birthday;
    this->first_purchase_date = first_purchase_date;
}

void Client::insert()
{
    System::String^ query = "INSERT INTO Clients (name, firstname, birthday, first_purchase_date) VALUES ('" + this->name + "', '" + this->firstname + "', '" + this->birthday.ToString("yyyy-MM-dd") + "', '" + this->first_purchase_date.ToString("yyyy-MM-dd") + "');";
    CLDB^ db = gcnew CLDB();
    db->executeQuery(query);
}

void Client::update()
{
    try
    {
        System::String^ query = "UPDATE Clients SET name = '" + this->name + "', firstname = '" + this->firstname + "', birthday = '" + this->birthday.ToString("yyyy-MM-dd") + "', first_purchase_date = '" + this->first_purchase_date.ToString("yyyy-MM-dd") + "' WHERE client_num = " + this->client_num + ";";
        CLDB^ db = gcnew CLDB();
        db->executeQuery(query);
    }
    catch (System::Exception^ e)
    {
        System::Console::WriteLine(e->ToString());
    }
}

void Client::remove()
{
    System::String^ query = "DELETE FROM Clients WHERE client_num = " + this->client_num + ";";
    CLDB^ db = gcnew CLDB();
    db->executeQuery(query);
}

void Client::select()
{
    System::String^ query = "SELECT * FROM Clients WHERE client_num = " + this->client_num + ";";
    CLDB^ db = gcnew CLDB();
    System::Data::DataSet^ data = db->getDataSet(query);
    this->name = data->Tables[0]->Rows[0]->ItemArray[1]->ToString();
    this->firstname = data->Tables[0]->Rows[0]->ItemArray[2]->ToString();
    this->birthday = System::Convert::ToDateTime(data->Tables[0]->Rows[0]->ItemArray[3]->ToString());
    this->first_purchase_date = System::Convert::ToDateTime(data->Tables[0]->Rows[0]->ItemArray[4]->ToString());
}

void Client::select(int client_num)
{
    System::String^ query = "SELECT * FROM Clients WHERE client_num = " + client_num + ";";
    CLDB^ db = gcnew CLDB();
    System::Data::DataSet^ data = db->getDataSet(query);
    this->client_num = System::Convert::ToInt32(data->Tables[0]->Rows[0]->ItemArray[0]->ToString());
    this->name = data->Tables[0]->Rows[0]->ItemArray[1]->ToString();
    this->firstname = data->Tables[0]->Rows[0]->ItemArray[2]->ToString();
    this->birthday = System::Convert::ToDateTime(data->Tables[0]->Rows[0]->ItemArray[3]->ToString());
    this->first_purchase_date = System::Convert::ToDateTime(data->Tables[0]->Rows[0]->ItemArray[4]->ToString());
}

void Client::afficher(System::Windows::Forms::DataGridView^ data)
{
    System::String^ query = "SELECT * FROM Clients;";
    CLDB^ db = gcnew CLDB();
    System::Data::DataSet^ dataset = db->getDataSet(query);
    data->DataSource = dataset->Tables[0];
}

int Client::getClientNum()
{
    return this->client_num;
}

System::String^ Client::getName()
{
    return gcnew System::String(this->name);
}

System::String^ Client::getFirstname()
{
    return gcnew System::String(this->firstname);
}

System::DateTime Client::getBirthday()
{
    return this->birthday;
}

System::DateTime Client::getFirstPurchaseDate()
{
    return this->first_purchase_date;
}

void Client::setClientNum(int num)
{
    this->client_num = num;
}

void Client::setName(System::String^ name)
{
    this->name = name;
}

void Client::setFirstname(System::String^ firstname)
{
    this->firstname = firstname;
}

void Client::setBirthday(System::DateTime birthday)
{
    this->birthday = birthday;
}

void Client::setFirstPurchaseDate(System::DateTime purchaseDate)
{
    this->first_purchase_date = purchaseDate;
}
