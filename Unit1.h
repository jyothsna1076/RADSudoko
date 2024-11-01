#ifndef Unit1H
#define Unit1H

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Vcl.Grids.hpp>
#include <vector>
#include <unordered_set>
class TForm1 : public TForm
{
__published: // IDE-managed Components
    TStringGrid *StringGrid1;
    TButton *SolveButton;
    void __fastcall SolveButtonClick(TObject *Sender);
    void __fastcall StringGrid1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall StringGrid1Click(TObject *Sender);
	void __fastcall solvenow(TObject *Sender);

public: // User declarations
    __fastcall TForm1(TComponent* Owner);
	void updateGridDisplay(const std::vector<std::vector<int>>& vect);
	 bool useBacktracking;
	 bool useMRV;
    // Ensure these are declared as public methods
    bool solveBacktracking(std::vector<std::vector<int>>& vect, std::vector<std::unordered_set<int>>& rows, std::vector<std::unordered_set<int>>& cols, std::vector<std::unordered_set<int>>& boxes);
    bool solveMRV(std::vector<std::vector<int>>& vect, std::vector<std::unordered_set<int>>& rows, std::vector<std::unordered_set<int>>& cols, std::vector<std::unordered_set<int>>& boxes);
};

extern PACKAGE TForm1 *Form1;

#endif

