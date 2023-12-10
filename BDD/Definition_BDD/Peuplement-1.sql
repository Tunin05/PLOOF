-- Insertion de donn�es dans la table Personal
INSERT INTO Personal (firstname, name, superior, adress) VALUES
('Jean', 'Dupont', NULL, '1 Rue de la Paix'),
('Marie', 'Martin', 1, '2 Avenue des Lilas'),
('Pierre', 'Lefevre', 1, '3 Rue de la Libert�'),
('Sophie', 'Durand', 2, '4 Boulevard Voltaire'),
('Luc', 'Moreau', 3, '5 Avenue de la R�publique');

-- Insertion de donn�es dans la table Clients
INSERT INTO Clients (name, firstname, birthday, first_purchase_date) VALUES
('Dubois', 'Alice', '1980-05-15', '2023-01-05'),
('Leroux', 'Julien', '1992-08-22', '2023-02-10'),
('Girard', 'Sophie', '1985-03-10', '2023-03-20'),
('Lambert', 'Pierre', '1978-12-03', '2023-04-15'),
('Morel', 'C�line', '1990-06-28', '2023-05-18'),
('Berger', 'Thomas', '1982-09-12', '2023-06-25'),
('Lemoine', 'Emilie', '1975-11-08', '2023-07-08'),
('Boucher', 'Alexandre', '1995-02-14', '2023-08-12'),
('Renard', 'Marine', '1987-04-30', '2023-09-05'),
('Martin', 'Paul', '1980-07-17', '2023-10-20');

-- Insertion de donn�es dans la table Orders
INSERT INTO Orders (order_ref, delivery_adress_id, delivery_date, order_date, billing_adress, payment_date, payment_method, sale_serv_num, client_num) VALUES
('AL202301Paris001', 1, '2023-01-10', '2023-01-01', 1, '2023-01-15', 'Credit Card', 1, 1),
('JL202302Paris002', 2, '2023-02-15', '2023-02-02', 2, '2023-02-20', 'PayPal', 2, 2),
('SG202303Paris003', 3, '2023-03-20', '2023-03-03', 3, '2023-03-25', 'Cash', 3, 3),
('PL202304Paris004', 4, '2023-04-25', '2023-04-04', 4, '2023-04-30', 'Credit Card', 4, 4),
('CD202305Paris005', 5, '2023-05-30', '2023-05-05', 5, '2023-06-05', 'Credit Card', 5, 5),
('TB202306Paris006', 6, '2023-06-05', '2023-06-10', 6, '2023-06-15', 'PayPal', 1, 6),
('EL202307Paris007', 7, '2023-07-10', '2023-07-15', 7, '2023-07-20', 'Cash', 2, 7),
('AB202308Paris008', 8, '2023-08-15', '2023-08-20', 8, '2023-08-25', 'Credit Card', 3, 8),
('MR202309Paris009', 9, '2023-09-20', '2023-09-25', 9, '2023-10-01', 'PayPal', 4, 9),
('PM202310Paris010', 10, '2023-10-25', '2023-10-02', 10, '2023-10-30', 'Cash', 5, 10),
('AL202311Paris011', 11, '2023-11-30', '2023-11-07', 11, '2023-12-05', 'Credit Card', 1, 1),
('JL202312Paris012', 12, '2023-12-05', '2023-12-12', 12, '2023-12-18', 'PayPal', 2, 2),
('SG202313Paris013', 13, '2023-12-20', '2023-12-27', 13, '2024-01-02', 'Cash', 3, 3),
('PL202314Paris014', 14, '2024-01-02', '2024-01-09', 14, '2024-01-15', 'Credit Card', 4, 4),
('CD202315Paris015', 15, '2024-01-15', '2024-01-22', 15, '2024-01-28', 'Credit Card', 5, 5);

