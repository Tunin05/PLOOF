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
	private: System::Windows::Forms::Button^ btn_clear;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_actu;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_retour;
	private: System::Windows::Forms::DateTimePicker^ date_naissance;
	private: System::Windows::Forms::DateTimePicker^ date_commande;
	private: System::Windows::Forms::Button^ adr_client;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


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
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_actu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_retour = (gcnew System::Windows::Forms::Button());
			this->date_naissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_commande = (gcnew System::Windows::Forms::DateTimePicker());
			this->adr_client = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_clear
			// 
			this->btn_clear->Location = System::Drawing::Point(509, 423);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(75, 42);
			this->btn_clear->TabIndex = 39;
			this->btn_clear->Text = L"Vider les champs";
			this->btn_clear->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(40, 423);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(411, 29);
			this->button6->TabIndex = 37;
			this->button6->Text = L"Rechercher";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(317, 458);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 27);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Supprimer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(168, 458);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 27);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(19, 458);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 27);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Créer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 380);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 20);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 314);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Num. Client :";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(91, 377);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 26);
			this->textBox2->TabIndex = 27;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(101, 312);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(52, 26);
			this->numericUpDown1->TabIndex = 26;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(91, 345);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 26);
			this->textBox1->TabIndex = 25;
			// 
			// btn_actu
			// 
			this->btn_actu->Location = System::Drawing::Point(509, 312);
			this->btn_actu->Name = L"btn_actu";
			this->btn_actu->Size = System::Drawing::Size(75, 23);
			this->btn_actu->TabIndex = 24;
			this->btn_actu->Text = L"Actualiser";
			this->btn_actu->UseVisualStyleBackColor = true;
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
			this->btn_retour->Click += gcnew System::EventHandler(this, &gestionClient::button1_Click);
			// 
			// date_naissance
			// 
			this->date_naissance->Location = System::Drawing::Point(406, 348);
			this->date_naissance->Name = L"date_naissance";
			this->date_naissance->Size = System::Drawing::Size(178, 20);
			this->date_naissance->TabIndex = 40;
			// 
			// date_commande
			// 
			this->date_commande->Location = System::Drawing::Point(320, 315);
			this->date_commande->Name = L"date_commande";
			this->date_commande->Size = System::Drawing::Size(178, 20);
			this->date_commande->TabIndex = 41;
			// 
			// adr_client
			// 
			this->adr_client->Location = System::Drawing::Point(285, 374);
			this->adr_client->Name = L"adr_client";
			this->adr_client->Size = System::Drawing::Size(175, 37);
			this->adr_client->TabIndex = 42;
			this->adr_client->Text = L"Voir les adresses du client";
			this->adr_client->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(164, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 20);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Première commande";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(258, 348);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 20);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Date de naissance";
			// 
			// gestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->adr_client);
			this->Controls->Add(this->date_commande);
			this->Controls->Add(this->date_naissance);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_actu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_retour);
			this->Name = L"gestionClient";
			this->Size = System::Drawing::Size(606, 507);
			this->Load += gcnew System::EventHandler(this, &gestionClient::gestionClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GC::Collect();
	}
	private: System::Void gestionClient_Load(System::Object^ sender, System::EventArgs^ e);
};
}
