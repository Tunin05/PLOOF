#include "gestionStock.h"
#include "Gestion.h"
#include "Stock.h"

System::Void PLOOF::gestionStock::gestionStock_Load(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DataGridView^ dataGrid = gcnew System::Windows::Forms::DataGridView();
	Stock^ stock = gcnew Stock();
	stock->afficherStock(dataGrid);
}
