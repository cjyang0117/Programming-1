//---------------------------------------------------------------------------

#ifndef EXHUH
#define EXHUH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TLabel *LaOutput;
        TButton *ButPro;
        TButton *ButCom;
        TButton *ButEco;
        TButton *ButSearch;
        TEdit *EdiInput;
        TLabel *Label4;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ButProClick(TObject *Sender);
        void __fastcall ButComClick(TObject *Sender);
        void __fastcall ButEcoClick(TObject *Sender);
        void __fastcall ButSearchClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
