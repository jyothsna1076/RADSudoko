object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 810
  ClientWidth = 1103
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object backtracking: TButton
    Left = 448
    Top = 80
    Width = 209
    Height = 105
    Caption = 'backtracking'
    TabOrder = 0
    OnClick = backtrackingClick
  end
  object mrvhash: TButton
    Left = 448
    Top = 215
    Width = 209
    Height = 106
    Caption = 'mrvhash'
    TabOrder = 1
    OnClick = mrvhashClick
  end
  object AStar: TButton
    Left = 448
    Top = 344
    Width = 209
    Height = 97
    Caption = 'AStar'
    TabOrder = 2
    OnClick = AStarClick
  end
  object bfs: TButton
    Left = 448
    Top = 480
    Width = 209
    Height = 89
    Caption = 'bfs'
    TabOrder = 3
    OnClick = bfsClick
  end
end
