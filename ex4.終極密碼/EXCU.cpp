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
  SecBox=InputBox("終極爆爆樂","請輸入黃色區間的數~~~~~","0");
  if (StrToInt(SecBox)>Ans&&StrToInt(SecBox)>LaOut1->Caption.ToInt()&&StrToInt(SecBox)<LaOut2->Caption.ToInt()){
    LaOut2->Caption=SecBox;
    LaTimes->Caption=LaTimes->Caption.ToInt()+1;
    LaAns->Caption=LaAns->Caption+LaOut1->Caption+"到"+LaOut2->Caption+"加油加油"+"\n";
  }else{
    if (StrToInt(SecBox)<Ans&&StrToInt(SecBox)>LaOut1->Caption.ToInt()&&StrToInt(SecBox)<LaOut2->Caption.ToInt()){
      LaOut1->Caption=SecBox;
      LaTimes->Caption=LaTimes->Caption.ToInt()+1;
      LaAns->Caption=LaAns->Caption+LaOut1->Caption+"到"+LaOut2->Caption+"不會爆炸吧XD"+"\n";
    }else{
      if (StrToInt(SecBox)==Ans){
        LaTimes->Caption=LaTimes->Caption.ToInt()+1;
        LaAns->Caption=LaAns->Caption+"大爆炸啦!!!"+"\n";
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
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"笑你哈哈哈");
            break;
          case 2:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"嗚嗚嗚真可惜");
            break;
          case 3:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"爆炸啦碰碰碰");
            break;
          case 4:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"矮油這麼猛");
            break;
          case 5:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"夠持久!!");
            break;
          case 6:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"你們串通過吧!?");
            break;
          case 7:
            ShowMessage("遊戲次數"+LaTimes->Caption+"，"+"來亂的嗎?");
            break;
        }
      }else{
        ShowMessage("請輸入指定區間內的數字!");
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

