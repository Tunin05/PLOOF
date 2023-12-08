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

    // Display Methods
    void afficher(System::Windows::Forms::DataGridView^ data);

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
