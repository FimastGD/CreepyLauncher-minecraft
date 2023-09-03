#include "creepy.h"
#include <iostream>
#include <Windows.h>



using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
int main(array<String^>^ args) {
	
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	Creepylaunch::creepy form;
	Application::Run(% form);

	//int refreshRate = GetDeviceCaps(GetDC(NULL), VREFRESH);
	//std::cout << refreshRate;
	 
}

