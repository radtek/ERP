object FormaSpiskaTableExtPrintForm: TFormaSpiskaTableExtPrintForm
  Left = 97
  Top = 36
  Caption = #1042#1085#1077#1096#1085#1080#1077' '#1087#1077#1095#1072#1090#1085#1099#1077' '#1092#1086#1088#1084#1099
  ClientHeight = 518
  ClientWidth = 697
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Position = poScreenCenter
  Visible = True
  OnClose = FormClose
  PixelsPerInch = 120
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 697
    Height = 90
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alTop
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 0
    object HintLabel: TLabel
      Left = 10
      Top = 34
      Width = 58
      Height = 24
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Caption = #1058#1077#1082#1089#1090
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -18
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ToolBar1: TToolBar
      Left = 0
      Top = 0
      Width = 697
      Height = 29
      Caption = 'ToolBar1'
      EdgeBorders = [ebTop, ebBottom]
      Images = DM.ImageList1
      TabOrder = 0
      object ToolButton1: TToolButton
        Left = 0
        Top = 0
        Width = 8
        Caption = 'ToolButton1'
        Style = tbsSeparator
      end
      object ToolButtonNew: TToolButton
        Left = 8
        Top = 0
        Caption = 'ToolButtonNew'
        ImageIndex = 0
        OnClick = ToolButtonNewClick
      end
      object ToolButtonEdit: TToolButton
        Left = 31
        Top = 0
        Caption = 'ToolButtonEdit'
        ImageIndex = 1
        OnClick = ToolButtonEditClick
      end
      object ToolButtonDelete: TToolButton
        Left = 54
        Top = 0
        Caption = 'ToolButtonDelete'
        ImageIndex = 2
        OnClick = ToolButtonDeleteClick
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 90
    Width = 11
    Height = 352
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alLeft
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 1
  end
  object Panel3: TPanel
    Left = 679
    Top = 90
    Width = 18
    Height = 352
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alRight
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 2
  end
  object Panel4: TPanel
    Left = 0
    Top = 442
    Width = 697
    Height = 76
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alBottom
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 3
    object cxButtonClose: TcxButton
      Left = 587
      Top = 20
      Width = 92
      Height = 30
      Margins.Left = 4
      Margins.Top = 4
      Margins.Right = 4
      Margins.Bottom = 4
      Action = ActionClose
      TabOrder = 0
    end
  end
  object cxGrid1: TcxGrid
    Left = 11
    Top = 90
    Width = 668
    Height = 352
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Align = alClient
    TabOrder = 4
    object cxGrid1DBTableView1: TcxGridDBTableView
      OnDblClick = cxGrid1DBTableView1DblClick
      NavigatorButtons.ConfirmDelete = False
      DataController.Summary.DefaultGroupSummaryItems = <>
      DataController.Summary.FooterSummaryItems = <>
      DataController.Summary.SummaryGroups = <>
      OptionsBehavior.IncSearch = True
      OptionsData.CancelOnExit = False
      OptionsData.Deleting = False
      OptionsData.DeletingConfirmation = False
      OptionsData.Editing = False
      OptionsData.Inserting = False
      OptionsView.ColumnAutoWidth = True
      Styles.Header = DM.cxStyleHeaderTable
      object cxGrid1DBTableView1RECNO: TcxGridDBColumn
        Caption = #8470
        DataBinding.FieldName = 'RECNO'
        Options.Editing = False
        Styles.Header = DM.cxStyleHeaderTable
        Width = 28
      end
      object cxGrid1DBTableView1NAME_PROGRAM_MODULE: TcxGridDBColumn
        Caption = #1054#1073#1098#1077#1082#1090
        DataBinding.FieldName = 'NAME_PROGRAM_MODULE'
        Width = 100
      end
      object cxGrid1DBTableView1OBJECT_EXTPRINT_FORM: TcxGridDBColumn
        Caption = #1054#1073#1098#1077#1082#1090' ('#1085#1077' '#1080#1089#1087'.)'
        DataBinding.FieldName = 'OBJECT_EXTPRINT_FORM'
        Options.Editing = False
        Styles.Header = DM.cxStyleHeaderTable
        Width = 69
      end
      object cxGrid1DBTableView1NAME_EXTPRINT_FORM: TcxGridDBColumn
        Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
        DataBinding.FieldName = 'NAME_EXTPRINT_FORM'
        Options.Editing = False
        Styles.Header = DM.cxStyleHeaderTable
        Width = 223
      end
      object cxGrid1DBTableView1Column1: TcxGridDBColumn
        Caption = #1042' '#1092#1072#1081#1083#1077
        DataBinding.FieldName = 'RESIDENCE_EXTPRINT_FORM'
        Width = 30
      end
      object cxGrid1DBTableView1FILE_NAME_EXTPRINT_FORM: TcxGridDBColumn
        Caption = #1060#1072#1081#1083
        DataBinding.FieldName = 'FILE_NAME_EXTPRINT_FORM'
        Options.Editing = False
        Styles.Header = DM.cxStyleHeaderTable
        Width = 185
      end
      object cxGrid1DBTableView1ISPCONST_EXTPRINT_FORM: TcxGridDBColumn
        Caption = #1048#1089#1087'.'
        DataBinding.FieldName = 'ISPCONST_EXTPRINT_FORM'
        Options.Editing = False
        Styles.Header = DM.cxStyleHeaderTable
        Width = 31
      end
    end
    object cxGrid1Level1: TcxGridLevel
      GridView = cxGrid1DBTableView1
    end
  end
  object ActionList: TActionList
    Images = DM.ImageList1
    Left = 184
    Top = 40
    object ActionOpenHelp: TAction
      Caption = 'ActionOpenHelp'
      ShortCut = 112
    end
    object ActionClose: TAction
      Caption = #1047#1072#1082#1088#1099#1090#1100
      ImageIndex = 53
      OnExecute = ActionCloseExecute
    end
  end
end