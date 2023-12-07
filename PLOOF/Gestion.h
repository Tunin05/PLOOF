#pragma once

class Gestion {

    public:
        virtual ~Gestion() {}

        // CRUD operations
        virtual void insert() = 0;
        virtual void select() = 0;
        virtual void update() = 0;
        virtual void remove() = 0;
        virtual void afficher(System::Windows::Forms::DataGridView^ data) = 0;

};
