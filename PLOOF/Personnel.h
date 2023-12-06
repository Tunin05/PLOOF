#pragma once
#include "Gestion.h"
#include <string>

class Personnel : public Gestion {
private:
    int id_personal;
    std::string firstname;
    std::string name;
    int superior;
    std::string address;

public:
    Personnel();
    Personnel(int id_personal, std::string firstname, std::string name, int superior, std::string address);

    void insert() override;
    void update() override;
    void remove() override;
    void select() override;

    int getId() const;
    void setId(int id);
    std::string getFirstname() const;
    void setFirstname(std::string firstname);
    std::string getName() const;
    void setName(std::string name);
    int getSuperior() const;
    void setSuperior(int superior);
    std::string getAddress() const;
    void setAddress(std::string address);
};

