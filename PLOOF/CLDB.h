#pragma once
ref class CLDB
{
    private:
        System::Data::SqlClient::SqlConnection^ DBconn;
    public:
 	    CLDB(void);
        ~CLDB(void);
        void executeQuery(System::String^ query);
        System::Data::DataSet^ getDataSet(System::String^ query);
};

