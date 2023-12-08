#include "gestionPersonnel.h"
#include "Gestion.h"
#include "Personnel.h"

System::Void PLOOF::gestionPersonnel::gestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel();
	perso->afficher(dataGrid);
}

System::Void PLOOF::gestionPersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionPersonnel_Load(sender, e);
}

System::Void PLOOF::gestionPersonnel::SelectRow(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int i = e->RowIndex;
	numericUpDown1->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);
	textBox1->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value);
	textBox2->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value);
	numericUpDown2->Value = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value);
	textBox4->Text = Convert::ToString(dataGridView1->Rows[i]->Cells[4]->Value);
}

System::Void PLOOF::gestionPersonnel::button6_Click(System::Object^ sender, System::EventArgs^ e) // Fonction de recherche d'un personnel
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel();
	perso->rechercher(dataGrid, numericUpDown1->Value, textBox2->Text, textBox1->Text, textBox4->Text, numericUpDown2->Value);
	delete perso;
}

System::Void PLOOF::gestionPersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e) // Insertion d'un personnel
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
											
	Personnel* perso = new Personnel(numericUpDown1->Value, textBox1->Text, textBox2->Text, numericUpDown2->Value, textBox4->Text);
	perso->insert();
	delete perso;
	clear_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionPersonnel_Load(sender, e);
}

System::Void PLOOF::gestionPersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e) // Modification d'un personnel
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel(numericUpDown1->Value, textBox1->Text, textBox2->Text, numericUpDown2->Value, textBox4->Text);
	perso->update();
	delete perso;
	clear_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionPersonnel_Load(sender, e);
}

System::Void PLOOF::gestionPersonnel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DataGridView^  dataGrid = this->dataGridView1;
	Personnel* perso = new Personnel(numericUpDown1->Value, textBox1->Text, textBox2->Text, numericUpDown2->Value, textBox4->Text);
	perso->remove();
	delete perso;
	clear_Click(sender, e);
	//rafraichir le datagridview
	delete this->dataGridView1->DataSource;
	GC::Collect();
	gestionPersonnel_Load(sender, e);
}
