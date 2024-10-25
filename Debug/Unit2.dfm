object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 770
  ClientWidth = 1137
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Generate: TButton
    Left = 368
    Top = 89
    Width = 329
    Height = 177
    Caption = 'Generate Sudoko'
    TabOrder = 0
    OnClick = btnGenerateClick
  end
  object Solve: TButton
    Left = 368
    Top = 312
    Width = 329
    Height = 169
    Caption = 'Solve Sudoko'
    TabOrder = 1
    OnClick = btnSolveClick
  end
end
