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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->BeginInit();
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
			this->dataGridView1->Location = System::Drawing::Point(14, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(884, 267);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRow);
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRow);
			// 
			// label_liste_commandes
			// 
			this->label_liste_commandes->AutoSize = true;
			this->label_liste_commandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_liste_commandes->Location = System::Drawing::Point(15, 44);
			this->label_liste_commandes->Name = L"label_liste_commandes";
			this->label_liste_commandes->Size = System::Drawing::Size(221, 25);
			this->label_liste_commandes->TabIndex = 3;
			this->label_liste_commandes->Text = L"Liste des commandes";
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(823, 340);
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
			this->label_client->Location = System::Drawing::Point(717, 394);
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
			this->label_nom_client->Location = System::Drawing::Point(691, 580);
			this->label_nom_client->Name = L"label_nom_client";
			this->label_nom_client->Size = System::Drawing::Size(41, 18);
			this->label_nom_client->TabIndex = 27;
			this->label_nom_client->Text = L"Nom";
			this->label_nom_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name_client
			// 
			this->name_client->Location = System::Drawing::Point(738, 580);
			this->name_client->Name = L"name_client";
			this->name_client->ReadOnly = true;
			this->name_client->Size = System::Drawing::Size(141, 22);
			this->name_client->TabIndex = 28;
			// 
			// prenom_client
			// 
			this->prenom_client->Location = System::Drawing::Point(738, 608);
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
			this->label_prenom_client->Location = System::Drawing::Point(671, 612);
			this->label_prenom_client->Name = L"label_prenom_client";
			this->label_prenom_client->Size = System::Drawing::Size(61, 18);
			this->label_prenom_client->TabIndex = 30;
			this->label_prenom_client->Text = L"Prénom";
			this->label_prenom_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(760, 646);
			this->id_client->Name = L"id_client";
			this->id_client->ReadOnly = true;
			this->id_client->Size = System::Drawing::Size(119, 22);
			this->id_client->TabIndex = 32;
			// 
			// label_id_client
			// 
			this->label_id_client->AutoSize = true;
			this->label_id_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_client->Location = System::Drawing::Point(671, 646);
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
			this->dataGridView_clients->Location = System::Drawing::Point(674, 423);
			this->dataGridView_clients->Name = L"dataGridView_clients";
			this->dataGridView_clients->ReadOnly = true;
			this->dataGridView_clients->RowHeadersWidth = 51;
			this->dataGridView_clients->RowTemplate->Height = 24;
			this->dataGridView_clients->Size = System::Drawing::Size(205, 144);
			this->dataGridView_clients->TabIndex = 36;
			this->dataGridView_clients->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			this->dataGridView_clients->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			// 
			// gestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Size = System::Drawing::Size(928, 688);
			this->Load += gcnew System::EventHandler(this, &gestionCommande::gestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->EndInit();
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
