object Form1: TForm1
  Left = 303
  Top = 182
  Width = 790
  Height = 551
  Caption = #32066#26997#23494#30908
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  ShowHint = True
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object LaTimes: TLabel
    Left = 192
    Top = 112
    Width = 35
    Height = 80
    Caption = '0'
    Color = clFuchsia
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -67
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object LaOut1: TLabel
    Left = 80
    Top = 312
    Width = 35
    Height = 80
    Caption = '0'
    Color = clYellow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -67
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object LaOut2: TLabel
    Left = 280
    Top = 312
    Width = 105
    Height = 80
    Caption = '100'
    Color = clYellow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -67
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label3: TLabel
    Left = 184
    Top = 336
    Width = 45
    Height = 41
    AutoSize = False
    Caption = '~'
    Color = clYellow
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -67
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object LaAns: TLabel
    Left = 464
    Top = 64
    Width = 225
    Height = 409
    AutoSize = False
    Color = clAqua
    Font.Charset = CHINESEBIG5_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = #27161#26999#39636
    Font.Style = []
    ParentColor = False
    ParentFont = False
    WordWrap = True
  end
  object Label5: TLabel
    Left = 464
    Top = 32
    Width = 112
    Height = 27
    Caption = #36938#25138#32000#37636
    Font.Charset = CHINESEBIG5_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = #27161#26999#39636
    Font.Style = []
    ParentFont = False
  end
  object BuPlay: TButton
    Left = 112
    Top = 232
    Width = 97
    Height = 57
    Caption = '&New game'
    TabOrder = 0
    OnClick = BuPlayClick
  end
  object BuSec: TButton
    Left = 208
    Top = 232
    Width = 97
    Height = 57
    Caption = '&Secrete'
    TabOrder = 1
    OnClick = BuSecClick
  end
end
