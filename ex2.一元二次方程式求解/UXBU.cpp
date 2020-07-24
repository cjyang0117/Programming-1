//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include<math.h>

#include "UXBU.h"
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

void __fastcall TForm1::ComputeClick(TObject *Sender)
{
  int D;
  float a,b,c,Ans1,Ans2,sqrt_D;
  a=StrToFloat(Inpute_a->Text);
  b=StrToFloat(Inpute_b->Text);
  c=StrToFloat(Inpute_c->Text);
  D=b*b-4*a*c;

  if (D==0){
    Ans1=-b/(2*a);
    LaOutput->Caption="���@���G����{��������"+FloatToStr(Ans1);
  }else{
    if (D>0){
      Ans1=(-b+sqrt(D))/(2*a);
      Ans2=(-b-sqrt(D))/(2*a);
      LaOutput->Caption="���@���G����{����"+FloatToStr(Ans1)+"�P"+FloatToStr(Ans2)+"����";
    }else{
      if (D<0){
        Ans1=(-b+sqrt(-D))/(2*a);
        Ans2=(-b-sqrt(-D))/(2*a);
        LaOutput->Caption="�L�ѡA���@���G����{����"+FloatToStr(Ans1)+"i"+"�P"+FloatToStr(Ans2)+"i"+"����";
      }
    }
  }
}
//---------------------------------------------------------------------------