-- Insertion de donn�es dans la table Adress
INSERT INTO Adress (country, ZIP_code, city, street, house_number, complement, client_num) VALUES
('France', '75001', 'Paris', 'Rue de la Paix', '1', NULL, 1),
('France', '75002', 'Paris', 'Avenue des Lilas', '2', NULL, 2),
('France', '75003', 'Paris', 'Rue de la Libert�', '3', NULL, 3),
('France', '75004', 'Paris', 'Boulevard Voltaire', '4', NULL, 4),
('France', '75005', 'Paris', 'Avenue de la R�publique', '5', NULL, 5),
('France', '75006', 'Paris', 'Rue Saint-Michel', '6', NULL, 6),
('France', '75007', 'Paris', 'Quai d Orsay', '7', NULL, 7),
('France', '75008', 'Paris', 'Champs-�lys�es', '8', NULL, 8),
('France', '75009', 'Paris', 'Montmartre', '9', NULL, 9),
('France', '75010', 'Paris', 'Canal Saint-Martin', '10', NULL, 10);

-- Insertion de donn�es dans la table Catalog
INSERT INTO Catalog (price_ET, designation, stock, reorder_threshold, VAT) VALUES
(19.99, 'Chaise', 50, 10, 0.2),
(29.99, 'Table', 30, 5, 0.2),
(9.99, 'Lampe', 80, 20, 0.2),
(39.99, 'Canap�', 25, 8, 0.2),
(14.99, '�tag�re', 40, 15, 0.2),
(49.99, 'Lit', 20, 5, 0.2),
(24.99, 'Armoire', 35, 10, 0.2),
(34.99, 'Bureau', 28, 7, 0.2),
(8.99, 'Miroir', 60, 18, 0.2),
(44.99, 'Tapis', 15, 5, 0.2),
(18.99, 'Cuisine', 45, 12, 0.2),
(28.99, 'Salle � manger', 30, 10, 0.2),
(11.99, 'Biblioth�que', 50, 15, 0.2),
(42.99, 'Fauteuil', 22, 8, 0.2),
(16.99, 'Sofa', 18, 5, 0.2),
(23.99, 'Penderie', 25, 10, 0.2),
(13.99, 'Banc', 35, 15, 0.2),
(38.99, 'Commode', 27, 7, 0.2),
(21.99, 'Meuble TV', 33, 12, 0.2),
(31.99, 'Buffet', 20, 8, 0.2);

-- Insertion de donn�es dans la table Articles
INSERT INTO Articles (name, quantity, nature, id_catalog) VALUES
('Chaise en bois', 10, 'Meuble', 1),
('Table en verre', 5, 'Meuble', 2),
('Lampe de bureau', 15, 'Luminaire', 3),
('Canap� convertible', 8, 'Meuble', 4),
('�tag�re murale', 12, 'Meuble', 5),
('Lit double', 7, 'Meuble', 6),
('Armoire blanche', 10, 'Meuble', 7),
('Bureau en bois', 6, 'Meuble', 8),
('Miroir mural', 20, 'D�coration', 9),
('Tapis design', 4, 'D�coration', 10),
('Cuisine �quip�e', 9, 'Meuble', 11),
('Salle � manger compl�te', 5, 'Meuble', 12),
('Biblioth�que moderne', 14, 'Meuble', 13),
('Fauteuil en cuir', 6, 'Meuble', 14),
('Sofa confortable', 3, 'Meuble', 15),
('Penderie en bois', 8, 'Meuble', 16),
('Banc entr�e', 10, 'Meuble', 17),
('Commodes assorties', 6, 'Meuble', 18),
('Meuble TV contemporain', 7, 'Meuble', 19),
('Buffet en ch�ne', 5, 'Meuble', 20);

-- Insertion de donn�es dans la table Order_containers
INSERT INTO Order_containers (order_ref, price_ET, VAT) VALUES
('AL202301Paris001', 19.99, 0.2),
('JL202302Paris002', 29.99, 0.2),
('SG202303Paris003', 9.99, 0.2),
('PL202304Paris004', 39.99, 0.2),
('CD202305Paris005', 14.99, 0.2),
('TB202306Paris006', 49.99, 0.2),
('EL202307Paris007', 24.99, 0.2),
('AB202308Paris008', 34.99, 0.2),
('MR202309Paris009', 8.99, 0.2),
('PM202310Paris010', 44.99, 0.2),
('AL202311Paris011', 18.99, 0.2),
('JL202312Paris012', 28.99, 0.2),
('SG202313Paris013', 11.99, 0.2),
('PL202314Paris014', 42.99, 0.2),
('CD202315Paris015', 16.99, 0.2);
