// login.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "mainform.h"
#include "mainpage_admin.h"
//#include "examPage.h"


//using namespace login;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	LoginApp::LoginForm form;
	// Create an instance of your mainform class
   // LoginApp::mainpage_admin adminform;
	//LoginApp::mainform mainform;

    Application::Run(%form);
	// Create the main window and run it
	//Application::Run(gcnew Form1());
	return 0;
}
