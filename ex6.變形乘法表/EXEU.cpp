//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXEU.h"
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
  int m,n,c,x=2,z=1,y,k=2;
  String s="";
  m=Edit1->Text.ToInt();
  n=Edit2->Text.ToInt();
  for(z=1;z<m;z++){
    y=z*n;
    if(y>=(m-1)  ) break;
  }//for(z=1;z<m;z++)
  for(int i=1;i<=z;i++){
    for(int b=1;b<=m;b++){
      for(int a=x;a<=k+(n-1);a++){
        if (a==m+1) break;
        c=a*b;
        s=s+IntToStr(a)+"x"+IntToStr(b)+"="+IntToStr(c)+"\t"+"\t"+"\t";
      }//for(int a=x;a<=k+(n-1);a++)
      s=s+"\n";
    }//for(int b=1;b<=m;b++)
    x=x+n;
    k=x;
    s=s+"\n"+"\n";
  }//for(int i=1;i<=z;i++)
  Label1->Caption=s;

}
//---------------------------------------------------------------------------
 