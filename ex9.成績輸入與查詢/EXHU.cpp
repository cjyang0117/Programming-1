//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXHU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int Programming[100],Computer[100],Economic[100],number=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
  int grade_Pro,grade_Com,grade_Eco;
  do{
    grade_Pro=StrToInt(InputBox ("���Z��J","�п�J"+IntToStr(number+1)+"���P�ǵ{�]���Z","-1"));
    grade_Com=StrToInt(InputBox ("���Z��J","�п�J"+IntToStr(number+1)+"���P�ǭp�����Z","-1"));
    grade_Eco=StrToInt(InputBox ("���Z��J","�п�J"+IntToStr(number+1)+"���P�Ǹg�٦��Z","-1"));
    if (grade_Pro>=0&&grade_Com>=0&&grade_Eco>=0){
      Programming[number]=grade_Pro;
      Computer[number]=grade_Com;
      Economic[number]=grade_Eco;
      number++;
    }
  }while(grade_Pro>=0&&grade_Com>=0&&grade_Eco>=0);
  String s="";
  int grade;
  for (int i=0;i<=number-1;i++){
    grade=Programming[i]+Computer[i]+Economic[i];
    s=s+IntToStr(i+1)+"��"+"\t\t"+IntToStr(grade)+"\t\t"+IntToStr(grade/3)+"\n";
  }
  LaOutput->Caption=s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButProClick(TObject *Sender)
{
  int grade=0,x=0;
  for (int j=0;j<=number-1;j++){
    grade=grade+Programming[j];
  }
  grade=grade/number;
  for (int k=0;k<=number-1;k++){
    if (Programming[k]>grade) x++;
  }
  ShowMessage ("�{�]�������Ƭ�"+IntToStr(grade)+"�A��"+IntToStr(x)+"�H���󥭧�");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButComClick(TObject *Sender)
{
  int grade=0,x=0;
  for (int j=0;j<=number-1;j++){
    grade=grade+Computer[j];
  }
  grade=grade/number;
  for (int k=0;k<=number-1;k++){
    if (Computer[k]>grade) x++;
  }
  ShowMessage ("�p���������Ƭ�"+IntToStr(grade)+"�A��"+IntToStr(x)+"�H���󥭧�");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButEcoClick(TObject *Sender)
{
  int grade=0,x=0;
  for (int j=0;j<=number-1;j++){
    grade=grade+Economic[j];
  }
  grade=grade/number;
  for (int k=0;k<=number-1;k++){
    if (Economic[k]>grade) x++;
  }
  ShowMessage ("�g�٥������Ƭ�"+IntToStr(grade)+"�A��"+IntToStr(x)+"�H���󥭧�");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButSearchClick(TObject *Sender)
{
  int number,Total;
  number=EdiInput->Text.ToInt();
  Total=Programming[number-1]+Computer[number-1]+Economic[number-1];
  ShowMessage (IntToStr(number)+"���P��\n�{�]\t"+Programming[number-1]+"\n�p��\t"+Computer[number-1]+"\n�g��\t"+Economic[number-1]+"\n�`��\t"+IntToStr(Total));
}
//---------------------------------------------------------------------------

