#ifndef Unit2H
#define Unit2H

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

class TForm1;

class TForm2 : public TForm
{
__published: // IDE-managed Components   // Button to open Form1
    TButton *btnGenerate; // Button for future use (to generate something)
    void __fastcall btnSolveClick(TObject *Sender);   // Event for Solve button
    void __fastcall btnGenerateClick(TObject *Sender); // Event for Generate button

public: // User declarations
    __fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;

#endif

