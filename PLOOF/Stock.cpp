#include "Stock.h"
#include "Gestion.h"

Stock::Stock()
{
	this->id = 0;
	this->prixHT = 0;
	this->designation = "";
	this->quantite = 0;
	this->seuilReapprovisionnement = 0;
	this->tauxTVA = 0;
	this->nature = "";
}
