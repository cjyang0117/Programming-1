//---------------------------------------------------------------------------

#ifndef EXCUH
#define EXCUH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *BuPlay;
        TButton *BuSec;
        TLabel *LaTimes;
        TLabel *LaOut1;
        TLabel *LaOut2;
        TLabel *Label3;
        TLabel *LaAns;
        TLabel *Label5;
        void __fastcall BuSecClick(TObject *Sender);
        void __fastcall BuPlayClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
