using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "ProgramForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MothersDay::ProgramForm()); 
	return 0;
}