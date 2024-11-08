#ifndef Unit1H
#define Unit1H

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Vcl.Grids.hpp>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;
class TForm1 : public TForm
{
__published: // IDE-managed Components
    TStringGrid *StringGrid1;
    TButton *SolveButton;
	TButton *PlayByYourself;
    void __fastcall SolveButtonClick(TObject *Sender);
    void __fastcall StringGrid1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall StringGrid1Click(TObject *Sender);
	void __fastcall solvenow(TObject *Sender);
	void __fastcall generating(TObject *Sender);
	void __fastcall PlayByYourselfClick(TObject *Sender);
	void __fastcall SudokuGridEditingDone( int ACol, int ARow, const UnicodeString Value);
	 void __fastcall InitializePlaySudoku();
	// void __fastcall EnablePlayMode();
	 void __fastcall StringGrid1SetEditText(TObject *Sender, int ACol, int ARow, const UnicodeString Value);
 private: // User declarations
	std::vector<std::vector<int>> playSudoku;
   //std::vector<std::vector<int>> solutionSudoku;
public: // User declarations
    __fastcall TForm1(TComponent* Owner);
	void updateGridDisplay(const std::vector<std::vector<int>>& vect);
	 bool useBacktracking;
	 bool useMRV;
	 bool useAStar;
     bool usebfs;
	 bool solveAStar(vector<vector<int>>& grid);
	 bool IsDuplicate(int input, int ARow, int ACol);
	 //std::vector<std::vector<int>> playSudoku(9, std::vector<int>(9, 0)); // For playing mode
     // Add this in the public or private section of TForm1 class in Unit1.h

     bool solveBackt(std::vector<std::vector<int>>& vect, std::vector<std::unordered_set<int>>& rows, std::vector<std::unordered_set<int>>& cols, std::vector<std::unordered_set<int>>& boxes);
	// Ensure these are declared as public methods
	bool solveBacktracking(std::vector<std::vector<int>>& vect, std::vector<std::unordered_set<int>>& rows, std::vector<std::unordered_set<int>>& cols, std::vector<std::unordered_set<int>>& boxes);
	bool solveMRV(std::vector<std::vector<int>>& vect, std::vector<std::unordered_set<int>>& rows, std::vector<std::unordered_set<int>>& cols, std::vector<std::unordered_set<int>>& boxes,vector<vector<set<int>>>& options);
};

extern PACKAGE TForm1 *Form1;

#endif

