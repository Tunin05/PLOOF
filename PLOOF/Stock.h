#pragma once
#include "Gestion.h"
#include <string>



class Stock : public Gestion
{
public:
	Stock();

private:
	int id;
	float prixHT;
	std::string designation;
	int quantite;
	int seuilReapprovisionnement;
	float tauxTVA;
	std::string nature;
};