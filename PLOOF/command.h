#pragma once
#include "Gestion.h"
#include <string>

public ref class Commande
{
private:
	//Partie clients
	int client_num; //id du client (stock� dans la table Client) (Cl� primaire)
	System::String^ name;
	System::String^ firstname;
	//Partie commandes
	System::String^ order_ref; //r�f�rence de la commande (Cl� primaire)
	int delivery_adress_id; //id de l'adresse de livraison (stock�e dans la table Adress)
	System::String^ delivery_date; //date de livraison
	System::String^ order_date; //date de commande
	int billing_adress; //id de l'adresse de facturation (stock�e dans la table Adress)
	System::String^ payment_date; //date de paiement
	System::String^ payment_method; //m�thode de paiement
	int sale_serv_num; //num�ro du service commercial (G�n�rer un random)
	//Partie containers de commandes
	int article_ref; //r�f�rence de l'article (stock� dans la table Article) (Cl� primaire)
	//order_ref; //r�f�rence de la commande (Cl� primaire)
	float prix_ET; //prix hors taxe
	float VAT; //prix toutes taxes comprises

public:
	Commande();
	~Commande();

	void afficherCommandeClient(System::Windows::Forms::DataGridView^ data, int client_num);
	void afficherDetailCommande(System::Windows::Forms::DataGridView^ data, System::String^ order_ref);
};

