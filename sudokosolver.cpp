#include <vcl.h>
#pragma hdrstop
#include "Unit2.h" // Ensure to include your Form2 header

USEFORM("Win64x\Debug\Unit2.cpp", Form2);
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit3.cpp", Form3);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
    try
    {
        Application->Initialize();
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->Run(); // Start the application
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception); // Handle exceptions
	}
	catch (...)
	{
		try
		{
			throw Exception("Unknown error"); // Catch all other exceptions
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0; // Return success
}

