//---------------------------------------------------------------------------

#ifndef EXAUH
#define EXAUH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *la;
        TLabel *lb;
        TButton *c;
        TButton *division;
        TButton *multiply;
        TButton *b7;
        TButton *b8;
        TButton *b9;
        TButton *b4;
        TButton *b5;
        TButton *b6;
        TButton *b1;
        TButton *b2;
        TButton *b3;
        TButton *b0;
        TButton *b10;
        TButton *add;
        TButton *equal;
        TButton *minus;
        void __fastcall b0Click(TObject *Sender);
        void __fastcall b1Click(TObject *Sender);
        void __fastcall b2Click(TObject *Sender);
        void __fastcall b3Click(TObject *Sender);
        void __fastcall b4Click(TObject *Sender);
        void __fastcall b5Click(TObject *Sender);
        void __fastcall b6Click(TObject *Sender);
        void __fastcall b7Click(TObject *Sender);
        void __fastcall b8Click(TObject *Sender);
        void __fastcall b9Click(TObject *Sender);
        void __fastcall addClick(TObject *Sender);
        void __fastcall minusClick(TObject *Sender);
        void __fastcall multiplyClick(TObject *Sender);
        void __fastcall divisionClick(TObject *Sender);
        void __fastcall equalClick(TObject *Sender);
        void __fastcall cClick(TObject *Sender);
        void __fastcall b10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
