#pragma once
#include <string>

class Gestion {

public:
    virtual ~Gestion() {}

    // CRUD operations
    virtual void insert() = 0;
    virtual void select() const = 0;
    virtual void update() = 0;
    virtual void remove() = 0;

    virtual int getId() const = 0;
};