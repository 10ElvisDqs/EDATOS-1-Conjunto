object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Vector'
  ClientHeight = 289
  ClientWidth = 960
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 104
    Top = 21
    Width = 58
    Height = 16
    Caption = 'Vector A'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
  end
  object Resultado: TLabel
    Left = 120
    Top = 117
    Width = 65
    Height = 16
    Caption = 'Resultado'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 305
    Top = 90
    Width = 59
    Height = 16
    Caption = 'Elemento'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 311
    Top = 117
    Width = 52
    Height = 16
    Caption = 'Posici'#243'n'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 530
    Top = 21
    Width = 56
    Height = 16
    Caption = 'Vector B'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
  end
  object SGVector: TStringGrid
    Left = 104
    Top = 43
    Width = 385
    Height = 41
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ParentFont = False
    TabOrder = 0
  end
  object Button1: TButton
    Left = 104
    Top = 87
    Width = 94
    Height = 25
    Caption = 'Dimensionar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 1
    OnClick = Button1Click
  end
  object EDimensión: TEdit
    Left = 204
    Top = 87
    Width = 56
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 2
  end
  object EResultado: TEdit
    Left = 204
    Top = 114
    Width = 56
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 3
  end
  object EElemento: TEdit
    Left = 368
    Top = 87
    Width = 57
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 4
  end
  object EPosicion: TEdit
    Left = 368
    Top = 114
    Width = 57
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    TabOrder = 5
  end
  object SGVecB: TStringGrid
    Left = 528
    Top = 43
    Width = 385
    Height = 41
    ColCount = 1
    DefaultColWidth = 30
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold, fsUnderline]
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    ParentFont = False
    TabOrder = 6
  end
  object MainMenu1: TMainMenu
    Left = 8
    object Funciones1: TMenuItem
      Caption = 'Funciones'
      object ContarElemento1: TMenuItem
        Caption = 'Contar Elemento'
        OnClick = ContarElemento1Click
      end
      object Busquedas1: TMenuItem
        Caption = 'Busquedas'
        object BsquedaSecuencial1: TMenuItem
          Caption = 'Secuencial'
          OnClick = BsquedaSecuencial1Click
        end
        object Binaria1: TMenuItem
          Caption = 'Binaria'
          OnClick = Binaria1Click
        end
      end
    end
    object Procedimientos1: TMenuItem
      Caption = 'Procedimientos'
      object EliminarElempos1: TMenuItem
        Caption = 'Eliminar Elem pos'
        OnClick = EliminarElempos1Click
      end
      object LlenarVector1: TMenuItem
        Caption = 'Llenar Vector'
        OnClick = LlenarVector1Click
      end
      object DibujarVector1: TMenuItem
        Caption = 'Dibujar Vector'
        OnClick = DibujarVector1Click
      end
      object Ordenar1: TMenuItem
        Caption = 'Ordenar'
        object Intercambio1: TMenuItem
          Caption = 'Intercambio'
          OnClick = Intercambio1Click
        end
        object Burbuja1: TMenuItem
          Caption = 'Burbuja'
          OnClick = Burbuja1Click
        end
        object Seleccin1: TMenuItem
          Caption = 'Selecci'#243'n'
          OnClick = Seleccin1Click
        end
      end
      object LlenarVectorB1: TMenuItem
        Caption = 'Llenar Vector B'
        OnClick = LlenarVectorB1Click
      end
    end
  end
end
