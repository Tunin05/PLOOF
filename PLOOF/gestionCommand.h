#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace PLOOF {

	/// <summary>
	/// Description r�sum�e de gestionCommande
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
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~gestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridViewListCommande;
	private: System::Windows::Forms::Label^ label_list_of_orders;



	private: System::Windows::Forms::Button^ refresh_button;
	private: System::Windows::Forms::Label^ label_client;
	private: System::Windows::Forms::Label^ label_lastname_client;
	private: System::Windows::Forms::TextBox^ name_client;
	private: System::Windows::Forms::TextBox^ firstname_client;
	private: System::Windows::Forms::Label^ label_firstname_client;
	private: System::Windows::Forms::NumericUpDown^ id_client;
	private: System::Windows::Forms::Label^ label_id_client;
	private: System::Windows::Forms::DataGridView^ dataGridView_clients;
	private: System::Windows::Forms::Label^ labelOrder_details;

	private: System::Windows::Forms::DataGridView^ dataGridViewDetailsCommande;
	private: System::Windows::Forms::Label^ label_list_of_clients;


	private: System::Windows::Forms::Label^ label_orders_title;
	private: System::Windows::Forms::Label^ label_reference_orders;
	private: System::Windows::Forms::Label^ label_delivery_address;
	private: System::Windows::Forms::Label^ label_delivery_date;
	private: System::Windows::Forms::Label^ label_order_date;
	private: System::Windows::Forms::Label^ label_payment_date;
	private: System::Windows::Forms::Label^ label_payment_method;
	private: System::Windows::Forms::Label^ label_customer_service_number;









	private: System::Windows::Forms::TextBox^ input_reference;
	private: System::Windows::Forms::TextBox^ delivery_address_input;
	private: System::Windows::Forms::DateTimePicker^ order_date_input;
	private: System::Windows::Forms::DateTimePicker^ payment_date_input;



	private: System::Windows::Forms::DateTimePicker^ delivery_date_input;
	private: System::Windows::Forms::TextBox^ payment_method_input;
	private: System::Windows::Forms::NumericUpDown^ customer_service_number_input;










	private: System::Windows::Forms::Button^ button_modify_entire_order;
	private: System::Windows::Forms::Button^ button_delete_entire_order;





















	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewListCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label_list_of_orders = (gcnew System::Windows::Forms::Label());
			this->refresh_button = (gcnew System::Windows::Forms::Button());
			this->label_client = (gcnew System::Windows::Forms::Label());
			this->label_lastname_client = (gcnew System::Windows::Forms::Label());
			this->name_client = (gcnew System::Windows::Forms::TextBox());
			this->firstname_client = (gcnew System::Windows::Forms::TextBox());
			this->label_firstname_client = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_id_client = (gcnew System::Windows::Forms::Label());
			this->dataGridView_clients = (gcnew System::Windows::Forms::DataGridView());
			this->labelOrder_details = (gcnew System::Windows::Forms::Label());
			this->dataGridViewDetailsCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label_list_of_clients = (gcnew System::Windows::Forms::Label());
			this->label_orders_title = (gcnew System::Windows::Forms::Label());
			this->label_reference_orders = (gcnew System::Windows::Forms::Label());
			this->label_delivery_address = (gcnew System::Windows::Forms::Label());
			this->label_delivery_date = (gcnew System::Windows::Forms::Label());
			this->label_order_date = (gcnew System::Windows::Forms::Label());
			this->label_payment_date = (gcnew System::Windows::Forms::Label());
			this->label_payment_method = (gcnew System::Windows::Forms::Label());
			this->label_customer_service_number = (gcnew System::Windows::Forms::Label());
			this->input_reference = (gcnew System::Windows::Forms::TextBox());
			this->delivery_address_input = (gcnew System::Windows::Forms::TextBox());
			this->order_date_input = (gcnew System::Windows::Forms::DateTimePicker());
			this->payment_date_input = (gcnew System::Windows::Forms::DateTimePicker());
			this->delivery_date_input = (gcnew System::Windows::Forms::DateTimePicker());
			this->payment_method_input = (gcnew System::Windows::Forms::TextBox());
			this->customer_service_number_input = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_modify_entire_order = (gcnew System::Windows::Forms::Button());
			this->button_delete_entire_order = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDetailsCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customer_service_number_input))->BeginInit();
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
			// dataGridViewListCommande
			// 
			this->dataGridViewListCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewListCommande->Location = System::Drawing::Point(946, 63);
			this->dataGridViewListCommande->Name = L"dataGridViewListCommande";
			this->dataGridViewListCommande->RowHeadersWidth = 51;
			this->dataGridViewListCommande->RowTemplate->Height = 24;
			this->dataGridViewListCommande->Size = System::Drawing::Size(589, 267);
			this->dataGridViewListCommande->TabIndex = 2;
			this->dataGridViewListCommande->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowCommande);
			this->dataGridViewListCommande->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowCommande);
			// 
			// label_list_of_orders
			// 
			this->label_list_of_orders->AutoSize = true;
			this->label_list_of_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_list_of_orders->Location = System::Drawing::Point(941, 35);
			this->label_list_of_orders->Name = L"label_list_of_orders";
			this->label_list_of_orders->Size = System::Drawing::Size(137, 25);
			this->label_list_of_orders->TabIndex = 3;
			this->label_list_of_orders->Text = L"List of orders";
			// 
			// refresh_button
			// 
			this->refresh_button->Location = System::Drawing::Point(325, 3);
			this->refresh_button->Name = L"refresh_button";
			this->refresh_button->Size = System::Drawing::Size(75, 23);
			this->refresh_button->TabIndex = 4;
			this->refresh_button->Text = L"Refresh";
			this->refresh_button->UseVisualStyleBackColor = true;
			this->refresh_button->Click += gcnew System::EventHandler(this, &gestionCommande::refresh_button_Click);
			// 
			// label_client
			// 
			this->label_client->AutoSize = true;
			this->label_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_client->Location = System::Drawing::Point(610, 49);
			this->label_client->Name = L"label_client";
			this->label_client->Size = System::Drawing::Size(104, 26);
			this->label_client->TabIndex = 11;
			this->label_client->Text = L"CLIENTS";
			this->label_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_lastname_client
			// 
			this->label_lastname_client->AutoSize = true;
			this->label_lastname_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_lastname_client->Location = System::Drawing::Point(532, 81);
			this->label_lastname_client->Name = L"label_lastname_client";
			this->label_lastname_client->Size = System::Drawing::Size(77, 18);
			this->label_lastname_client->TabIndex = 27;
			this->label_lastname_client->Text = L"Last name";
			this->label_lastname_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// name_client
			// 
			this->name_client->Location = System::Drawing::Point(613, 78);
			this->name_client->Name = L"name_client";
			this->name_client->ReadOnly = true;
			this->name_client->Size = System::Drawing::Size(141, 22);
			this->name_client->TabIndex = 28;
			// 
			// firstname_client
			// 
			this->firstname_client->Location = System::Drawing::Point(613, 106);
			this->firstname_client->Name = L"firstname_client";
			this->firstname_client->ReadOnly = true;
			this->firstname_client->Size = System::Drawing::Size(141, 22);
			this->firstname_client->TabIndex = 29;
			// 
			// label_firstname_client
			// 
			this->label_firstname_client->AutoSize = true;
			this->label_firstname_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_firstname_client->Location = System::Drawing::Point(531, 110);
			this->label_firstname_client->Name = L"label_firstname_client";
			this->label_firstname_client->Size = System::Drawing::Size(78, 18);
			this->label_firstname_client->TabIndex = 30;
			this->label_firstname_client->Text = L"First name";
			this->label_firstname_client->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(615, 144);
			this->id_client->Name = L"id_client";
			this->id_client->ReadOnly = true;
			this->id_client->Size = System::Drawing::Size(87, 22);
			this->id_client->TabIndex = 32;
			// 
			// label_id_client
			// 
			this->label_id_client->AutoSize = true;
			this->label_id_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_id_client->Location = System::Drawing::Point(546, 144);
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
			this->dataGridView_clients->Location = System::Drawing::Point(19, 81);
			this->dataGridView_clients->Name = L"dataGridView_clients";
			this->dataGridView_clients->ReadOnly = true;
			this->dataGridView_clients->RowHeadersWidth = 51;
			this->dataGridView_clients->RowTemplate->Height = 24;
			this->dataGridView_clients->Size = System::Drawing::Size(381, 618);
			this->dataGridView_clients->TabIndex = 36;
			this->dataGridView_clients->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			this->dataGridView_clients->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &gestionCommande::SelectRowClients);
			// 
			// labelOrder_details
			// 
			this->labelOrder_details->AutoSize = true;
			this->labelOrder_details->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOrder_details->Location = System::Drawing::Point(941, 404);
			this->labelOrder_details->Name = L"labelOrder_details";
			this->labelOrder_details->Size = System::Drawing::Size(136, 25);
			this->labelOrder_details->TabIndex = 37;
			this->labelOrder_details->Text = L"Order details";
			// 
			// dataGridViewDetailsCommande
			// 
			this->dataGridViewDetailsCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDetailsCommande->Location = System::Drawing::Point(946, 432);
			this->dataGridViewDetailsCommande->Name = L"dataGridViewDetailsCommande";
			this->dataGridViewDetailsCommande->RowHeadersWidth = 51;
			this->dataGridViewDetailsCommande->RowTemplate->Height = 24;
			this->dataGridViewDetailsCommande->Size = System::Drawing::Size(589, 267);
			this->dataGridViewDetailsCommande->TabIndex = 38;
			// 
			// label_list_of_clients
			// 
			this->label_list_of_clients->AutoSize = true;
			this->label_list_of_clients->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_list_of_clients->Location = System::Drawing::Point(14, 52);
			this->label_list_of_clients->Name = L"label_list_of_clients";
			this->label_list_of_clients->Size = System::Drawing::Size(138, 25);
			this->label_list_of_clients->TabIndex = 39;
			this->label_list_of_clients->Text = L"List of clients";
			// 
			// label_orders_title
			// 
			this->label_orders_title->AutoSize = true;
			this->label_orders_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_orders_title->Location = System::Drawing::Point(608, 214);
			this->label_orders_title->Name = L"label_orders_title";
			this->label_orders_title->Size = System::Drawing::Size(107, 26);
			this->label_orders_title->TabIndex = 40;
			this->label_orders_title->Text = L"ORDERS";
			this->label_orders_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_reference_orders
			// 
			this->label_reference_orders->AutoSize = true;
			this->label_reference_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_reference_orders->Location = System::Drawing::Point(507, 266);
			this->label_reference_orders->Name = L"label_reference_orders";
			this->label_reference_orders->Size = System::Drawing::Size(76, 18);
			this->label_reference_orders->TabIndex = 41;
			this->label_reference_orders->Text = L"Reference";
			this->label_reference_orders->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_delivery_address
			// 
			this->label_delivery_address->AutoSize = true;
			this->label_delivery_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_delivery_address->Location = System::Drawing::Point(464, 293);
			this->label_delivery_address->Name = L"label_delivery_address";
			this->label_delivery_address->Size = System::Drawing::Size(117, 18);
			this->label_delivery_address->TabIndex = 42;
			this->label_delivery_address->Text = L"Delivery address";
			this->label_delivery_address->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_delivery_date
			// 
			this->label_delivery_date->AutoSize = true;
			this->label_delivery_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_delivery_date->Location = System::Drawing::Point(489, 321);
			this->label_delivery_date->Name = L"label_delivery_date";
			this->label_delivery_date->Size = System::Drawing::Size(92, 18);
			this->label_delivery_date->TabIndex = 43;
			this->label_delivery_date->Text = L"Delivery date";
			this->label_delivery_date->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_order_date
			// 
			this->label_order_date->AutoSize = true;
			this->label_order_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_order_date->Location = System::Drawing::Point(503, 347);
			this->label_order_date->Name = L"label_order_date";
			this->label_order_date->Size = System::Drawing::Size(78, 18);
			this->label_order_date->TabIndex = 44;
			this->label_order_date->Text = L"Order date";
			this->label_order_date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_payment_date
			// 
			this->label_payment_date->AutoSize = true;
			this->label_payment_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_payment_date->Location = System::Drawing::Point(482, 377);
			this->label_payment_date->Name = L"label_payment_date";
			this->label_payment_date->Size = System::Drawing::Size(98, 18);
			this->label_payment_date->TabIndex = 45;
			this->label_payment_date->Text = L"Payment date";
			this->label_payment_date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_payment_method
			// 
			this->label_payment_method->AutoSize = true;
			this->label_payment_method->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_payment_method->Location = System::Drawing::Point(460, 404);
			this->label_payment_method->Name = L"label_payment_method";
			this->label_payment_method->Size = System::Drawing::Size(120, 18);
			this->label_payment_method->TabIndex = 46;
			this->label_payment_method->Text = L"Payment method";
			this->label_payment_method->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_customer_service_number
			// 
			this->label_customer_service_number->AutoSize = true;
			this->label_customer_service_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_customer_service_number->Location = System::Drawing::Point(401, 434);
			this->label_customer_service_number->Name = L"label_customer_service_number";
			this->label_customer_service_number->Size = System::Drawing::Size(179, 18);
			this->label_customer_service_number->TabIndex = 47;
			this->label_customer_service_number->Text = L"Customer service number";
			this->label_customer_service_number->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input_reference
			// 
			this->input_reference->Location = System::Drawing::Point(604, 265);
			this->input_reference->Name = L"input_reference";
			this->input_reference->Size = System::Drawing::Size(141, 22);
			this->input_reference->TabIndex = 48;
			// 
			// delivery_address_input
			// 
			this->delivery_address_input->Location = System::Drawing::Point(604, 293);
			this->delivery_address_input->Name = L"delivery_address_input";
			this->delivery_address_input->Size = System::Drawing::Size(141, 22);
			this->delivery_address_input->TabIndex = 49;
			// 
			// order_date_input
			// 
			this->order_date_input->Location = System::Drawing::Point(604, 347);
			this->order_date_input->Name = L"order_date_input";
			this->order_date_input->Size = System::Drawing::Size(279, 22);
			this->order_date_input->TabIndex = 50;
			// 
			// payment_date_input
			// 
			this->payment_date_input->Location = System::Drawing::Point(604, 377);
			this->payment_date_input->Name = L"payment_date_input";
			this->payment_date_input->Size = System::Drawing::Size(279, 22);
			this->payment_date_input->TabIndex = 51;
			// 
			// delivery_date_input
			// 
			this->delivery_date_input->Location = System::Drawing::Point(604, 321);
			this->delivery_date_input->Name = L"delivery_date_input";
			this->delivery_date_input->Size = System::Drawing::Size(279, 22);
			this->delivery_date_input->TabIndex = 52;
			// 
			// payment_method_input
			// 
			this->payment_method_input->Location = System::Drawing::Point(604, 406);
			this->payment_method_input->Name = L"payment_method_input";
			this->payment_method_input->Size = System::Drawing::Size(141, 22);
			this->payment_method_input->TabIndex = 53;
			// 
			// customer_service_number_input
			// 
			this->customer_service_number_input->Location = System::Drawing::Point(604, 434);
			this->customer_service_number_input->Name = L"customer_service_number_input";
			this->customer_service_number_input->Size = System::Drawing::Size(87, 22);
			this->customer_service_number_input->TabIndex = 54;
			// 
			// button_modify_entire_order
			// 
			this->button_modify_entire_order->Location = System::Drawing::Point(463, 548);
			this->button_modify_entire_order->Name = L"button_modify_entire_order";
			this->button_modify_entire_order->Size = System::Drawing::Size(178, 30);
			this->button_modify_entire_order->TabIndex = 62;
			this->button_modify_entire_order->Text = L"Modify entire order";
			this->button_modify_entire_order->UseVisualStyleBackColor = true;
			this->button_modify_entire_order->Click += gcnew System::EventHandler(this, &gestionCommande::button_modify_entire_order_Click);
			// 
			// button_delete_entire_order
			// 
			this->button_delete_entire_order->Location = System::Drawing::Point(674, 548);
			this->button_delete_entire_order->Name = L"button_delete_entire_order";
			this->button_delete_entire_order->Size = System::Drawing::Size(178, 30);
			this->button_delete_entire_order->TabIndex = 63;
			this->button_delete_entire_order->Text = L"Delete entire order";
			this->button_delete_entire_order->UseVisualStyleBackColor = true;
			this->button_delete_entire_order->Click += gcnew System::EventHandler(this, &gestionCommande::button_delete_entire_order_Click);
			// 
			// gestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button_delete_entire_order);
			this->Controls->Add(this->button_modify_entire_order);
			this->Controls->Add(this->customer_service_number_input);
			this->Controls->Add(this->payment_method_input);
			this->Controls->Add(this->delivery_date_input);
			this->Controls->Add(this->payment_date_input);
			this->Controls->Add(this->order_date_input);
			this->Controls->Add(this->delivery_address_input);
			this->Controls->Add(this->input_reference);
			this->Controls->Add(this->label_customer_service_number);
			this->Controls->Add(this->label_payment_method);
			this->Controls->Add(this->label_payment_date);
			this->Controls->Add(this->label_order_date);
			this->Controls->Add(this->label_delivery_date);
			this->Controls->Add(this->label_delivery_address);
			this->Controls->Add(this->label_reference_orders);
			this->Controls->Add(this->label_orders_title);
			this->Controls->Add(this->label_list_of_clients);
			this->Controls->Add(this->dataGridViewDetailsCommande);
			this->Controls->Add(this->labelOrder_details);
			this->Controls->Add(this->dataGridView_clients);
			this->Controls->Add(this->label_id_client);
			this->Controls->Add(this->id_client);
			this->Controls->Add(this->label_firstname_client);
			this->Controls->Add(this->firstname_client);
			this->Controls->Add(this->name_client);
			this->Controls->Add(this->label_lastname_client);
			this->Controls->Add(this->label_client);
			this->Controls->Add(this->refresh_button);
			this->Controls->Add(this->label_list_of_orders);
			this->Controls->Add(this->dataGridViewListCommande);
			this->Controls->Add(this->button1);
			this->Name = L"gestionCommande";
			this->Size = System::Drawing::Size(1643, 743);
			this->Load += gcnew System::EventHandler(this, &gestionCommande::gestionCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewListCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->id_client))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_clients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDetailsCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customer_service_number_input))->EndInit();
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
	private: System::Void SelectRowCommande(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		   //chargement de la page
	private: System::Void gestionCommande_Load(System::Object^ sender, System::EventArgs^ e);
		   //Actualisation du tableau
	private: System::Void refresh_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_modify_entire_order_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_delete_entire_order_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
