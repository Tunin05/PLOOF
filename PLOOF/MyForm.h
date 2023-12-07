#pragma once
#include "gestionPersonnel.h"
#include "gestionStock.h"

namespace PLOOF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->SuspendLayout();
			// 
			// logo
			// 
			this->logo->Location = System::Drawing::Point(99, 12);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(379, 158);
			this->logo->TabIndex = 0;
			this->logo->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Gestion du personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Gestion des clients";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion des commandes";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(182, 360);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Gestion du stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(182, 418);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Gestion des statistiques";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(588, 511);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->logo);
			this->Name = L"MyForm";
			this->Text = L"PLOOF";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		gestionPersonnel^ FgestionPersonnel = gcnew gestionPersonnel();
		this->Controls->Add(FgestionPersonnel);
		FgestionPersonnel->BringToFront();
		FgestionPersonnel->Location = Point(0, 0);
		FgestionPersonnel->Size = this->ClientSize;
		FgestionPersonnel->Show();
	}
	};
}
