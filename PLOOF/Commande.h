#pragma once
#include "Gestion.h"
#include <string>

public ref class Commande
{
private:
	//Partie clients
	System::Decimal client_num; //id du client (stock� dans la table Client) (Cl� primaire)
	System::String^ name;
	System::String^ firstname;
	//Partie commandes
	System::String^ order_ref; //r�f�rence de la commande (Cl� primaire)
	System::Decimal delivery_adress_id; //id de l'adresse de livraison (stock�e dans la table Adress)
	System::String^ delivery_date; //date de livraison
	System::String^ order_date; //date de commande
	System::Decimal billing_adress; //id de l'adresse de facturation (stock�e dans la table Adress)
	System::String^ payment_date; //date de paiement
	System::String^ payment_method; //m�thode de paiement
	System::Decimal sale_serv_num; //num�ro du service commercial (G�n�rer un random)
	//Partie containers de commandes
	System::Decimal article_ref; //r�f�rence de l'article (stock� dans la table Article) (Cl� primaire)
	//order_ref; //r�f�rence de la commande (Cl� primaire)
	System::Decimal prix_ET; //prix hors taxe
	System::Decimal VAT; //prix toutes taxes comprises
	System::Decimal quantity; //quantit�

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

