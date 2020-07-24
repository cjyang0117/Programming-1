//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXHU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String name[20],Data[20];
int grade_All[20],Number[20],order[20];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
  String LName[]={"趙","錢","孫","李","吳","王","馬","梁","周","陳","張","林"};
  String FName[]={"怡","君","家","豪","淑","芬","杰","倫","德","華","伊","林",
                  "志","玲","學","友"};
  String outs="";
  int grade_Pro,grade_Com,grade_Eco;
  for(int i=0;i<20;i++){
    Number[i]=i+1;
    grade_Pro=random(101);
    grade_Com=random(101);
    grade_Eco=random(101);
    grade_All[i]=grade_Pro+grade_Com+grade_Eco;
    name[i]=LName[random(12)]+FName[random(16)]+FName[random(16)];
    outs=outs+IntToStr(i+1)+"\t"+name[i]+"\t  "+IntToStr(grade_Pro)+"\t "+IntToStr(grade_Com)+"\t"+IntToStr(grade_Eco)+"\t"+IntToStr(grade_All[i])+"\n";
    Data[i]=IntToStr(Number[i])+"\t"+name[i]+"\t  "+IntToStr(grade_Pro)+"\t "+IntToStr(grade_Com)+"\t"+IntToStr(grade_Eco)+"\t"+IntToStr(grade_All[i]);
  }
  Label1->Caption=outs;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  for(int i=18;i>-1;i--){
    for(int j=0;j<=i;j++){
      if(grade_All[j]<grade_All[j+1]){
        String t=Data[j],e=name[j];
        int r=grade_All[j],q=Number[j];
        grade_All[j]=grade_All[j+1];
        grade_All[j+1]=r;
        Data[j]=Data[j+1];
        Data[j+1]=t;
        name[j]=name[j+1];
        name[j+1]=e;
        Number[j]=Number[j+1];
        Number[j+1]=q;
      }
    }
  }
  String s="";
  for (int i=0;i<20;i++){
    order[i]=i+1;
    Data[i]=Data[i]+"\t"+IntToStr(order[i]);
    s=s+Data[i]+"\n";
  }
  Label2->Caption=s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
  for(int i=0;i<19;i++){
    for(int j=i+1;j<20;j++){
      if(Number[j]<Number[i]){
        int t=Number[j],w=order[j],r=grade_All[j];
        String q=Data[j],e=name[j];
        Number[j]=Number[i];
        Number[i]=t;
        Data[j]=Data[i];
        Data[i]=q;
        order[j]=order[i];
        order[i]=w;
        name[j]=name[i];
        name[i]=e;
        grade_All[j]=grade_All[i];
        grade_All[i]=r;
      }
    }
  }
  String s="";
  for (int i=0;i<20;i++){
    s=s+Data[i]+"\n";
  }
  Label2->Caption=s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
  for(int i=0;i<20;i++) order[i]=1;
  for(int i=0;i<19;i++){
    for(int j=i+1;j<20;j++){
      if(grade_All[i]>grade_All[j]){
        order[j]++;
      }else{
        order[i]++;
      }
    }
  }
  String s="";
  for (int i=0;i<20;i++){
    s=s+Data[i]+"\t"+order[i]+"\n";
  }
  Label2->Caption=s;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  int i=0;
  while(i<20&&EdiName->Text!=name[i]) i++;
  if(i<20){
    ShowMessage(name[i]+"同學"+"\n總分\t"+IntToStr(grade_All[i])+"\n名次\t"+IntToStr(order[i]));
  }else{
    ShowMessage("查無此同學");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
  int max=19,min=0;
  while(max>=min){
    int m=(max+min)/2;
    if(order[m]>EdiOrder->Text.ToInt()){
      max=m-1;
    }else{
      if(order[m]<EdiOrder->Text.ToInt()){
        min=m+1;
      }else{
        ShowMessage(name[m]+"同學"+"\n總分\t"+IntToStr(grade_All[m])+"\n名次\t"+IntToStr(order[m]));
        break;
      }
      if(min>max) ShowMessage("查無此同學");
    }
  }
}
//---------------------------------------------------------------------------

