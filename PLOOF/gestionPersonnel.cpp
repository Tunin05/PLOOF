#include "gestionPersonnel.h"
#include "Gestion.h"
#include "Personnel.h"

System::Void PLOOF::gestionPersonnel::gestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel();
	perso->afficher(dataGrid);
	
}