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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ refresh_button;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->refresh_button->Location = System::Drawing::Point(823, 340);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(75, 23);
			this->refresh_button->TabIndex = 4;
			this->refresh_button->Text = L"Actualiser";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &gestionCommande::refresh_button_Click);
			// 
			// gestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"gestionCommande";
			this->Load += gcnew System::EventHandler(this, &gestionCommande::gestionCommande_Load);
			this->ResumeLayout(false);
			this->Size = System::Drawing::Size(928, 744);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);

		}
#pragma endregion

		//retour
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void gestionCommande_Load(System::Object^ sender, System::EventArgs^ e);
		   //Actualisation du tableau
	private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
