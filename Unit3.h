#ifndef Unit3H
#define Unit3H
#include "Unit1.h" // Ensure this is included to access Form1 and its methods

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>

class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *backtracking;
	TButton *mrvhash;
	void __fastcall backtrackingClick(TObject *Sender);
	void __fastcall mrvhashClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
};

extern PACKAGE TForm3 *Form3;

#endif

