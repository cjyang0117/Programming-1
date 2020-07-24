object Form1: TForm1
  Left = 224
  Top = 444
  Width = 287
  Height = 426
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object la: TLabel
    Left = 24
    Top = 48
    Width = 217
    Height = 25
    Alignment = taRightJustify
    AutoSize = False
    Caption = '0'
    Color = clGradientActiveCaption
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object lb: TLabel
    Left = 16
    Top = 0
    Width = 65
    Height = 25
    AutoSize = False
    Visible = False
  end
  object c: TButton
    Left = 40
    Top = 104
    Width = 49
    Height = 49
    Caption = 'c'
    TabOrder = 0
    OnClick = cClick
  end
  object division: TButton
    Left = 88
    Top = 104
    Width = 49
    Height = 49
    Caption = '/'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = divisionClick
  end
  object multiply: TButton
    Left = 136
    Top = 104
    Width = 49
    Height = 49
    Caption = '*'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = multiplyClick
  end
  object b7: TButton
    Left = 40
    Top = 152
    Width = 49
    Height = 49
    Caption = '7'
    TabOrder = 3
    OnClick = b7Click
  end
  object b8: TButton
    Left = 88
    Top = 152
    Width = 49
    Height = 49
    Caption = '8'
    TabOrder = 4
    OnClick = b8Click
  end
  object b9: TButton
    Left = 136
    Top = 152
    Width = 49
    Height = 49
    Caption = '9'
    TabOrder = 5
    OnClick = b9Click
  end
  object b4: TButton
    Left = 40
    Top = 200
    Width = 49
    Height = 49
    Caption = '4'
    TabOrder = 6
    OnClick = b4Click
  end
  object b5: TButton
    Left = 88
    Top = 200
    Width = 49
    Height = 49
    Caption = '5'
    TabOrder = 7
    OnClick = b5Click
  end
  object b6: TButton
    Left = 136
    Top = 200
    Width = 49
    Height = 49
    Caption = '6'
    TabOrder = 8
    OnClick = b6Click
  end
  object b1: TButton
    Left = 40
    Top = 248
    Width = 49
    Height = 49
    Caption = '1'
    TabOrder = 9
    OnClick = b1Click
  end
  object b2: TButton
    Left = 88
    Top = 248
    Width = 49
    Height = 49
    Caption = '2'
    TabOrder = 10
    OnClick = b2Click
  end
  object b3: TButton
    Left = 136
    Top = 248
    Width = 49
    Height = 49
    Caption = '3'
    TabOrder = 11
    OnClick = b3Click
  end
  object b0: TButton
    Left = 40
    Top = 296
    Width = 97
    Height = 49
    Caption = '0'
    TabOrder = 12
    OnClick = b0Click
  end
  object b10: TButton
    Left = 136
    Top = 296
    Width = 49
    Height = 49
    Caption = '.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    OnClick = b10Click
  end
  object add: TButton
    Left = 184
    Top = 152
    Width = 49
    Height = 97
    Caption = '+'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    OnClick = addClick
  end
  object equal: TButton
    Left = 184
    Top = 248
    Width = 49
    Height = 97
    Caption = '='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
    OnClick = equalClick
  end
  object minus: TButton
    Left = 184
    Top = 104
    Width = 49
    Height = 49
    Caption = '-'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
    OnClick = minusClick
  end
end
