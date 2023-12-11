#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description résumée de gestionCommand
	/// </summary>
	public ref class gestionCommand : public System::Windows::Forms::UserControl
	{
	public:
		gestionCommand(void)
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
		~gestionCommand()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ change_article_button;
	protected:


	private: System::Windows::Forms::Label^ label_id_article;
	private: System::Windows::Forms::NumericUpDown^ id_article_input;

	private: System::Windows::Forms::Label^ label_nature_article;
	private: System::Windows::Forms::Label^ label_nom_article;
	private: System::Windows::Forms::Button^ delete_article;
	private: System::Windows::Forms::Button^ clear_button;
	private: System::Windows::Forms::Label^ label_quantity;
	private: System::Windows::Forms::NumericUpDown^ input_quantity;










	private: System::Windows::Forms::Label^ label_article;
	private: System::Windows::Forms::TextBox^ nature_article;
	private: System::Windows::Forms::TextBox^ name_article;
	private: System::Windows::Forms::Button^ Add_an_article;
	private: System::Windows::Forms::Button^ refresh_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

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
			this->change_article_button = (gcnew System::Windows::Forms::Button());
			this->label_id_article = (gcnew System::Windows::Forms::Label());
			this->id_article_input = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_nature_article = (gcnew System::Windows::Forms::Label());
			this->label_nom_article = (gcnew System::Windows::Forms::Label());
			this->delete_article = (gcnew System::Windows::Forms::Button());
			this->clear_button = (gcnew System::Windows::Forms::Button());
			this->label_quantity = (gcnew System::Windows::Forms::Label());
			this->input_quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_article = (gcnew System::Windows::Forms::Label());
			this->nature_article = (gcnew System::Windows::Forms::TextBox());
			this->name_article = (gcnew System::Windows::Forms::TextBox());
			this->Add_an_article = (gcnew System::Windows::Forms::Button());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_article_input))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_quantity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// change_article_button
			// 
			this->change_article_button->Location = System::Drawing::Point(468, 364);
			this->change_article_button->Name = L"change_article_button";
			this->change_article_button->Size = System::Drawing::Size(199, 25);
			this->change_article_button->TabIndex = 63;
			this->change_article_button->Text = L"Modifier une commande";
			this->change_article_button->UseVisualStyleBackColor = true;
			// 
			// label_id_article
			// 
			this->label_id_article->AutoSize = true;
			this->label_id_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_article->Location = System::Drawing::Point(292, 587);
			this->label_id_article->Name = L"label_id_article";
			this->label_id_article->Size = System::Drawing::Size(65, 18);
			this->label_id_article->TabIndex = 60;
			this->label_id_article->Text = L"ID article";
			this->label_id_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// id_article_input
			// 
			this->id_article_input->Location = System::Drawing::Point(363, 587);
			this->id_article_input->Name = L"id_article_input";
			this->id_article_input->ReadOnly = true;
			this->id_article_input->Size = System::Drawing::Size(159, 22);
			this->id_article_input->TabIndex = 59;
			// 
			// label_nature_article
			// 
			this->label_nature_article->AutoSize = true;
			this->label_nature_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_nature_article->Location = System::Drawing::Point(306, 548);
			this->label_nature_article->Name = L"label_nature_article";
			this->label_nature_article->Size = System::Drawing::Size(52, 18);
			this->label_nature_article->TabIndex = 57;
			this->label_nature_article->Text = L"Nature";
			this->label_nature_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_nom_article
			// 
			this->label_nom_article->AutoSize = true;
			this->label_nom_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom_article->Location = System::Drawing::Point(306, 492);
			this->label_nom_article->Name = L"label_nom_article";
			this->label_nom_article->Size = System::Drawing::Size(41, 18);
			this->label_nom_article->TabIndex = 56;
			this->label_nom_article->Text = L"Nom";
			this->label_nom_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// delete_article
			// 
			this->delete_article->Location = System::Drawing::Point(239, 364);
			this->delete_article->Name = L"delete_article";
			this->delete_article->Size = System::Drawing::Size(199, 25);
			this->delete_article->TabIndex = 55;
			this->delete_article->Text = L"Supprimer une commande";
			this->delete_article->UseVisualStyleBackColor = true;
			// 
			// clear_button
			// 
			this->clear_button->Location = System::Drawing::Point(14, 485);
			this->clear_button->Name = L"clear_button";
			this->clear_button->Size = System::Drawing::Size(196, 25);
			this->clear_button->TabIndex = 54;
			this->clear_button->Text = L"Vider les champs";
			this->clear_button->UseVisualStyleBackColor = true;
			// 
			// label_quantity
			// 
			this->label_quantity->AutoSize = true;
			this->label_quantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_quantity->Location = System::Drawing::Point(294, 520);
			this->label_quantity->Name = L"label_quantity";
			this->label_quantity->Size = System::Drawing::Size(63, 18);
			this->label_quantity->TabIndex = 53;
			this->label_quantity->Text = L"Quantite";
			this->label_quantity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input_quantity
			// 
			this->input_quantity->Location = System::Drawing::Point(363, 516);
			this->input_quantity->Name = L"input_quantity";
			this->input_quantity->Size = System::Drawing::Size(159, 22);
			this->input_quantity->TabIndex = 52;
			// 
			// label_article
			// 
			this->label_article->AutoSize = true;
			this->label_article->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_article->Location = System::Drawing::Point(389, 439);
			this->label_article->Name = L"label_article";
			this->label_article->Size = System::Drawing::Size(104, 26);
			this->label_article->TabIndex = 41;
			this->label_article->Text = L"ARTICLE";
			this->label_article->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nature_article
			// 
			this->nature_article->Location = System::Drawing::Point(363, 544);
			this->nature_article->Name = L"nature_article";
			this->nature_article->Size = System::Drawing::Size(159, 22);
			this->nature_article->TabIndex = 40;
			// 
			// name_article
			// 
			this->name_article->Location = System::Drawing::Point(363, 488);
			this->name_article->Name = L"name_article";
			this->name_article->Size = System::Drawing::Size(159, 22);
			this->name_article->TabIndex = 39;
			// 
			// Add_an_article
			// 
			this->Add_an_article->Location = System::Drawing::Point(14, 364);
			this->Add_an_article->Name = L"Add_an_article";
			this->Add_an_article->Size = System::Drawing::Size(199, 27);
			this->Add_an_article->TabIndex = 38;
			this->Add_an_article->Text = L"Ajouter une commande";
			this->Add_an_article->UseVisualStyleBackColor = true;
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(823, 342);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(75, 23);
			this->refresh_button->TabIndex = 37;
			this->refresh_button->Text = L"Actualiser";
			this->refresh_button->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 25);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Liste des commandes";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(14, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(884, 267);
			this->dataGridView1->TabIndex = 35;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommand::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 38);
			this->button1->TabIndex = 34;
			this->button1->Text = L"< Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gestionCommand::button1_Click);
			// 
			// gestionCommand
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->change_article_button);
			this->Controls->Add(this->label_id_article);
			this->Controls->Add(this->id_article_input);
			this->Controls->Add(this->label_nature_article);
			this->Controls->Add(this->label_nom_article);
			this->Controls->Add(this->delete_article);
			this->Controls->Add(this->clear_button);
			this->Controls->Add(this->label_quantity);
			this->Controls->Add(this->input_quantity);
			this->Controls->Add(this->label_article);
			this->Controls->Add(this->nature_article);
			this->Controls->Add(this->name_article);
			this->Controls->Add(this->Add_an_article);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"gestionCommand";
			this->Size = System::Drawing::Size(914, 690);
			this->Load += gcnew System::EventHandler(this, &gestionCommand::gestionCommand_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_article_input))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_quantity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		GC::Collect();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
	private: System::Void gestionCommand_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Fonctionnalité non disponible pour le moment");
	}
};
}
