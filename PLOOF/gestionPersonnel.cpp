#include "gestionPersonnel.h"
#include "Gestion.h"
#include "Personnel.h"

System::Void PLOOF::gestionPersonnel::gestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel();
	perso->afficher(dataGrid);
	delete perso;
}

System::Void PLOOF::gestionPersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionPersonnel_Load(sender, e);
}
