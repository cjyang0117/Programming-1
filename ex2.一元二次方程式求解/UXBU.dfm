object Form1: TForm1
  Left = 221
  Top = 198
  Width = 1230
  Height = 324
  Caption = #19968#20803#20108#27425#26041#31243#24335#27714#35299
  Color = clBtnFace
  Font.Charset = BALTIC_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 14
  object Label1: TLabel
    Left = 152
    Top = 112
    Width = 18
    Height = 45
    Caption = 'x'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 176
    Top = 112
    Width = 11
    Height = 23
    Caption = '2'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 192
    Top = 120
    Width = 16
    Height = 32
    Caption = '+'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 248
    Top = 112
    Width = 18
    Height = 45
    Caption = 'x'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 272
    Top = 120
    Width = 16
    Height = 32
    Caption = '+'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 336
    Top = 120
    Width = 16
    Height = 32
    Caption = '='
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 360
    Top = 120
    Width = 15
    Height = 32
    Caption = '0'
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object LaOutput: TLabel
    Left = 544
    Top = 72
    Width = 617
    Height = 161
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Inpute_a: TEdit
    Left = 120
    Top = 120
    Width = 33
    Height = 33
    AutoSize = False
    BiDiMode = bdLeftToRight
    Color = clHighlight
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentBiDiMode = False
    ParentFont = False
    TabOrder = 0
  end
  object Inpute_b: TEdit
    Left = 216
    Top = 120
    Width = 33
    Height = 33
    AutoSize = False
    Color = clHighlight
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Inpute_c: TEdit
    Left = 296
    Top = 120
    Width = 33
    Height = 33
    AutoSize = False
    Color = clHighlight
    Font.Charset = BALTIC_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Compute: TButton
    Left = 416
    Top = 96
    Width = 89
    Height = 89
    Caption = '->'
    Font.Charset = MAC_CHARSET
    Font.Color = clRed
    Font.Height = -40
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = ComputeClick
  end
end
