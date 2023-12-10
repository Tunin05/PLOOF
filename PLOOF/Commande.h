#pragma once
#include "Gestion.h"
#include <string>

class Commande : public Gestion {
private:
	//Partie clients
	int client_num; //id du client (stocké dans la table Client) (Clé primaire)
	std::string name;
	std::string firstname;
	//Partie commandes
	std::string order_ref; //référence de la commande (Clé primaire)
	int delivery_adress_id; //id de l'adresse de livraison (stockée dans la table Adress)
	std::string delivery_date; //date de livraison
	std::string order_date; //date de commande
	int billing_adress; //id de l'adresse de facturation (stockée dans la table Adress)
	std::string payment_date; //date de paiement
	std::string payment_method; //méthode de paiement
	int sale_serv_num; //numéro du service commercial (Générer un random)
	//Partie containers de commandes
	int article_ref; //référence de l'article (stocké dans la table Article) (Clé primaire)
	//order_ref; //référence de la commande (Clé primaire)
	float prix_ET; //prix hors taxe
	float VAT; //prix toutes taxes comprises
	int quantity; //quantité

public:
	Commande();
	Commande(System::Decimal client_num, System::String^ name, System::String^ firstname,
		System::String^ order_ref, System::Decimal delivery_adress_id, System::String^ delivery_date,
		System::String^ order_date, System::Decimal billing_adress, System::String^ payment_date,
		System::String^ payment_method, System::Decimal sale_serv_num, System::Decimal article_ref,
		System::Decimal prix_ET, System::Decimal VAT, System::Decimal quantity);
	~Commande();

	void afficherCommandeClient(System::Windows::Forms::DataGridView^ data, System::Decimal client_num);
	void afficherDetailCommande(System::Windows::Forms::DataGridView^ data, System::String^ order_ref);

	//DB related methods
	void insert() override;
	void update() override;
	void remove() override;
	void select() override;
};

