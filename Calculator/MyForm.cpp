#include "MyForm.h"
#include "conio.h"
#include <string.h>
using namespace System;

[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew Calculator::MyForm());

	return 0;
}