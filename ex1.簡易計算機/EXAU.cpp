//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXAU.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int a=0,v;  //b,x代表運算中兩邊的值 EX: b+x
float b,x;
TForm1 *Form1;  //v代表四個運算符號 v=1加法 v=2減法 v=3乘法 v=4除法
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b0Click(TObject *Sender)
{
  if (a==0)    //宣告a的目的是為了讓一開始的0取消，否則輸出會變成,例如"015"
  {
	la->Caption=0;
	lb->Caption=0;
  }
  else
  {
	la->Caption=la->Caption+0;
	lb->Caption=lb->Caption+0;
        a=1;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b1Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=1;
	lb->Caption=1;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+1;
	lb->Caption=lb->Caption+1;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b2Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=2;
	lb->Caption=2;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+2;
	lb->Caption=lb->Caption+2;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b3Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=3;
	lb->Caption=3;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+3;
	lb->Caption=lb->Caption+3;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b4Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=4;
	lb->Caption=4;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+4;
	lb->Caption=lb->Caption+4;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b5Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=5;
	lb->Caption=5;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+5;
	lb->Caption=lb->Caption+5;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b6Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=6;
	lb->Caption=6;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+6;
	lb->Caption=lb->Caption+6;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b7Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=7;
	lb->Caption=7;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+7;
	lb->Caption=lb->Caption+7;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b8Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=8;
	lb->Caption=8;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+8;
	lb->Caption=lb->Caption+8;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b9Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=9;
	lb->Caption=9;
	a=1;
  }
  else
  {
	la->Caption=la->Caption+9;
	lb->Caption=lb->Caption+9;
        a=1;
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addClick(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=0;
  }
  else
  {
	if (v!=1&v!=2&v!=3&v!=4)
	{
	  lb->Caption=la->Caption;
	  la->Caption=la->Caption+"+";
	  b=StrToFloat(lb->Caption);
	  lb->Caption="";
	  v=1;
          a=2;
	}
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::minusClick(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=0;
  }
  else
  {
	if (v!=1&v!=2&v!=3&v!=4)
	{
	  lb->Caption=la->Caption;
	  la->Caption=la->Caption+"-";
	  b=StrToFloat(lb->Caption);
	  lb->Caption="";
	  v=2;
          a=2;
    }
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::multiplyClick(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=0;
  }
  else
  {
	if (v!=1&v!=2&v!=3&v!=4)
	{
	  lb->Caption=la->Caption;
	  la->Caption=la->Caption+"*";
	  b=StrToFloat(lb->Caption);
	  lb->Caption="";
	  v=3;
          a=2;
	}
  }        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::divisionClick(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=0;
  }
  else
  {
	if (v!=1&v!=2&v!=3&v!=4)
	{
	  lb->Caption=la->Caption;
	  la->Caption=la->Caption+"/";
	  b=StrToFloat(lb->Caption);
	  lb->Caption="";
	  v=4;
          a=2;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::equalClick(TObject *Sender)
{
  if (v==1&a==1)
  {
	x=StrToFloat(lb->Caption);
	la->Caption=b+x;
	v=0;
  }
  if (v==2&a==1)
  {
	x=StrToFloat(lb->Caption);
	la->Caption=b-x;
	v=0;
  }
  if (v==3&a==1)
  {
	x=StrToFloat(lb->Caption);
	la->Caption=b*x;
	v=0;
  }
  if (v==4&a==1)
  {
	x=StrToFloat(lb->Caption);
	la->Caption=b/x;
	v=0;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::cClick(TObject *Sender)
{
  a=0;
  v=0;
  la->Caption=0;
  lb->Caption="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::b10Click(TObject *Sender)
{
  if (a==0)
  {
	la->Caption=0;
	lb->Caption=0;
  }
  else
  {
        if (a==1)
        {
	  la->Caption=la->Caption+".";
	  lb->Caption=lb->Caption+".";
        }
  }
}
//---------------------------------------------------------------------------

