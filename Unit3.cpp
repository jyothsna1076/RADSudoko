#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h" // Ensure access to Form1 and its methods

#pragma package(smart_init)
#pragma resource "*.dfm"

TForm3 *Form3;

__fastcall TForm3::TForm3(TComponent* Owner) : TForm(Owner)
{
}

void __fastcall TForm3::backtrackingClick(TObject *Sender)
{
   Form1->useBacktracking = true;  // Set the flag for backtracking
	Hide(); // Hide Form3 instead of Close to ensure it disappears
	 Form1->solvenow(this);
	Close();
}

void __fastcall TForm3::mrvhashClick(TObject *Sender)
{
	  Form1->useMRV = true;
	  Hide();
	  Form1->solvenow(this);
      Close();

}

void __fastcall TForm3::AStarClick(TObject *Sender)
{
		 Form1->useAStar= true;
		 Hide();
		 Form1->solvenow(this);
		 Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::bfsClick(TObject *Sender)
{
           Form1->usebfs= true;
		 Hide();
		 Form1->solvenow(this);
		 Close();
}
//---------------------------------------------------------------------------

