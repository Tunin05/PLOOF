#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DataGridView^ dataGrid = this->dataGridView1;
	Stock* stock = new Stock();
	stock->afficher(dataGrid);

}
