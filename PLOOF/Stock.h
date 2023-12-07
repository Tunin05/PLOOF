#pragma once
#include "Gestion.h"
#include <string>


class Stock : public Gestion {
private:
	std::string name;
	int quantite;
	std::string nature;
	float prixHT;
	std::string designation;
	int stock;
	int seuilReapprovisionnement;
	float tauxTVA;


public:
	Stock();
	//Stock possède name (string), quantite (int), nature (string),
	//prix_HT (float), designation (string), 
	//stock (int), reapro (int), TVA (int)
	Stock(System::String^ name, System::Decimal quantite, System::String^ nature,
		System::Decimal prix_HT, System::String^ designation,
		System::Decimal stock, System::Decimal reapro, System::Decimal TVA);

	//DB related methods
	void insert() override;
	void update() override;
	void remove() override;
	void select() override;
	void select(int id);
	//Form related methods
	void afficher(System::Windows::Forms::DataGridView^ data);

	// Getter functions
	int getID();
	float getPrixHT();
	std::string getDesignation();
	int getQuantite();
	int getSeuilReapprovisionnement();
	float getTauxTVA();
	std::string getNature();

	// Setter functions
	void setID(int id);
	void setPrixHT(float prixHT);
	void setDesignation(const std::string& designation);
	void setQuantite(int quantite);
	void setSeuilReapprovisionnement(int seuilReapprovisionnement);
	void setTauxTVA(float tauxTVA);
	void setNature(const std::string& nature);
};