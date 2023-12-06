#include "Personnel.h"

void Personnel::setPersonnel(string name, string surname, string id, string password, string position, string department, string salary)
{
	this->name = name;
	this->surname = surname;
	this->id = id;
	this->password = password;
	this->position = position;
	this->department = department;
	this->salary = salary;
}

