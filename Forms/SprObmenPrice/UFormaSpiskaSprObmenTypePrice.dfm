object FormaSpiskaSprObmenTypePrice: TFormaSpiskaSprObmenTypePrice
  Left = 302
  Top = 126
  Caption = #1057#1087#1080#1089#1086#1082' '#1090#1080#1087#1086#1074' '#1094#1077#1085' '#1076#1083#1103' '#1086#1073#1084#1077#1085#1072
  ClientHeight = 345
  ClientWidth = 463
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Position = poScreenCenter
  Visible = True
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 463
    Height = 49
    Align = alTop
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 1
    object HintLabel: TLabel
      Left = 8
      Top = 28
      Width = 44
      Height = 16
      Caption = #1058#1077#1082#1089#1090
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object ToolBar1: TToolBar
      Left = 0
      Top = 0
      Width = 463
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
      object ToolButton4: TToolButton
        Left = 77
        Top = 0
        Width = 35
        Caption = 'ToolButton4'
        ImageIndex = 6
        Style = tbsSeparator
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 49
    Width = 9
    Height = 250
    Align = alLeft
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 2
  end
  object Panel3: TPanel
    Left = 0
    Top = 299
    Width = 463
    Height = 46
    Align = alBottom
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 3
    object cxButtonOK: TcxButton
      Left = 293
      Top = 14
      Width = 75
      Height = 25
      Caption = 'OK'
      TabOrder = 0
      OnClick = cxButtonOKClick
    end
    object cxButtonClose: TcxButton
      Left = 374
      Top = 14
      Width = 75
      Height = 25
      Caption = #1047#1072#1082#1088#1099#1090#1100
      TabOrder = 1
      OnClick = cxButtonCloseClick
    end
  end
  object Panel4: TPanel
    Left = 449
    Top = 49
    Width = 14
    Height = 250
    Align = alRight
    BevelOuter = bvNone
    Caption = ' '
    TabOrder = 4
  end
  object cxGrid1: TcxGrid
    Left = 9
    Top = 49
    Width = 440
    Height = 250
    Align = alClient
    TabOrder = 0
    object cxGrid1DBTableView1: TcxGridDBTableView
      NavigatorButtons.ConfirmDelete = False
      DataController.DataSource = DMSprObmenTypePrice.DataSourceTable
      DataController.Summary.DefaultGroupSummaryItems = <>
      DataController.Summary.FooterSummaryItems = <>
      DataController.Summary.SummaryGroups = <>
      OptionsBehavior.IncSearch = True
      OptionsView.ColumnAutoWidth = True
      OptionsView.GroupByBox = False
      object cxGrid1DBTableView1RECNO: TcxGridDBColumn
        Caption = #8470
        DataBinding.FieldName = 'RECNO'
        Styles.Header = DM.cxStyleHeaderTable
      end
      object cxGrid1DBTableView1NAME_TPRICE: TcxGridDBColumn
        Caption = #1058#1080#1087' '#1094#1077#1085
        DataBinding.FieldName = 'NAME_TPRICE'
        PropertiesClassName = 'TcxButtonEditProperties'
        Properties.Buttons = <
          item
            Default = True
            Kind = bkEllipsis
          end>
        Properties.ReadOnly = True
        Properties.OnButtonClick = cxGrid1DBTableView1NAME_TPRICEPropertiesButtonClick
        Styles.Header = DM.cxStyleHeaderTable
      end
    end
    object cxGrid1Level1: TcxGridLevel
      GridView = cxGrid1DBTableView1
    end
  end
  object ActionList: TActionList
    Left = 184
    Top = 40
    object ActionOpenHelp: TAction
      Caption = 'ActionOpenHelp'
      ShortCut = 112
      OnExecute = ActionOpenHelpExecute
    end
  end
end
