#include "Commande.h"
#include "CLDB.h"
#include <msclr\marshal_cppstd.h>
#include "Gestion.h"

Commande::Commande()
{
	//Mettre les valeurs par defaut
	/*
	* //Partie clients
	* int client_num; //id du client (stocké dans la table Client) (Clé primaire)
	* System::String^ name;
	* System::String^ firstname;
	* //Partie commandes
	* System::String^ order_ref; //référence de la commande (Clé primaire)
	* int delivery_adress_id; //id de l'adresse de livraison (stockée dans la table Adress)
	* System::String^ delivery_date; //date de livraison
	* System::String^ order_date; //date de commande
	* int billing_adress; //id de l'adresse de facturation (stockée dans la table Adress)
	* System::String^ payment_date; //date de paiement
	* System::String^ payment_method; //méthode de paiement
	* int sale_serv_num; //numéro du service commercial (Générer un random)
	* //Partie containers de commandes
	* int article_ref; //référence de l'article (stocké dans la table Article) (Clé primaire)
	* //order_ref; //référence de la commande (Clé primaire)
	* float prix_ET; //prix hors taxe
	* float VAT; //prix toutes taxes comprises
	* int quantity; //quantité
	*/
	this->client_num = 0;
	this->name = "";
	this->firstname = "";
	this->order_ref = "";
	this->delivery_adress_id = 0;
	this->delivery_date = "";
	this->order_date = "";
	this->billing_adress = 0;
	this->payment_date = "";
	this->payment_method = "";
	this->sale_serv_num = 0;
	this->article_ref = 0;
	this->prix_ET = 0;
	this->VAT = 0;
	this->quantity = 0;

}

Commande::Commande(System::Decimal client_num, System::String^ name, System::String^ firstname, System::String^ order_ref, System::Decimal delivery_adress_id, System::String^ delivery_date, System::String^ order_date, System::Decimal billing_adress, System::String^ payment_date, System::String^ payment_method, System::Decimal sale_serv_num, System::Decimal article_ref, System::Decimal prix_ET, System::Decimal VAT, System::Decimal quantity)
{
	this->client_num = client_num;
	this->name = name;
	this->firstname = firstname;
	this->order_ref = order_ref;
	this->delivery_adress_id = delivery_adress_id;
	this->delivery_date = delivery_date;
	this->order_date = order_date;
	this->billing_adress = billing_adress;
	this->payment_date = payment_date;
	this->payment_method = payment_method;
	this->sale_serv_num = sale_serv_num;
	this->article_ref = article_ref;
	this->prix_ET = prix_ET;
	this->VAT = VAT;
	this->quantity = quantity;
}


Commande::~Commande()
{
}

//Afficher les commandes d'un client
void Commande::afficherCommandeClient(System::Windows::Forms::DataGridView^ data, System::Decimal client_num)
{
	System::String^ query = "SELECT * FROM Orders WHERE client_num = " + client_num;
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}

void Commande::afficherDetailCommande(System::Windows::Forms::DataGridView^ data, System::String^ order_ref)
{
	System::String^ query = "SELECT * FROM Order_Containers WHERE order_ref = '" + order_ref + "'";
	CLDB^ db = gcnew CLDB();
	System::Data::DataSet^ dataset = db->getDataSet(query);
	data->DataSource = dataset->Tables[0];
}


//Ajouter une commande
void Commande::insert() {

}

//Modifier une commande
void Commande::update() {

}

//Supprimer une commande
void Commande::remove() {

}

//Afficher les commandes
void Commande::select()
{

}
