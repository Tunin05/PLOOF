#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description résumée de gestionStock
	/// </summary>
	public ref class gestionStock : public System::Windows::Forms::UserControl
	{
	public:
		gestionStock(void)
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
		~gestionStock()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ refresh_button;

	private: System::Windows::Forms::Button^ Add_an_article;
	private: System::Windows::Forms::Button^ deny;
	private: System::Windows::Forms::TextBox^ name_article;
	private: System::Windows::Forms::TextBox^ q_article;
	private: System::Windows::Forms::TextBox^ nature_article;
	private: System::Windows::Forms::Label^ label_article;
	private: System::Windows::Forms::Label^ label_catalog;
	private: System::Windows::Forms::NumericUpDown^ input_prix_HT;

	private: System::Windows::Forms::Label^ label_prix_HT;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->Add_an_article = (gcnew System::Windows::Forms::Button());
			this->deny = (gcnew System::Windows::Forms::Button());
			this->name_article = (gcnew System::Windows::Forms::TextBox());
			this->q_article = (gcnew System::Windows::Forms::TextBox());
			this->nature_article = (gcnew System::Windows::Forms::TextBox());
			this->label_article = (gcnew System::Windows::Forms::Label());
			this->label_catalog = (gcnew System::Windows::Forms::Label());
			this->input_prix_HT = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_prix_HT = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_prix_HT))->BeginInit();
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
			this->button1->Click += gcnew System::EventHandler(this, &gestionStock::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(571, 240);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Liste du stock";
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(510, 312);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(75, 23);
			this->refresh_button->TabIndex = 4;
			this->refresh_button->Text = L"Actualiser";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &gestionStock::refresh_button_Click);
			// 
			// Add_an_article
			// 
			this->Add_an_article->Location = System::Drawing::Point(14, 362);
			this->Add_an_article->Name = L"Add_an_article";
			this->Add_an_article->Size = System::Drawing::Size(143, 27);
			this->Add_an_article->TabIndex = 5;
			this->Add_an_article->Text = L"Ajouter un article";
			this->Add_an_article->UseVisualStyleBackColor = true;
			this->Add_an_article->Click += gcnew System::EventHandler(this, &gestionStock::Add_an_article_Click);
			// 
			// deny
			// 
			this->deny->Location = System::Drawing::Point(14, 364);
			this->deny->Name = L"deny";
			this->deny->Size = System::Drawing::Size(143, 23);
			this->deny->TabIndex = 6;
			this->deny->Text = L"Annuler";
			this->deny->UseVisualStyleBackColor = true;
			this->deny->Click += gcnew System::EventHandler(this, &gestionStock::deny_Click);
			// 
			// name_article
			// 
			this->name_article->Location = System::Drawing::Point(189, 413);
			this->name_article->Name = L"name_article";
			this->name_article->Size = System::Drawing::Size(159, 22);
			this->name_article->TabIndex = 7;
			this->name_article->Text = L"Nom de l\'article";
			// 
			// q_article
			// 
			this->q_article->Location = System::Drawing::Point(189, 441);
			this->q_article->Name = L"q_article";
			this->q_article->Size = System::Drawing::Size(159, 22);
			this->q_article->TabIndex = 8;
			this->q_article->Text = L"Quantite de l\'article";
			// 
			// nature_article
			// 
			this->nature_article->Location = System::Drawing::Point(189, 469);
			this->nature_article->Name = L"nature_article";
			this->nature_article->Size = System::Drawing::Size(159, 22);
			this->nature_article->TabIndex = 9;
			this->nature_article->Text = L"Nature de l\'article";
			// 
			// label_article
			// 
			this->label_article->AutoSize = true;
			this->label_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_article->Location = System::Drawing::Point(215, 364);
			this->label_article->Name = L"label_article";
			this->label_article->Size = System::Drawing::Size(104, 26);
			this->label_article->TabIndex = 10;
			this->label_article->Text = L"ARTICLE";
			this->label_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_article->Click += gcnew System::EventHandler(this, &gestionStock::label2_Click);
			// 
			// label_catalog
			// 
			this->label_catalog->AutoSize = true;
			this->label_catalog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_catalog->Location = System::Drawing::Point(401, 361);
			this->label_catalog->Name = L"label_catalog";
			this->label_catalog->Size = System::Drawing::Size(147, 26);
			this->label_catalog->TabIndex = 11;
			this->label_catalog->Text = L"CATALOGUE";
			this->label_catalog->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input_prix_HT
			// 
			this->input_prix_HT->Location = System::Drawing::Point(466, 413);
			this->input_prix_HT->Name = L"input_prix_HT";
			this->input_prix_HT->Size = System::Drawing::Size(120, 22);
			this->input_prix_HT->TabIndex = 12;
			// 
			// label_prix_HT
			// 
			this->label_prix_HT->AutoSize = true;
			this->label_prix_HT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prix_HT->Location = System::Drawing::Point(403, 414);
			this->label_prix_HT->Name = L"label_prix_HT";
			this->label_prix_HT->Size = System::Drawing::Size(57, 18);
			this->label_prix_HT->TabIndex = 13;
			this->label_prix_HT->Text = L"Prix HT";
			this->label_prix_HT->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gestionStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label_prix_HT);
			this->Controls->Add(this->input_prix_HT);
			this->Controls->Add(this->label_catalog);
			this->Controls->Add(this->label_article);
			this->Controls->Add(this->nature_article);
			this->Controls->Add(this->q_article);
			this->Controls->Add(this->name_article);
			this->Controls->Add(this->deny);
			this->Controls->Add(this->Add_an_article);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"gestionStock";
			this->Size = System::Drawing::Size(604, 566);
			this->Load += gcnew System::EventHandler(this, &gestionStock::gestionStock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_prix_HT))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//retour
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}


	private: System::Void gestionStock_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_an_article_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void deny_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

