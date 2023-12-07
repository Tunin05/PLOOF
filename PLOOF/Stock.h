#pragma once
#include "Gestion.h"
#include <string>


class Stock : public Gestion {
private:
	int id;
	float prixHT;
	std::string designation;
	int quantite;
	int seuilReapprovisionnement;
	float tauxTVA;
	std::string nature;

public:
	Stock();
	Stock(int quantite, float prixHT, const std::string& designation,
		int seuilReapprovisionnement, float tauxTVA, const std::string& nature);
	Stock(System::String^ designation, System::Decimal quantite, System::Decimal prixHT, System::Decimal seuilReapprovisionnement, System::Decimal tauxTVA, System::String^ nature);


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