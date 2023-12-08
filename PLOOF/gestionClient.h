#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description r�sum�e de gestionClient
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
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~gestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clear;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;

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
			this->clear = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(509, 410);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(75, 42);
			this->clear->TabIndex = 39;
			this->clear->Text = L"Vider les champs";
			this->clear->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(382, 346);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(202, 20);
			this->numericUpDown2->TabIndex = 38;
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
			this->button3->Text = L"Cr�er";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(274, 377);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 20);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Adresse :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(274, 345);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 20);
			this->label5->TabIndex = 32;
			this->label5->Text = L"ID Sup�rieur :";
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
			this->label3->Text = L"Pr�nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 315);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"ID :";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(356, 377);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 26);
			this->textBox4->TabIndex = 28;
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
			this->numericUpDown1->Location = System::Drawing::Point(91, 313);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(35, 26);
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(509, 312);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Actualiser";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 20);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Liste du personnel";
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 38);
			this->button1->TabIndex = 21;
			this->button1->Text = L"< Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gestionClient::button1_Click);
			// 
			// gestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->clear);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"gestionClient";
			this->Size = System::Drawing::Size(606, 507);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
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
};
}