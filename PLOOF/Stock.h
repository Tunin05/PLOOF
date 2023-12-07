#pragma once
#include "Gestion.h"
#include <string>


//test
class Stock : public Gestion {
public:
	Stock();

	void insert() override;
	void update() override;
	void remove() override;
	void select() override;
	void select(int id);
	void afficher(System::Windows::Forms::DataGridView^ data);

private:
	int id;
	float prixHT;
	std::string designation;
	int quantite;
	int seuilReapprovisionnement;
	float tauxTVA;
	std::string nature;
};