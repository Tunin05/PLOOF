#pragma once
#include "Gestion.h"
#include <string>

public ref class Commande
{
private:
	//Partie clients
	int client_num; //id du client (stocké dans la table Client) (Clé primaire)
	System::String^ name;
	System::String^ firstname;
	//Partie commandes
	System::String^ order_ref; //référence de la commande (Clé primaire)
	int delivery_adress_id; //id de l'adresse de livraison (stockée dans la table Adress)
	System::String^ delivery_date; //date de livraison
	System::String^ order_date; //date de commande
	int billing_adress; //id de l'adresse de facturation (stockée dans la table Adress)
	System::String^ payment_date; //date de paiement
	System::String^ payment_method; //méthode de paiement
	int sale_serv_num; //numéro du service commercial (Générer un random)
	//Partie containers de commandes
	int article_ref; //référence de l'article (stocké dans la table Article) (Clé primaire)
	//order_ref; //référence de la commande (Clé primaire)
	float prix_ET; //prix hors taxe
	float VAT; //prix toutes taxes comprises

public:
	Commande();
	~Commande();

	void afficherCommandeClient(System::Windows::Forms::DataGridView^ data, int client_num);
};

