#pragma once
#include "Gestion.h"
#include <string>

class command : public Gestion
{
public:
	int order_ref;
	std::string order_date;
	std::string order_status;
	std::string order_type;
	std::string order_payment;
	std::string order_delivery;
	std::string order_address;
	std::string client_name;

private:


};