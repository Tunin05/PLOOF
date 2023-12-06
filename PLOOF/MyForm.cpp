#include "MyForm.h"
#include "CAD.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PLOOF::MyForm form;

	// Test de la connexion à la base de données
	NS_Comp_Data::CLcad^ oCad = gcnew NS_Comp_Data::CLcad();
	MessageBox::Show(oCad->getRows("SELECT * FROM T_PLOOF", "T_PLOOF")->Tables["T_PLOOF"]->Rows[0]->ItemArray[0]->ToString());

	Application::Run(%form);
}