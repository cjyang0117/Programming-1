//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXCU.h"
#include <stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int Ans;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BuSecClick(TObject *Sender)
{
  String SecBox;
  SecBox=InputBox("�׷��z�z��","�п�J����϶�����~~~~~","0");
  if (StrToInt(SecBox)>Ans&&StrToInt(SecBox)>LaOut1->Caption.ToInt()&&StrToInt(SecBox)<LaOut2->Caption.ToInt()){
    LaOut2->Caption=SecBox;
    LaTimes->Caption=LaTimes->Caption.ToInt()+1;
    LaAns->Caption=LaAns->Caption+LaOut1->Caption+"��"+LaOut2->Caption+"�[�o�[�o"+"\n";
  }else{
    if (StrToInt(SecBox)<Ans&&StrToInt(SecBox)>LaOut1->Caption.ToInt()&&StrToInt(SecBox)<LaOut2->Caption.ToInt()){
      LaOut1->Caption=SecBox;
      LaTimes->Caption=LaTimes->Caption.ToInt()+1;
      LaAns->Caption=LaAns->Caption+LaOut1->Caption+"��"+LaOut2->Caption+"���|�z���aXD"+"\n";
    }else{
      if (StrToInt(SecBox)==Ans){
        LaTimes->Caption=LaTimes->Caption.ToInt()+1;
        LaAns->Caption=LaAns->Caption+"�j�z����!!!"+"\n";
        int Comment;
        if (LaTimes->Caption.ToInt()<=2){
          Comment=1;
        }else{
          if (LaTimes->Caption.ToInt()<=5){
            Comment=2;
          }else{
            if (LaTimes->Caption.ToInt()<=8){
              Comment=3;
            }else{
              if (LaTimes->Caption.ToInt()<=29){
                Comment=4;
              }else{
                if (LaTimes->Caption.ToInt()<=79){
                  Comment=5;
                }else{
                  if (LaTimes->Caption.ToInt()<=99){
                    Comment=6;
                  }else{
                    if (LaTimes->Caption.ToInt()>99){
                      Comment=7;
                    }
                  }
                }
              }
            }
          }
        }
        switch (Comment){
          case 1:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"���A������");
            break;
          case 2:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"����u�i��");
            break;
          case 3:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"�z���ոI�I�I");
            break;
          case 4:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"�G�o�o��r");
            break;
          case 5:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"�����[!!");
            break;
          case 6:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"�A�̦�q�L�a!?");
            break;
          case 7:
            ShowMessage("�C������"+LaTimes->Caption+"�A"+"�Ӷê���?");
            break;
        }
      }else{
        ShowMessage("�п�J���w�϶������Ʀr!");
      }
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BuPlayClick(TObject *Sender)
{
  LaTimes->Caption="0";
  LaOut1->Caption="0";
  LaOut2->Caption="100";
  LaAns->Caption="";
  Ans=random(101);
  BuSec->Hint=IntToStr(Ans);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
  Ans=random(101);
  BuSec->Hint=IntToStr(Ans);        
}
//---------------------------------------------------------------------------

