#pragma once

namespace PLOOF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->logo->Location = System::Drawing::Point(64, 23);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(379, 158);
			this->logo->TabIndex = 0;
			this->logo->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(147, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 52);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Gestion du personnel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(147, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(213, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Gestion des clients";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(147, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(213, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion des commandes";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(147, 371);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(213, 52);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Gestion du stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(147, 429);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Gestion des statistiques";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(519, 511);
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
	};
}
