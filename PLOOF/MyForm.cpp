#include "gestionPersonnel.h"
#include "MyForm.h"
#include "CAD.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PLOOF::MyForm mainForm;
    Application::Run(% mainForm);
}
