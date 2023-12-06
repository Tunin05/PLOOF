#include "gestionPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;

void gestionPersonnel(void) {
	PLOOF::gestionPersonnel form;
	Application::Run(%form);
}