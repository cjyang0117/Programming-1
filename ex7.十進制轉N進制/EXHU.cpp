//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXHU.h"
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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  int m,n,a,b;
  String s="";
  char c;
  m=Edi_InA->Text.ToInt();
  n=Edi_InB->Text.ToInt();
  b=n;
  while (b>=n){
    if (n<2|n>16){
      ShowMessage("請輸入2~16之間的數!");
      break;
    }
    a=m%n;
    b=m/n;
    m=b;
    if (a>=10){
      c='A'+(a-10);
      s=AnsiString(c)+s;
    }else{
      s=IntToStr(a)+s;;
    }
  }
  if (b>=10&&s!=""){
    c='A'+(b-10);
    s=AnsiString(c)+s;
  }else{
    if (s!="") s=IntToStr(b)+s;;
  }
  LaOut->Caption=s;
}
//---------------------------------------------------------------------------
