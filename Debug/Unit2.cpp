#include <vcl.h>
#include "Unit2.h"
#include "Unit1.h" // Include Form1 header
#include "Unit3.h"

#pragma hdrstop
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner)
{
    // Form2 initialization code, if any
}

// Button click event to show Form3 for solving method selection
void __fastcall TForm2::btnSolveClick(TObject *Sender)
{
    if (!Form1) {
        ShowMessage("Form1 is not initialized!");
        return;
	}
	Form1->Show();
}

// Button click event for Generate (to be updated later)
void __fastcall TForm2::btnGenerateClick(TObject *Sender)
{
    // Placeholder for generate functionality
   // ShowMessage("Generate button clicked! This functionality will be implemented later.");
	Form1->Show();
   Form1->generating(this);
  // Close();
}

