#include "creepy.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	Creepylaunch::creepy form;
	Application::Run(% form);
	 
}
