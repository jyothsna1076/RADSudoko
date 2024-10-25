#include <vcl.h>
#include "Unit2.h"
#include "Unit1.h" // Include Form1 header

#pragma hdrstop
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner)
{
    // Form2 initialization code, if any
}

// Button click event to show Form1
void __fastcall TForm2::btnSolveClick(TObject *Sender)
{
    // Create and show Form1
    Form1 = new TForm1(this); // Create Form1 instance
    Form1->Show(); // Show Form1
}

// Button click event for Generate (to be updated later)
void __fastcall TForm2::btnGenerateClick(TObject *Sender)
{
    // Placeholder for generate functionality
    ShowMessage("Generate button clicked! This functionality will be implemented later.");
}

