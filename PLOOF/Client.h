#pragma once
#include "Gestion.h"
#include <string>

ref class CLDB;

public ref class Client
{
private:
    int client_num;
    System::String^ name;
    System::String^ firstname;
    System::DateTime birthday;
    System::DateTime first_purchase_date;

public:
    // Constructors
    Client();
    Client(System::Decimal client_num, System::String^ name, System::String^ firstname, System::DateTime birthday, System::DateTime first_purchase_date);

    // CRUD Operations
    void insert();
    void update();
    void remove();
    void select();
    void select(int client_num);
    void show(System::Windows::Forms::DataGridView^ data);
    void showAddresse(System::Windows::Forms::DataGridView^ data);
    void find(System::Windows::Forms::DataGridView^ data, System::Decimal client_num, System::String^ name, System::String^ firstname, System::DateTime birthday, System::DateTime first_purchase_date, bool date);

    // Getters and Setters
    int getClientNum();
    System::String^ getName();
    System::String^ getFirstname();
    System::DateTime getBirthday();
    System::DateTime getFirstPurchaseDate();

    void setClientNum(int num);
    void setName(System::String^ name);
    void setFirstname(System::String^ firstname);
    void setBirthday(System::DateTime birthday);
    void setFirstPurchaseDate(System::DateTime purchaseDate);
};
