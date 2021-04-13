#include "InsertData.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SQLConnectionGUIVS::InsertData form;
	Application::Run(%form);
}

