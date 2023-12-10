-- Insertion des données pour les tests unitaires

-- Ajout d'employés avec deux supérieurs
INSERT INTO Personal (firstname, name, superior, adress)
VALUES 
    ('John', 'Doe', NULL, '123 Main St'),
    ('Alice', 'Smith', 1, '456 Oak St'),
    ('Bob', 'Johnson', 1, '789 Elm St'),
    ('Eva', 'Brown', 3, '101 Pine St');

-- Clients
INSERT INTO Clients (name, firstname, birthday, first_purchase_date)
VALUES 
    ('Johnson', 'Mark', '1980-05-15', '2023-01-01'),
    ('Smith', 'Alice', '1992-08-22', '2023-02-15');

-- Adresses
INSERT INTO Adress (country, ZIP_code, city, street, house_number, complement, client_num)
VALUES 
    ('France', '75001', 'Paris', 'Rue de la Paix', '123', 'Appt 45', 1),
    ('France', '69001', 'Lyon', 'Rue Bellecour', '789', NULL, 2);


-- Catalogue - Produits épuisés
INSERT INTO Catalog (price_ET, designation, stock, reorder_threshold, VAT)
VALUES 
    (50.00, 'Processor', 0, 20, 0.20),
    (30.00, 'Memory Module', 5, 30, 0.15);

-- Articles
INSERT INTO Articles (name, quantity, nature, id_catalog)
VALUES 
    ('Intel Core i7', 10, 'Electronics', 1),
    ('8GB DDR4 RAM', 20, 'Electronics', 2),
    ('AMD Ryzen 5', 5, 'Electronics', 1);


-- Commandes
INSERT INTO Orders (order_ref, delivery_adress_id, delivery_date, order_date, billing_adress, payment_date, payment_method, sale_serv_num, client_num)
VALUES 
    ('JM202301001', 1, '2023-01-10', '2023-01-01', 1, '2023-01-05', 'Credit Card', 1, 1),
    ('AS202302001', 2, '2023-02-20', '2023-02-15', 2, '2023-02-18', 'PayPal', 2, 2),
    ('BJ202303001', 1, '2023-03-15', '2023-03-01', 1, '2023-03-10', 'Bank Transfer', 3, 1);

SET IDENTITY_INSERT Order_containers ON;

-- Commande avec plusieurs articles
INSERT INTO Order_containers (article_ref, order_ref, price_ET, VAT)
VALUES 
    (1, 'JM202301001', 50.00, 0.20),
    (2, 'JM202301001', 30.00, 0.15),
    (3, 'JM202301001', 150.00, 0.20);

-- Deuxième commande pour un client
INSERT INTO Order_containers (article_ref, order_ref, price_ET, VAT)
VALUES 
    (2, 'AS202302001', 30.00, 0.15);



SET IDENTITY_INSERT Order_containers OFF;

-- Adresse de facturation différente
INSERT INTO Adress (country, ZIP_code, city, street, house_number, complement, client_num)
VALUES 
    ('France', '75002', 'Paris', 'Rue du Faubourg', '456', NULL, 2);

-- Un employé avec deux supérieurs
INSERT INTO Personal (firstname, name, superior, adress)
VALUES 
    ('Eva', 'Brown', 2, '101 Pine St');

