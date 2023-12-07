#include "MyForm.h"
#include "CLDB.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PLOOF::MyForm mainForm;

	// Test base de donnees
	System::String^ query = "SELECT * FROM personnel;";
	CLDB^ db = gcnew CLDB();
	DataSet^ ds = db->getDataSet(query);


	Application::Run(% mainForm);
}
