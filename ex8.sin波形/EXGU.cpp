//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXGU.h"
#include <math.h>
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


void __fastcall TForm1::ButExeClick(TObject *Sender)
{
  int i,j,k,y2=0,x=1;
  float y1=0;
  String s="";
  i=Edi_i->Text.ToInt();
  j=Edi_j->Text.ToInt();
  k=Edi_k->Text.ToInt();
  for (int m=1;m<=k;m++){
    x=1;
    for (int n=1;n<=(i-1)/k;n++){
      if (y2>=0){
        for (int o=1;o<=y2+20;o++){
          s=s+" ";
        }
      }else{
        for (int o=1;o<=j-(-y2);o++){
          s=s+" ";
        }
      }
    y1=sin((6.28/((i-1)/k)*x))*j;
    y2=y1/1;
    x++;
    s=s+"*"+"\n";
    }
  }
  LaOutput->Caption=s;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormCreate(TObject *Sender)
{
  LaNote->Caption="若i,j,k比例不當波型會很奇怪\n建議範例\ni=200 j=20 k=5\n或\ni=20 j=20 k=1";
}
//---------------------------------------------------------------------------

