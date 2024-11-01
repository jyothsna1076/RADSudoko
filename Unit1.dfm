object Form1: TForm1
  Left = 0
  Top = 0
  BorderWidth = 5
  Caption = 'Form1'
  ClientHeight = 730
  ClientWidth = 1086
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Visible = True
  OnClick = SolveButtonClick
  TextHeight = 15
  object StringGrid1: TStringGrid
    Left = 376
    Top = 96
    Width = 345
    Height = 337
    ColCount = 9
    FixedCols = 0
    RowCount = 9
    FixedRows = 0
    GridLineWidth = 5
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 0
    OnClick = StringGrid1Click
  end
  object SolveButton: TButton
    Left = 512
    Top = 472
    Width = 75
    Height = 25
    Caption = 'Solve'
    TabOrder = 1
    OnClick = SolveButtonClick
  end
end
