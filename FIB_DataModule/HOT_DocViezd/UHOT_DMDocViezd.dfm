object HOT_DMDocViezd: THOT_DMDocViezd
  OldCreateOrder = False
  OnDestroy = DataModuleDestroy
  Height = 270
  Width = 450
  object DataSourceDoc: TDataSource
    DataSet = Doc
    Left = 72
    Top = 72
  end
  object DataSourceDocAll: TDataSource
    DataSet = DocAll
    Left = 72
    Top = 16
  end
  object DocAll: TpFIBDataSet
    CachedUpdates = True
    UpdateSQL.Strings = (
      'UPDATE HOT_GALLDOC'
      'SET '
      '    GID_HOT_GALLDOC = :GID_HOT_GALLDOC,'
      '    POS_HOT_GALLDOC = :POS_HOT_GALLDOC,'
      '    PR_HOT_GALLDOC = :PR_HOT_GALLDOC,'
      '    TDOC_HOT_GALLDOC = :TDOC_HOT_GALLDOC,'
      '    PREFIKS_HOT_GALLDOC = :PREFIKS_HOT_GALLDOC,'
      '    IDFIRM_HOT_GALLDOC = :IDFIRM_HOT_GALLDOC,'
      '    IDKL_HOT_GALLDOC = :IDKL_HOT_GALLDOC,'
      '    SUM_HOT_GALLDOC = :SUM_HOT_GALLDOC,'
      '    IDUSER_HOT_GALLDOC = :IDUSER_HOT_GALLDOC,'
      '    IDDOCOSN_HOT_GALLDOC = :IDDOCOSN_HOT_GALLDOC,'
      '    NUMBER_HOT_GALLDOC = :NUMBER_HOT_GALLDOC,'
      '    IDSKLAD_HOT_GALLDOC = :IDSKLAD_HOT_GALLDOC,'
      '    IDBASE_HOT_GALLDOC = :IDBASE_HOT_GALLDOC'
      'WHERE'
      '    ID_HOT_GALLDOC = :OLD_ID_HOT_GALLDOC'
      '    ')
    DeleteSQL.Strings = (
      'DELETE FROM'
      '    HOT_GALLDOC'
      'WHERE'
      '        ID_HOT_GALLDOC = :OLD_ID_HOT_GALLDOC'
      '    ')
    InsertSQL.Strings = (
      'INSERT INTO HOT_GALLDOC('
      '    ID_HOT_GALLDOC,'
      '    GID_HOT_GALLDOC,'
      '    POS_HOT_GALLDOC,'
      '    PR_HOT_GALLDOC,'
      '    TDOC_HOT_GALLDOC,'
      '    PREFIKS_HOT_GALLDOC,'
      '    IDFIRM_HOT_GALLDOC,'
      '    IDKL_HOT_GALLDOC,'
      '    SUM_HOT_GALLDOC,'
      '    IDUSER_HOT_GALLDOC,'
      '    IDDOCOSN_HOT_GALLDOC,'
      '    NUMBER_HOT_GALLDOC,'
      '    IDSKLAD_HOT_GALLDOC,'
      '    IDBASE_HOT_GALLDOC'
      ')'
      'VALUES('
      '    :ID_HOT_GALLDOC,'
      '    :GID_HOT_GALLDOC,'
      '    :POS_HOT_GALLDOC,'
      '    :PR_HOT_GALLDOC,'
      '    :TDOC_HOT_GALLDOC,'
      '    :PREFIKS_HOT_GALLDOC,'
      '    :IDFIRM_HOT_GALLDOC,'
      '    :IDKL_HOT_GALLDOC,'
      '    :SUM_HOT_GALLDOC,'
      '    :IDUSER_HOT_GALLDOC,'
      '    :IDDOCOSN_HOT_GALLDOC,'
      '    :NUMBER_HOT_GALLDOC,'
      '    :IDSKLAD_HOT_GALLDOC,'
      '    :IDBASE_HOT_GALLDOC'
      ')')
    RefreshSQL.Strings = (
      
        'select HOT_GALLDOC.*, FNAME_USER , NAME_SINFBASE_OBMEN, NAMEFIRM' +
        ', NAMEKLIENT'
      'from HOT_GALLDOC'
      'left outer join SUSER on IDUSER_HOT_GALLDOC=ID_USER'
      
        'left outer join SINFBASE_OBMEN on PREFIKS_SINFBASE_OBMEN=PREFIKS' +
        '_HOT_GALLDOC'
      'left outer join SFIRM on IDFIRM_HOT_GALLDOC=IDFIRM'
      'left outer join SKLIENT on IDKL_HOT_GALLDOC=IDKLIENT'
      'where(  ID_HOT_GALLDOC=:PARAM_ID'
      
        '     ) and (     HOT_GALLDOC.ID_HOT_GALLDOC = :OLD_ID_HOT_GALLDO' +
        'C'
      '     )'
      '     ')
    SelectSQL.Strings = (
      
        'select HOT_GALLDOC.*, FNAME_USER , NAME_SINFBASE_OBMEN, NAMEFIRM' +
        ', NAMEKLIENT'
      'from HOT_GALLDOC'
      'left outer join SUSER on IDUSER_HOT_GALLDOC=ID_USER'
      
        'left outer join SINFBASE_OBMEN on PREFIKS_SINFBASE_OBMEN=PREFIKS' +
        '_HOT_GALLDOC'
      'left outer join SFIRM on IDFIRM_HOT_GALLDOC=IDFIRM'
      'left outer join SKLIENT on IDKL_HOT_GALLDOC=IDKLIENT'
      'where ID_HOT_GALLDOC=:PARAM_ID ')
    AutoUpdateOptions.UpdateTableName = 'HOT_GALLDOC'
    AutoUpdateOptions.KeyFields = 'ID_HOT_GALLDOC'
    AutoUpdateOptions.GeneratorName = 'GEN_HOT_GALLDOC_ID'
    AutoUpdateOptions.WhenGetGenID = wgOnNewRecord
    Transaction = IBTr
    UpdateTransaction = IBTrUpdate
    Left = 168
    Top = 16
    poUseLargeIntField = True
    object DocAllPOS_HOT_GALLDOC: TFIBDateTimeField
      FieldName = 'POS_HOT_GALLDOC'
      DisplayFormat = 'c'
    end
    object DocAllPR_HOT_GALLDOC: TFIBSmallIntField
      FieldName = 'PR_HOT_GALLDOC'
    end
    object DocAllSUM_HOT_GALLDOC: TFIBBCDField
      FieldName = 'SUM_HOT_GALLDOC'
      Size = 2
      RoundByScale = True
    end
    object DocAllNUMBER_HOT_GALLDOC: TFIBIntegerField
      FieldName = 'NUMBER_HOT_GALLDOC'
    end
    object DocAllTDOC_HOT_GALLDOC: TFIBWideStringField
      FieldName = 'TDOC_HOT_GALLDOC'
      Size = 10
    end
    object DocAllFNAME_USER: TFIBWideStringField
      FieldName = 'FNAME_USER'
      Size = 100
    end
    object DocAllNAME_SINFBASE_OBMEN: TFIBWideStringField
      FieldName = 'NAME_SINFBASE_OBMEN'
      Size = 100
    end
    object DocAllNAMEFIRM: TFIBWideStringField
      FieldName = 'NAMEFIRM'
      Size = 100
    end
    object DocAllNAMEKLIENT: TFIBWideStringField
      FieldName = 'NAMEKLIENT'
      Size = 100
    end
    object DocAllID_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'ID_HOT_GALLDOC'
    end
    object DocAllIDFIRM_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'IDFIRM_HOT_GALLDOC'
    end
    object DocAllIDKL_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'IDKL_HOT_GALLDOC'
    end
    object DocAllIDUSER_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'IDUSER_HOT_GALLDOC'
    end
    object DocAllIDDOCOSN_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'IDDOCOSN_HOT_GALLDOC'
    end
    object DocAllIDBASE_HOT_GALLDOC: TFIBLargeIntField
      FieldName = 'IDBASE_HOT_GALLDOC'
    end
  end
  object Doc: TpFIBDataSet
    CachedUpdates = True
    UpdateSQL.Strings = (
      'UPDATE HOT_DVIESD'
      'SET '
      '    GID_HOT_DVIESD = :GID_HOT_DVIESD,'
      '    IDDOCH_HOT_DVIESD = :IDDOCH_HOT_DVIESD,'
      '    DESCR_HOT_DVIESD = :DESCR_HOT_DVIESD,'
      '    IDBASE_HOT_DVIESD = :IDBASE_HOT_DVIESD'
      'WHERE'
      '    ID_HOT_DVIESD = :OLD_ID_HOT_DVIESD'
      '    ')
    DeleteSQL.Strings = (
      'DELETE FROM'
      '    HOT_DVIESD'
      'WHERE'
      '        ID_HOT_DVIESD = :OLD_ID_HOT_DVIESD'
      '    ')
    InsertSQL.Strings = (
      'INSERT INTO HOT_DVIESD('
      '    ID_HOT_DVIESD,'
      '    GID_HOT_DVIESD,'
      '    IDDOCH_HOT_DVIESD,'
      '    DESCR_HOT_DVIESD,'
      '    IDBASE_HOT_DVIESD'
      ')'
      'VALUES('
      '    :ID_HOT_DVIESD,'
      '    :GID_HOT_DVIESD,'
      '    :IDDOCH_HOT_DVIESD,'
      '    :DESCR_HOT_DVIESD,'
      '    :IDBASE_HOT_DVIESD'
      ')')
    RefreshSQL.Strings = (
      'select * '
      'from  HOT_DVIESD'
      'where(  IDDOCH_HOT_DVIESD=:PARAM_IDDOC'
      '     ) and (     HOT_DVIESD.ID_HOT_DVIESD = :OLD_ID_HOT_DVIESD'
      '     )'
      '    ')
    SelectSQL.Strings = (
      'select * '
      'from  HOT_DVIESD'
      'where IDDOCH_HOT_DVIESD=:PARAM_IDDOC')
    AutoUpdateOptions.UpdateTableName = 'HOT_DVIESD'
    AutoUpdateOptions.KeyFields = 'ID_HOT_DVIESD'
    AutoUpdateOptions.GeneratorName = 'GEN_HOT_DVIESD_ID'
    AutoUpdateOptions.WhenGetGenID = wgOnNewRecord
    OnNewRecord = DocNewRecord
    Transaction = IBTr
    UpdateTransaction = IBTrUpdate
    Left = 168
    Top = 72
    poUseLargeIntField = True
    object DocDESCR_HOT_DVIESD: TFIBWideStringField
      FieldName = 'DESCR_HOT_DVIESD'
      Size = 100
    end
    object DocID_HOT_DVIESD: TFIBLargeIntField
      FieldName = 'ID_HOT_DVIESD'
    end
    object DocIDDOCH_HOT_DVIESD: TFIBLargeIntField
      FieldName = 'IDDOCH_HOT_DVIESD'
    end
    object DocIDBASE_HOT_DVIESD: TFIBLargeIntField
      FieldName = 'IDBASE_HOT_DVIESD'
    end
  end
  object IBTr: TpFIBTransaction
    TimeoutAction = TARollback
    TRParams.Strings = (
      'read'
      'nowait'
      'read_committed'
      'rec_version')
    TPBMode = tpbDefault
    Left = 256
    Top = 16
  end
  object IBTrUpdate: TpFIBTransaction
    TimeoutAction = TARollback
    TRParams.Strings = (
      'write'
      'nowait'
      'read_committed'
      'rec_version')
    TPBMode = tpbDefault
    Left = 256
    Top = 72
  end
  object IBTrDvReg: TpFIBTransaction
    TimeoutAction = TARollback
    TRParams.Strings = (
      'write'
      'nowait'
      'read_committed'
      'rec_version')
    TPBMode = tpbDefault
    Left = 376
    Top = 136
  end
  object NumDoc: TpFIBDataSet
    SelectSQL.Strings = (
      'select max(NUMBER_HOT_GALLDOC) AS MAXNUMBER '
      'from  HOT_GALLDOC'
      'where TDOC_HOT_GALLDOC='#39'VIEZD'#39
      ' and POS_HOT_GALLDOC>:PARAM_POS')
    Transaction = IBTr
    Left = 328
    Top = 16
    object NumDocMAXNUMBER: TFIBIntegerField
      FieldName = 'MAXNUMBER'
    end
  end
  object QueryDvReg: TpFIBQuery
    Transaction = IBTrDvReg
    SQL.Strings = (
      'EXECUTE PROCEDURE HOT_DOC_VIESD_DVREG (:PARAM_IDDOCH,0,0,0)')
    Left = 296
    Top = 136
    qoStartTransaction = True
  end
  object QueryCancelDvReg: TpFIBQuery
    Transaction = IBTrDvReg
    SQL.Strings = (
      
        'EXECUTE PROCEDURE HOT_DOC_VIESD_CANCEL_DVREG(:PARAM_IDDOCH,0,0,0' +
        ')')
    Left = 296
    Top = 192
    qoStartTransaction = True
  end
  object DocT: TpFIBDataSet
    CachedUpdates = True
    UpdateSQL.Strings = (
      'UPDATE HOT_DVIESDT'
      'SET '
      '    GID_HOT_DVIESDT = :GID_HOT_DVIESDT,'
      '    IDDOCH_HOT_DVIESDT = :IDDOCH_HOT_DVIESDT,'
      '    IDSOST_HOT_DVIESDT = :IDSOST_HOT_DVIESDT,'
      '    IDBASE_HOT_DVIESDT = :IDBASE_HOT_DVIESDT'
      'WHERE'
      '    ID_HOT_DVIESDT = :OLD_ID_HOT_DVIESDT'
      '    ')
    DeleteSQL.Strings = (
      'DELETE FROM'
      '    HOT_DVIESDT'
      'WHERE'
      '        ID_HOT_DVIESDT = :OLD_ID_HOT_DVIESDT'
      '    ')
    InsertSQL.Strings = (
      'INSERT INTO HOT_DVIESDT('
      '    ID_HOT_DVIESDT,'
      '    GID_HOT_DVIESDT,'
      '    IDDOCH_HOT_DVIESDT,'
      '    IDSOST_HOT_DVIESDT,'
      '    IDBASE_HOT_DVIESDT'
      ')'
      'VALUES('
      '    :ID_HOT_DVIESDT,'
      '    :GID_HOT_DVIESDT,'
      '    :IDDOCH_HOT_DVIESDT,'
      '    :IDSOST_HOT_DVIESDT,'
      '    :IDBASE_HOT_DVIESDT'
      ')')
    RefreshSQL.Strings = (
      'select HOT_DVIESDT.*, hot_sostnf.*,'
      '        hot_snf.name_hot_snf,'
      '        hot_scatnom.name_hot_scatnom,'
      '        hot_stypepos.name_hot_stypepos,'
      '        GUEST.nameklient,'
      '        hot_ssostnom.name_hot_ssostnom'
      'from HOT_DVIESDT'
      
        'left outer join hot_sostnf on hot_dviesdt.idsost_hot_dviesdt=hot' +
        '_sostnf.id_hot_sostnf'
      
        'left outer join hot_snf on hot_snf.id_hot_snf=hot_sostnf.idnomer' +
        '_hot_sostnf'
      
        'left outer join hot_scatnom on hot_scatnom.id_hot_scatnom=hot_so' +
        'stnf.idcat_hot_sostnf'
      
        'left outer join hot_stypepos on hot_stypepos.id_hot_stypepos=hot' +
        '_sostnf.idtpos_hot_sostnf'
      
        'left outer join sklient as GUEST on GUEST.idklient=hot_sostnf.id' +
        'guest_hot_sostnf'
      
        'left outer join hot_ssostnom on hot_ssostnom.id_hot_ssostnom=hot' +
        '_sostnf.idsost_hot_sostnf'
      'where(  IDDOCH_HOT_DVIESDT=:PARAM_IDDOCH'
      
        '     ) and (     HOT_DVIESDT.ID_HOT_DVIESDT = :OLD_ID_HOT_DVIESD' +
        'T'
      '     )'
      '    ')
    SelectSQL.Strings = (
      'select HOT_DVIESDT.*, hot_sostnf.*,'
      '        hot_snf.name_hot_snf,'
      '        hot_scatnom.name_hot_scatnom,'
      '        hot_stypepos.name_hot_stypepos,'
      '        GUEST.nameklient,'
      '        hot_ssostnom.name_hot_ssostnom'
      'from HOT_DVIESDT'
      
        'left outer join hot_sostnf on hot_dviesdt.idsost_hot_dviesdt=hot' +
        '_sostnf.id_hot_sostnf'
      
        'left outer join hot_snf on hot_snf.id_hot_snf=hot_sostnf.idnomer' +
        '_hot_sostnf'
      
        'left outer join hot_scatnom on hot_scatnom.id_hot_scatnom=hot_so' +
        'stnf.idcat_hot_sostnf'
      
        'left outer join hot_stypepos on hot_stypepos.id_hot_stypepos=hot' +
        '_sostnf.idtpos_hot_sostnf'
      
        'left outer join sklient as GUEST on GUEST.idklient=hot_sostnf.id' +
        'guest_hot_sostnf'
      
        'left outer join hot_ssostnom on hot_ssostnom.id_hot_ssostnom=hot' +
        '_sostnf.idsost_hot_sostnf'
      'where IDDOCH_HOT_DVIESDT=:PARAM_IDDOCH')
    AutoUpdateOptions.UpdateTableName = 'HOT_DVIESDT'
    AutoUpdateOptions.KeyFields = 'ID_HOT_DVIESDT'
    AutoUpdateOptions.GeneratorName = 'GEN_HOT_DVIESDT_ID'
    OnNewRecord = DocTNewRecord
    Transaction = IBTr
    UpdateTransaction = IBTrUpdate
    Left = 168
    Top = 152
    poUseLargeIntField = True
    object DocTKOLM_HOT_SOSTNF: TFIBIntegerField
      FieldName = 'KOLM_HOT_SOSTNF'
    end
    object DocTPOSNACH_HOT_SOSTNF: TFIBDateTimeField
      FieldName = 'POSNACH_HOT_SOSTNF'
      DisplayFormat = 'c'
    end
    object DocTPOSCON_HOT_SOSTNF: TFIBDateTimeField
      FieldName = 'POSCON_HOT_SOSTNF'
      DisplayFormat = 'c'
    end
    object DocTNAME_HOT_SNF: TFIBWideStringField
      FieldName = 'NAME_HOT_SNF'
      Size = 100
    end
    object DocTNAME_HOT_SCATNOM: TFIBWideStringField
      FieldName = 'NAME_HOT_SCATNOM'
      Size = 100
    end
    object DocTNAME_HOT_STYPEPOS: TFIBWideStringField
      FieldName = 'NAME_HOT_STYPEPOS'
      Size = 100
    end
    object DocTNAMEKLIENT: TFIBWideStringField
      FieldName = 'NAMEKLIENT'
      Size = 100
    end
    object DocTNAME_HOT_SSOSTNOM: TFIBWideStringField
      FieldName = 'NAME_HOT_SSOSTNOM'
      Size = 100
    end
    object DocTID_HOT_DVIESDT: TFIBLargeIntField
      FieldName = 'ID_HOT_DVIESDT'
    end
    object DocTIDDOCH_HOT_DVIESDT: TFIBLargeIntField
      FieldName = 'IDDOCH_HOT_DVIESDT'
    end
    object DocTIDSOST_HOT_DVIESDT: TFIBLargeIntField
      FieldName = 'IDSOST_HOT_DVIESDT'
    end
    object DocTIDBASE_HOT_DVIESDT: TFIBLargeIntField
      FieldName = 'IDBASE_HOT_DVIESDT'
    end
    object DocTIDNOMER_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDNOMER_HOT_SOSTNF'
    end
    object DocTIDPLAT_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDPLAT_HOT_SOSTNF'
    end
    object DocTIDGUEST_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDGUEST_HOT_SOSTNF'
    end
    object DocTIDSOST_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDSOST_HOT_SOSTNF'
    end
    object DocTIDTPOS_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDTPOS_HOT_SOSTNF'
    end
    object DocTIDCAT_HOT_SOSTNF: TFIBLargeIntField
      FieldName = 'IDCAT_HOT_SOSTNF'
    end
  end
  object DataSourceDocT: TDataSource
    DataSet = DocT
    Left = 72
    Top = 144
  end
end
