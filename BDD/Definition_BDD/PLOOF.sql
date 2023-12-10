-- ------------------------------------------------------------
--        Script SSMS (SQL Server Management Studio).
-- ------------------------------------------------------------


-- ------------------------------------------------------------
-- Table: Personal
-- ------------------------------------------------------------

CREATE TABLE Personal(
        id_personal Int Identity(1, 1) NOT NULL ,
        firstname   Varchar (255) ,
        name        Varchar (255) ,
        superior    Int ,
        Address      Varchar (255),
        CONSTRAINT Personal_PK PRIMARY KEY (id_personal)
);


-- ------------------------------------------------------------
-- Table: Clients
-- ------------------------------------------------------------

CREATE TABLE Clients(
        client_num          Int Identity(1, 1) NOT NULL ,
        name                Varchar (255) ,
        firstname           Varchar (255) ,
        birthday            Date ,
        first_purchase_date Date NOT NULL,
        CONSTRAINT Clients_PK PRIMARY KEY (client_num)
);


-- ------------------------------------------------------------
-- Table: Orders
-- ------------------------------------------------------------

CREATE TABLE Orders(
        order_ref          Varchar (255) NOT NULL ,
        delivery_Address_id INT NOT NULL ,
        delivery_date      Date ,
        order_date         Date ,
        billing_Address     INT NOT NULL ,
        payment_date       Date ,
        payment_method     Varchar (255) ,
        sale_serv_num      Int NOT NULL ,
        client_num         Int NOT NULL,
        CONSTRAINT Orders_PK PRIMARY KEY (order_ref),
        CONSTRAINT Orders_Clients_FK FOREIGN KEY (client_num) REFERENCES Clients(client_num)
);


-- ------------------------------------------------------------
-- Table: Address
-- ------------------------------------------------------------

CREATE TABLE Address(
        id_Address    Int Identity(1, 1) NOT NULL ,
        country      Varchar (255) ,
        ZIP_code     Varchar (255) ,
        city         Varchar (255) ,
        street       Varchar (255) ,
        house_number Varchar (255) ,
        complement   Varchar (255) ,
        client_num   Int NOT NULL,
        CONSTRAINT Address_PK PRIMARY KEY (id_Address),
        CONSTRAINT Address_Clients_FK FOREIGN KEY (client_num) REFERENCES Clients(client_num)
);


-- ------------------------------------------------------------
-- Table: Catalog
-- ------------------------------------------------------------

CREATE TABLE Catalog(
        id_catalog        Int Identity(1, 1) NOT NULL ,
        price_ET          Float NOT NULL ,
        designation       Varchar (255) NOT NULL ,
        stock             Int NOT NULL ,
        reorder_threshold Int NOT NULL ,
        VAT               Float NOT NULL,
        CONSTRAINT Catalog_PK PRIMARY KEY (id_catalog)
);


-- ------------------------------------------------------------
-- Table: Articles
-- ------------------------------------------------------------

CREATE TABLE Articles(
        article_ref Int Identity(1, 1) NOT NULL ,
        name        Varchar (255) ,
        quantity    Int ,
        nature      Varchar (255) ,
        id_catalog  Int NOT NULL,
        CONSTRAINT Articles_PK PRIMARY KEY (article_ref),
        CONSTRAINT Articles_Catalog_FK FOREIGN KEY (id_catalog) REFERENCES Catalog(id_catalog)
);


-- ------------------------------------------------------------
-- Table: Order_containers
-- ------------------------------------------------------------

CREATE TABLE Order_containers(
        article_ref Int Identity(1, 1) NOT NULL ,
        order_ref   Varchar (255) NOT NULL ,
        price_ET    Float ,
        VAT         Float,
        CONSTRAINT Order_containers_PK PRIMARY KEY (article_ref, order_ref),
        CONSTRAINT Order_containers_Articles_FK FOREIGN KEY (article_ref) REFERENCES Articles(article_ref),
        CONSTRAINT Order_containers_Orders0_FK FOREIGN KEY (order_ref) REFERENCES Orders(order_ref)
);
