#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description résumée de gestionCommande
	/// </summary>
	public ref class gestionCommande : public System::Windows::Forms::UserControl
	{
	public:
		gestionCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~gestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label_liste_commandes;

	private: System::Windows::Forms::Button^ refresh_button;
	private: System::Windows::Forms::Label^ label_client;
	private: System::Windows::Forms::Label^ label_nom_client;
	private: System::Windows::Forms::TextBox^ name_client;
	private: System::Windows::Forms::TextBox^ prenom_client;
	private: System::Windows::Forms::Label^ label_prenom_client;
	private: System::Windows::Forms::NumericUpDown^ id_client;
	private: System::Windows::Forms::Label^ label_id_client;
	private: System::Windows::Forms::DataGridView^ dataGridView_clients;
	private: System::Windows::Forms::Label^ labeldetail_commande;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label_liste_des_clients;
	private: System::Windows::Forms::Label^ label_commandes_titre;
	private: System::Windows::Forms::Label^ label_reference_commande;
	private: System::Windows::Forms::Label^ label_adresse_de_livraison;
	private: System::Windows::Forms::Label^ label_date_de_livraison;
	private: System::Windows::Forms::Label^ label_date_de_commande;
	private: System::Windows::Forms::Label^ label_date_de_payement;
	private: System::Windows::Forms::Label^ label_methode_payement;
	private: System::Windows::Forms::Label^ label_numero_service_commercial;
	private: System::Windows::Forms::TextBox^ input_reference;
	private: System::Windows::Forms::TextBox^ input_add_livraison;
	private: System::Windows::Forms::DateTimePicker^ date_de_commande;
	private: System::Windows::Forms::DateTimePicker^ date_de_payement;
	private: System::Windows::Forms::DateTimePicker^ date_de_livraison;
	private: System::Windows::Forms::TextBox^ input_methode_payement;
	private: System::Windows::Forms::NumericUpDown^ num_serv_commercial;
















	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label_liste_commandes = (gcnew System::Windows::Forms::Label());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->label_client = (gcnew System::Windows::Forms::Label());
			this->label_nom_client = (gcnew System::Windows::Forms::Label());
			this->name_client = (gcnew System::Windows::Forms::TextBox());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom_client = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_id_client = (gcnew System::Windows::Forms::Label());
			this->dataGridView_clients = (gcnew System::Windows::Forms::DataGridView());
			this->labeldetail_commande = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label_liste_des_clients = (gcnew System::Windows::Forms::Label());
			this->label_commandes_titre = (gcnew System::Windows::Forms::Label());
			this->label_reference_commande = (gcnew System::Windows::Forms::Label());
			this->label_adresse_de_livraison = (gcnew System::Windows::Forms::Label());
			this->label_date_de_livraison = (gcnew System::Windows::Forms::Label());
			this->label_date_de_commande = (gcnew System::Windows::Forms::Label());
			this->label_date_de_payement = (gcnew System::Windows::Forms::Label());
			this->label_methode_payement = (gcnew System::Windows::Forms::Label());
			this->label_numero_service_commercial = (gcnew System::Windows::Forms::Label());
			this->input_reference = (gcnew System::Windows::Forms::TextBox());
			this->input_add_livraison = (gcnew System::Windows::Forms::TextBox());
			this->date_de_commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_de_payement = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_de_livraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->input_methode_payement = (gcnew System::Windows::Forms::TextBox());
			this->num_serv_commercial = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_serv_commercial))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"< Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gestionCommande::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1051, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(589, 267);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRow);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRow);
			// 
			// label_liste_commandes
			// 
			this->label_liste_commandes->AutoSize = true;
			this->label_liste_commandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_liste_commandes->Location = System::Drawing::Point(1046, 35);
			this->label_liste_commandes->Name = L"label_liste_commandes";
			this->label_liste_commandes->Size = System::Drawing::Size(221, 25);
			this->label_liste_commandes->TabIndex = 3;
			this->label_liste_commandes->Text = L"Liste des commandes";
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(325, 3);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(75, 23);
			this->refresh_button->TabIndex = 4;
			this->refresh_button->Text = L"Actualiser";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &gestionCommande::refresh_button_Click);
			// 
			// label_client
			// 
			this->label_client->AutoSize = true;
			this->label_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_client->Location = System::Drawing::Point(659, 49);
			this->label_client->Name = L"label_client";
			this->label_client->Size = System::Drawing::Size(104, 26);
			this->label_client->TabIndex = 11;
			this->label_client->Text = L"CLIENTS";
			this->label_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_nom_client
			// 
			this->label_nom_client->AutoSize = true;
			this->label_nom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom_client->Location = System::Drawing::Point(615, 78);
			this->label_nom_client->Name = L"label_nom_client";
			this->label_nom_client->Size = System::Drawing::Size(41, 18);
			this->label_nom_client->TabIndex = 27;
			this->label_nom_client->Text = L"Nom";
			this->label_nom_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name_client
			// 
			this->name_client->Location = System::Drawing::Point(662, 78);
			this->name_client->Name = L"name_client";
			this->name_client->ReadOnly = true;
			this->name_client->Size = System::Drawing::Size(141, 22);
			this->name_client->TabIndex = 28;
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(662, 106);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->ReadOnly = true;
			this->prenom_client->Size = System::Drawing::Size(141, 22);
			this->prenom_client->TabIndex = 29;
			// 
			// label_prenom_client
			// 
			this->label_prenom_client->AutoSize = true;
			this->label_prenom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenom_client->Location = System::Drawing::Point(595, 110);
			this->label_prenom_client->Name = L"label_prenom_client";
			this->label_prenom_client->Size = System::Drawing::Size(61, 18);
			this->label_prenom_client->TabIndex = 30;
			this->label_prenom_client->Text = L"Prénom";
			this->label_prenom_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(664, 144);
			this->id_client->Name = L"id_client";
			this->id_client->ReadOnly = true;
			this->id_client->Size = System::Drawing::Size(87, 22);
			this->id_client->TabIndex = 32;
			// 
			// label_id_client
			// 
			this->label_id_client->AutoSize = true;
			this->label_id_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_client->Location = System::Drawing::Point(595, 144);
			this->label_id_client->Name = L"label_id_client";
			this->label_id_client->Size = System::Drawing::Size(63, 18);
			this->label_id_client->TabIndex = 33;
			this->label_id_client->Text = L"ID Client";
			this->label_id_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView_clients
			// 
			this->dataGridView_clients->AllowUserToAddRows = false;
			this->dataGridView_clients->AllowUserToDeleteRows = false;
			this->dataGridView_clients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_clients->Location = System::Drawing::Point(19, 81);
			this->dataGridView_clients->Name = L"dataGridView_clients";
			this->dataGridView_clients->ReadOnly = true;
			this->dataGridView_clients->RowHeadersWidth = 51;
			this->dataGridView_clients->RowTemplate->Height = 24;
			this->dataGridView_clients->Size = System::Drawing::Size(381, 618);
			this->dataGridView_clients->TabIndex = 36;
			this->dataGridView_clients->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			this->dataGridView_clients->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			// 
			// labeldetail_commande
			// 
			this->labeldetail_commande->AutoSize = true;
			this->labeldetail_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldetail_commande->Location = System::Drawing::Point(1046, 404);
			this->labeldetail_commande->Name = L"labeldetail_commande";
			this->labeldetail_commande->Size = System::Drawing::Size(242, 25);
			this->labeldetail_commande->TabIndex = 37;
			this->labeldetail_commande->Text = L"Détails de la commande";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(1051, 432);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(589, 267);
			this->dataGridView2->TabIndex = 38;
			// 
			// label_liste_des_clients
			// 
			this->label_liste_des_clients->AutoSize = true;
			this->label_liste_des_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_liste_des_clients->Location = System::Drawing::Point(14, 52);
			this->label_liste_des_clients->Name = L"label_liste_des_clients";
			this->label_liste_des_clients->Size = System::Drawing::Size(209, 31);
			this->label_liste_des_clients->TabIndex = 39;
			this->label_liste_des_clients->Text = L"Liste des clients";
			// 
			// label_commandes_titre
			// 
			this->label_commandes_titre->AutoSize = true;
			this->label_commandes_titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_commandes_titre->Location = System::Drawing::Point(613, 206);
			this->label_commandes_titre->Name = L"label_commandes_titre";
			this->label_commandes_titre->Size = System::Drawing::Size(158, 26);
			this->label_commandes_titre->TabIndex = 40;
			this->label_commandes_titre->Text = L"COMMANDES";
			this->label_commandes_titre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_reference_commande
			// 
			this->label_reference_commande->AutoSize = true;
			this->label_reference_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_reference_commande->Location = System::Drawing::Point(556, 270);
			this->label_reference_commande->Name = L"label_reference_commande";
			this->label_reference_commande->Size = System::Drawing::Size(76, 18);
			this->label_reference_commande->TabIndex = 41;
			this->label_reference_commande->Text = L"Référence";
			this->label_reference_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_adresse_de_livraison
			// 
			this->label_adresse_de_livraison->AutoSize = true;
			this->label_adresse_de_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_adresse_de_livraison->Location = System::Drawing::Point(492, 292);
			this->label_adresse_de_livraison->Name = L"label_adresse_de_livraison";
			this->label_adresse_de_livraison->Size = System::Drawing::Size(140, 18);
			this->label_adresse_de_livraison->TabIndex = 42;
			this->label_adresse_de_livraison->Text = L"Adresse de livraison";
			this->label_adresse_de_livraison->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_date_de_livraison
			// 
			this->label_date_de_livraison->AutoSize = true;
			this->label_date_de_livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_date_de_livraison->Location = System::Drawing::Point(515, 321);
			this->label_date_de_livraison->Name = L"label_date_de_livraison";
			this->label_date_de_livraison->Size = System::Drawing::Size(117, 18);
			this->label_date_de_livraison->TabIndex = 43;
			this->label_date_de_livraison->Text = L"Date de livraison";
			this->label_date_de_livraison->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_date_de_commande
			// 
			this->label_date_de_commande->AutoSize = true;
			this->label_date_de_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_date_de_commande->Location = System::Drawing::Point(494, 348);
			this->label_date_de_commande->Name = L"label_date_de_commande";
			this->label_date_de_commande->Size = System::Drawing::Size(138, 18);
			this->label_date_de_commande->TabIndex = 44;
			this->label_date_de_commande->Text = L"Date de commande";
			this->label_date_de_commande->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_date_de_payement
			// 
			this->label_date_de_payement->AutoSize = true;
			this->label_date_de_payement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_date_de_payement->Location = System::Drawing::Point(505, 378);
			this->label_date_de_payement->Name = L"label_date_de_payement";
			this->label_date_de_payement->Size = System::Drawing::Size(127, 18);
			this->label_date_de_payement->TabIndex = 45;
			this->label_date_de_payement->Text = L"Date de payement";
			this->label_date_de_payement->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_methode_payement
			// 
			this->label_methode_payement->AutoSize = true;
			this->label_methode_payement->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_methode_payement->Location = System::Drawing::Point(478, 405);
			this->label_methode_payement->Name = L"label_methode_payement";
			this->label_methode_payement->Size = System::Drawing::Size(154, 18);
			this->label_methode_payement->TabIndex = 46;
			this->label_methode_payement->Text = L"Méthode de payement";
			this->label_methode_payement->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_numero_service_commercial
			// 
			this->label_numero_service_commercial->AutoSize = true;
			this->label_numero_service_commercial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_numero_service_commercial->Location = System::Drawing::Point(417, 432);
			this->label_numero_service_commercial->Name = L"label_numero_service_commercial";
			this->label_numero_service_commercial->Size = System::Drawing::Size(215, 18);
			this->label_numero_service_commercial->TabIndex = 47;
			this->label_numero_service_commercial->Text = L"Numéro du service commercial";
			this->label_numero_service_commercial->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input_reference
			// 
			this->input_reference->Location = System::Drawing::Point(638, 266);
			this->input_reference->Name = L"input_reference";
			this->input_reference->ReadOnly = true;
			this->input_reference->Size = System::Drawing::Size(141, 22);
			this->input_reference->TabIndex = 48;
			// 
			// input_add_livraison
			// 
			this->input_add_livraison->Location = System::Drawing::Point(638, 294);
			this->input_add_livraison->Name = L"input_add_livraison";
			this->input_add_livraison->ReadOnly = true;
			this->input_add_livraison->Size = System::Drawing::Size(141, 22);
			this->input_add_livraison->TabIndex = 49;
			// 
			// date_de_commande
			// 
			this->date_de_commande->Location = System::Drawing::Point(638, 348);
			this->date_de_commande->Name = L"date_de_commande";
			this->date_de_commande->Size = System::Drawing::Size(279, 22);
			this->date_de_commande->TabIndex = 50;
			// 
			// date_de_payement
			// 
			this->date_de_payement->Location = System::Drawing::Point(638, 378);
			this->date_de_payement->Name = L"date_de_payement";
			this->date_de_payement->Size = System::Drawing::Size(279, 22);
			this->date_de_payement->TabIndex = 51;
			// 
			// date_de_livraison
			// 
			this->date_de_livraison->Location = System::Drawing::Point(638, 322);
			this->date_de_livraison->Name = L"date_de_livraison";
			this->date_de_livraison->Size = System::Drawing::Size(279, 22);
			this->date_de_livraison->TabIndex = 52;
			// 
			// input_methode_payement
			// 
			this->input_methode_payement->Location = System::Drawing::Point(638, 407);
			this->input_methode_payement->Name = L"input_methode_payement";
			this->input_methode_payement->ReadOnly = true;
			this->input_methode_payement->Size = System::Drawing::Size(141, 22);
			this->input_methode_payement->TabIndex = 53;
			// 
			// num_serv_commercial
			// 
			this->num_serv_commercial->Location = System::Drawing::Point(638, 435);
			this->num_serv_commercial->Name = L"num_serv_commercial";
			this->num_serv_commercial->ReadOnly = true;
			this->num_serv_commercial->Size = System::Drawing::Size(87, 22);
			this->num_serv_commercial->TabIndex = 54;
			// 
			// gestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->num_serv_commercial);
			this->Controls->Add(this->input_methode_payement);
			this->Controls->Add(this->date_de_livraison);
			this->Controls->Add(this->date_de_payement);
			this->Controls->Add(this->date_de_commande);
			this->Controls->Add(this->input_add_livraison);
			this->Controls->Add(this->input_reference);
			this->Controls->Add(this->label_numero_service_commercial);
			this->Controls->Add(this->label_methode_payement);
			this->Controls->Add(this->label_date_de_payement);
			this->Controls->Add(this->label_date_de_commande);
			this->Controls->Add(this->label_date_de_livraison);
			this->Controls->Add(this->label_adresse_de_livraison);
			this->Controls->Add(this->label_reference_commande);
			this->Controls->Add(this->label_commandes_titre);
			this->Controls->Add(this->label_liste_des_clients);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->labeldetail_commande);
			this->Controls->Add(this->dataGridView_clients);
			this->Controls->Add(this->label_id_client);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->label_prenom_client);
			this->Controls->Add(this->prenom_client);
			this->Controls->Add(this->name_client);
			this->Controls->Add(this->label_nom_client);
			this->Controls->Add(this->label_client);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->label_liste_commandes);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"gestionCommande";
			this->Size = System::Drawing::Size(1314, 594);
			this->Load += gcnew System::EventHandler(this, &gestionCommande::gestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_serv_commercial))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//retour
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void SelectRowClients(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		   //chargement de la page
	private: System::Void gestionCommande_Load(System::Object^ sender, System::EventArgs^ e);
		   //Actualisation du tableau
	private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
