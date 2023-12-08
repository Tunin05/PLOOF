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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_client))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
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
			this->dataGridView1->Location = System::Drawing::Point(13, 67);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(571, 240);
			this->dataGridView1->TabIndex = 22;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionClient::SelectRow);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionClient::SelectRow);
			// 
			// btn_retour
			// 
			this->btn_retour->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_retour->Location = System::Drawing::Point(2, 3);
			this->btn_retour->Name = L"btn_retour";
			this->btn_retour->Size = System::Drawing::Size(159, 38);
			this->btn_retour->TabIndex = 21;
			this->btn_retour->Text = L"< Retour";
			this->btn_retour->UseVisualStyleBackColor = true;
			this->btn_retour->Click += gcnew System::EventHandler(this, &gestionClient::btn_retour_Click);
			// 
			// date_bool
			// 
			this->date_bool->AutoSize = true;
			this->date_bool->Location = System::Drawing::Point(256, 434);
			this->date_bool->Name = L"date_bool";
			this->date_bool->Size = System::Drawing::Size(191, 17);
			this->date_bool->TabIndex = 63;
			this->date_bool->Text = L"Inclure les dates dans la recherche";
			this->date_bool->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(261, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 20);
			this->label6->TabIndex = 62;
			this->label6->Text = L"Date de naissance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(167, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 20);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Première commande";
			// 
			// adr_client
			// 
			this->adr_client->Location = System::Drawing::Point(288, 378);
			this->adr_client->Name = L"adr_client";
			this->adr_client->Size = System::Drawing::Size(175, 37);
			this->adr_client->TabIndex = 60;
			this->adr_client->Text = L"Voir les adresses du client";
			this->adr_client->UseVisualStyleBackColor = true;
			this->adr_client->Click += gcnew System::EventHandler(this, &gestionClient::adr_client_Click_1);
			// 
			// date_commande
			// 
			this->date_commande->Location = System::Drawing::Point(323, 319);
			this->date_commande->Name = L"date_commande";
			this->date_commande->Size = System::Drawing::Size(178, 20);
			this->date_commande->TabIndex = 59;
			// 
			// date_naissance
			// 
			this->date_naissance->Location = System::Drawing::Point(409, 352);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(178, 20);
			this->date_naissance->TabIndex = 58;
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(512, 402);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(75, 78);
			this->btn_clear->TabIndex = 57;
			this->btn_clear->Text = L"Vider les champs";
			this->btn_clear->UseVisualStyleBackColor = true;
			// 
			// btn_recherche
			// 
			this->btn_recherche->Location = System::Drawing::Point(43, 427);
			this->btn_recherche->Name = L"btn_recherche";
			this->btn_recherche->Size = System::Drawing::Size(207, 29);
			this->btn_recherche->TabIndex = 56;
			this->btn_recherche->Text = L"Rechercher";
			this->btn_recherche->UseVisualStyleBackColor = true;
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(320, 462);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(143, 27);
			this->btn_suppr->TabIndex = 55;
			this->btn_suppr->Text = L"Supprimer";
			this->btn_suppr->UseVisualStyleBackColor = true;
			// 
			// btn_modif
			// 
			this->btn_modif->Location = System::Drawing::Point(171, 462);
			this->btn_modif->Name = L"btn_modif";
			this->btn_modif->Size = System::Drawing::Size(143, 27);
			this->btn_modif->TabIndex = 54;
			this->btn_modif->Text = L"Modifier";
			this->btn_modif->UseVisualStyleBackColor = true;
			// 
			// btn_creer
			// 
			this->btn_creer->Location = System::Drawing::Point(22, 462);
			this->btn_creer->Name = L"btn_creer";
			this->btn_creer->Size = System::Drawing::Size(143, 27);
			this->btn_creer->TabIndex = 53;
			this->btn_creer->Text = L"Créer";
			this->btn_creer->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(39, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 20);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Num. Client :";
			// 
			// nom_client
			// 
			this->nom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nom_client->Location = System::Drawing::Point(94, 381);
			this->nom_client->Name = L"nom_client";
			this->nom_client->Size = System::Drawing::Size(156, 26);
			this->nom_client->TabIndex = 49;
			// 
			// num_client
			// 
			this->num_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num_client->Location = System::Drawing::Point(104, 316);
			this->num_client->Name = L"num_client";
			this->num_client->Size = System::Drawing::Size(52, 26);
			this->num_client->TabIndex = 48;
			// 
			// prenom_client
			// 
			this->prenom_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prenom_client->Location = System::Drawing::Point(94, 349);
			this->prenom_client->Name = L"prenom_client";
			this->prenom_client->Size = System::Drawing::Size(156, 26);
			this->prenom_client->TabIndex = 47;
			// 
			// btn_actu
			// 
			this->btn_actu->Location = System::Drawing::Point(512, 316);
			this->btn_actu->Name = L"btn_actu";
			this->btn_actu->Size = System::Drawing::Size(75, 23);
			this->btn_actu->TabIndex = 46;
			this->btn_actu->Text = L"Actualiser";
			this->btn_actu->UseVisualStyleBackColor = true;
			// 
			// gestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->date_bool);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->adr_client);
			this->Controls->Add(this->date_commande);
			this->Controls->Add(this->date_naissance);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_recherche);
			this->Controls->Add(this->btn_suppr);
			this->Controls->Add(this->btn_modif);
			this->Controls->Add(this->btn_creer);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->nom_client);
			this->Controls->Add(this->num_client);
			this->Controls->Add(this->prenom_client);
			this->Controls->Add(this->btn_actu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_retour);
			this->Name = L"gestionClient";
			this->Size = System::Drawing::Size(606, 507);
			this->Load += gcnew System::EventHandler(this, &gestionClient::gestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_client))->EndInit();
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
};
}
