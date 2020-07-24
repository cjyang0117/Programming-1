//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXDU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
  String s="";
  int n;
  char c;
  n=Edit1->Text.ToInt();
  for(int i=1;2*i-2<=2*n-2;i++){
    if (i!=1){
      for(int a=1;a<i;a++){
        s=s+"*";
      }//for(int a=1;a<i;a++)
    }//if (i!=1)
    for(int j=2*n-2;j>=2*i-2;j--){
      c='A'+j;
      s=s+AnsiString(c);
    }//for(int j=2*n-2;j>=2*i-2;j--)
    if (i!=1){
      for(int a=1;a<i;a++){
        s=s+"*";
      }//for(int a=1;a<i;a++)
    }//if (i!=1)
    s=s+"\n";
  }//for(int i=1;2*i-2<=2*n-2;i++)
  Label1->Caption=s;
}
//---------------------------------------------------------------------------
