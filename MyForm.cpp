#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ arg) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//<íàçâàíèå ïðîåêòà>::MyForm form1;
	Project21::MyForm form1;
	Application::Run(% form1);
}