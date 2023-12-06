#pragma once
#include "Gestion.h"

class Personnel : public Gestion {
private:
    int id_personal;
    std::string firstname;
    std::string name;
    int superior;
    std::string address;

public:
    Personnel();
    // Add constructors and other necessary methods

    // Override Gestion virtual functions
    void insert() override;
    void select() const override;
    void update() override;
    void remove() override;

    // Override Gestion virtual getters and setters
    int getId() const override;
    void setId(int id) override;

    // Add getters and setters for other attributes
    std::string getFirstname() const;
    void setFirstname(std::string firstname);
    std::string getName() const;
    void setName(std::string name);
    int getSuperior() const;
    void setSuperior(int superior);
    std::string getAddress() const;
    void setAddress(std::string address);
};

