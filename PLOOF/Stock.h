#pragma once
#include "Gestion.h"
#include <string>


class Stock : public Gestion {
private:
	int id_article;
	int id_catalog;
	std::string name;
	int quantity;
	std::string nature;
	float priceHT;
	std::string designation;
	int stock;
	int seuilReapprovisionnement;
	float VAT;


public:
	Stock();
	Stock::Stock(System::String^ name, System::Decimal quantity, System::String^ nature,
	System::Decimal price_HT, System::String^ designation,
	System::Decimal stock, System::Decimal reapro, System::Decimal VAT,
	System::Decimal id_catalog, System::Decimal id_article);

	void insert() override;
	void update() override;
	void remove() override;
	void select() override;

	void show(System::Windows::Forms::DataGridView^ data);

	float getPriceHT();
	std::string getDesignation();
	int getQuantite();
	int getReplenishmentThreshold();
	float getTauxVAT();
	std::string getNature();

	// Setter functions
	void setPriceHT(float priceHT);
	void setDesignation(const std::string& designation);
	void setQuantite(int quantity);
	void setSeuilReapprovisionnement(int seuilReapprovisionnement);
	void setTauxVAT(float VAT);
	void setNature(const std::string& nature);
};