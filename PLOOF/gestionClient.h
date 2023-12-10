#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description résumée de gestionClient
	/// </summary>
	public ref class gestionClient : public System::Windows::Forms::UserControl
	{
	public:
		gestionClient(void)
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
		~gestionClient()
		{
			if (components)
			{
				delete components;
			}
		}




	protected:

	protected:





















	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::CheckBox^ date_bool;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ adr_client;
	private: System::Windows::Forms::DateTimePicker^ date_commande;
	private: System::Windows::Forms::DateTimePicker^ date_naissance;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Button^ btn_recherche;
	private: System::Windows::Forms::Button^ btn_suppr;
	private: System::Windows::Forms::Button^ btn_modif;
	private: System::Windows::Forms::Button^ btn_creer;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nom_client;
	private: System::Windows::Forms::NumericUpDown^ num_client;
	private: System::Windows::Forms::TextBox^ prenom_client;
	private: System::Windows::Forms::Button^ btn_actu;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ suppr_adr;



	private: System::Windows::Forms::Button^ modi_adr;

	private: System::Windows::Forms::Button^ creer_adr;




























	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->date_bool = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->adr_client = (gcnew System::Windows::Forms::Button());
			this->date_commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_recherche = (gcnew System::Windows::Forms::Button());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->btn_modif = (gcnew System::Windows::Forms::Button());
			this->btn_creer = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nom_client = (gcnew System::Windows::Forms::TextBox());
			this->num_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->prenom_client = (gcnew System::Windows::Forms::TextBox());
			this->btn_actu = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->suppr_adr = (gcnew System::Windows::Forms::Button());
			this->modi_adr = (gcnew System::Windows::Forms::Button());
			this->creer_adr = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_client))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(19, 54);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 25);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Liste des clients";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dataGridView1->Location = System::Drawing::Point(17, 82);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(761, 295);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionClient::SelectRow);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionClient::SelectRow);
			// 
			// btn_retour
			// 
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_retour->Location = System::Drawing::Point(3, 4);
			this->btn_retour->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(212, 47);
			this->btn_retour->TabIndex = 21;
			this->btn_retour->Text = L"< Retour";
			this->btn_retour->UseVisualStyleBackColor = true;
			this->btn_retour->Click += gcnew System::EventHandler(this, &gestionClient::btn_retour_Click);
			// 
			// date_bool
			// 
			this->date_bool->AutoSize = true;
			this->date_bool->Location = System::Drawing::Point(337, 146);
			this->date_bool->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->date_bool->Name = L"date_bool";
			this->date_bool->Size = System::Drawing::Size(236, 20);
			this->date_bool->TabIndex = 63;
			this->date_bool->Text = L"Inclure les dates dans la recherche";
			this->date_bool->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(344, 46);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 25);
			this->label6->TabIndex = 62;
			this->label6->Text = L"Date de naissance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(219, 5);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 25);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Première commande";
			// 
			// adr_client
			// 
			this->adr_client->Location = System::Drawing::Point(380, 78);
			this->adr_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->adr_client->Name = L"adr_client";
			this->adr_client->Size = System::Drawing::Size(233, 46);
			this->adr_client->TabIndex = 60;
			this->adr_client->Text = L"Voir les addresses du client";
			this->adr_client->UseVisualStyleBackColor = true;
			this->adr_client->Click += gcnew System::EventHandler(this, &gestionClient::adr_client_Click);
			// 
			// date_commande
			// 
			this->date_commande->Location = System::Drawing::Point(427, 5);
			this->date_commande->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->date_commande->Name = L"date_commande";
			this->date_commande->Size = System::Drawing::Size(236, 22);
			this->date_commande->TabIndex = 59;
			// 
			// date_naissance
			// 
			this->date_naissance->Location = System::Drawing::Point(541, 46);
			this->date_naissance->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(236, 22);
			this->date_naissance->TabIndex = 58;
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(679, 107);
			this->btn_clear->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(100, 96);
			this->btn_clear->TabIndex = 57;
			this->btn_clear->Text = L"Vider les champs";
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &gestionClient::btn_clear_Click);
			// 
			// btn_recherche
			// 
			this->btn_recherche->Location = System::Drawing::Point(53, 138);
			this->btn_recherche->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_recherche->Name = L"btn_recherche";
			this->btn_recherche->Size = System::Drawing::Size(276, 36);
			this->btn_recherche->TabIndex = 56;
			this->btn_recherche->Text = L"find";
			this->btn_recherche->UseVisualStyleBackColor = true;
			this->btn_recherche->Click += gcnew System::EventHandler(this, &gestionClient::btn_recherche_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(423, 181);
			this->btn_suppr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(191, 33);
			this->btn_suppr->TabIndex = 55;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(224, 181);
			this->btn_modif->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(191, 33);
			this->btn_modif->TabIndex = 54;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			this->btn_modif->Click += gcnew System::EventHandler(this, &gestionClient::btn_modif_Click);
			// 
			// btn_creer
			// 
			this->btn_creer->Location = System::Drawing::Point(25, 181);
			this->btn_creer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(191, 33);
			this->btn_creer->TabIndex = 53;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = true;
			this->btn_creer->Click += gcnew System::EventHandler(this, &gestionClient::btn_creer_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(48, 85);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 25);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 46);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 25);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 4);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 25);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Num. Client :";
			// 
			// nom_client
			// 
			this->nom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom_client->Location = System::Drawing::Point(121, 81);
			this->nom_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(207, 30);
			this->nom_client->TabIndex = 49;
			// 
			// num_client
			// 
			this->num_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num_client->Location = System::Drawing::Point(135, 1);
			this->num_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->num_client->Name = L"num_client";
			this->num_client->Size = System::Drawing::Size(69, 30);
			this->num_client->TabIndex = 48;
			// 
			// prenom_client
			// 
			this->prenom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom_client->Location = System::Drawing::Point(121, 42);
			this->prenom_client->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(207, 30);
			this->prenom_client->TabIndex = 47;
			// 
			// btn_actu
			// 
			this->btn_actu->Location = System::Drawing::Point(679, 1);
			this->btn_actu->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_actu->Name = L"btn_actu";
			this->btn_actu->Size = System::Drawing::Size(100, 28);
			this->btn_actu->TabIndex = 46;
			this->btn_actu->Text = L"Actualiser";
			this->btn_actu->UseVisualStyleBackColor = true;
			this->btn_actu->Click += gcnew System::EventHandler(this, &gestionClient::btn_actu_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->date_bool);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->adr_client);
			this->panel1->Controls->Add(this->date_commande);
			this->panel1->Controls->Add(this->date_naissance);
			this->panel1->Controls->Add(this->btn_clear);
			this->panel1->Controls->Add(this->btn_recherche);
			this->panel1->Controls->Add(this->btn_suppr);
			this->panel1->Controls->Add(this->btn_modif);
			this->panel1->Controls->Add(this->btn_creer);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->nom_client);
			this->panel1->Controls->Add(this->num_client);
			this->panel1->Controls->Add(this->prenom_client);
			this->panel1->Controls->Add(this->btn_actu);
			this->panel1->Location = System::Drawing::Point(4, 385);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(791, 238);
			this->panel1->TabIndex = 64;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->suppr_adr);
			this->panel2->Controls->Add(this->modi_adr);
			this->panel2->Controls->Add(this->creer_adr);
			this->panel2->Controls->Add(this->numericUpDown2);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(5, 383);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(789, 240);
			this->panel2->TabIndex = 65;
			this->panel2->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(349, 18);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 16);
			this->label14->TabIndex = 76;
			this->label14->Text = L"Numéro client";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(359, 121);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 16);
			this->label13->TabIndex = 75;
			this->label13->Text = L"Complément";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(387, 89);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 16);
			this->label12->TabIndex = 74;
			this->label12->Text = L"Numéro";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(409, 57);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 16);
			this->label11->TabIndex = 73;
			this->label11->Text = L"Rue";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(79, 116);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 16);
			this->label10->TabIndex = 72;
			this->label10->Text = L"Ville";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(85, 84);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 16);
			this->label9->TabIndex = 71;
			this->label9->Text = L"CP";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(73, 52);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 16);
			this->label8->TabIndex = 70;
			this->label8->Text = L"Pays";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(55, 18);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 16);
			this->label7->TabIndex = 69;
			this->label7->Text = L"ID addresse";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(685, 4);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 64;
			this->button6->Text = L"Actualiser";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(685, 89);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 96);
			this->button1->TabIndex = 68;
			this->button1->Text = L"Vider les champs";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// suppr_adr
			// 
			this->suppr_adr->Location = System::Drawing::Point(421, 172);
			this->suppr_adr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->suppr_adr->Name = L"suppr_adr";
			this->suppr_adr->Size = System::Drawing::Size(191, 33);
			this->suppr_adr->TabIndex = 66;
			this->suppr_adr->Text = L"Supprimer";
			this->suppr_adr->UseVisualStyleBackColor = true;
			// 
			// modi_adr
			// 
			this->modi_adr->Location = System::Drawing::Point(223, 172);
			this->modi_adr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->modi_adr->Name = L"modi_adr";
			this->modi_adr->Size = System::Drawing::Size(191, 33);
			this->modi_adr->TabIndex = 65;
			this->modi_adr->Text = L"Modifier";
			this->modi_adr->UseVisualStyleBackColor = true;
			// 
			// creer_adr
			// 
			this->creer_adr->Location = System::Drawing::Point(24, 172);
			this->creer_adr->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->creer_adr->Name = L"creer_adr";
			this->creer_adr->Size = System::Drawing::Size(191, 33);
			this->creer_adr->TabIndex = 64;
			this->creer_adr->Text = L"Créer";
			this->creer_adr->UseVisualStyleBackColor = true;
			this->creer_adr->Click += gcnew System::EventHandler(this, &gestionClient::creer_adr_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(453, 16);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(79, 22);
			this->numericUpDown2->TabIndex = 7;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(136, 16);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(79, 22);
			this->numericUpDown1->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(136, 112);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(161, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(453, 48);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(157, 22);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(453, 80);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(157, 22);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(453, 112);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(157, 22);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 80);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(136, 48);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 22);
			this->textBox1->TabIndex = 0;
			// 
			// gestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_retour);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"gestionClient";
			this->Size = System::Drawing::Size(808, 626);
			this->Load += gcnew System::EventHandler(this, &gestionClient::gestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_client))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GC::Collect();	
	}
	private: System::Void PLOOF::gestionClient::btn_retourListe_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		date_commande->Value = DateTime::Now;
		date_naissance->Value = DateTime::Now;
		nom_client->Text = "";
		prenom_client->Text = "";
		num_client->Value = 0;
	}
	private: System::Void gestionClient_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_actu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void btn_recherche_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_creer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btn_modif_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void adr_client_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void creer_adr_Click(System::Object^ sender, System::EventArgs^ e);
};
}
