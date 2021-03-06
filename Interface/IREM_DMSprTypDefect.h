#ifndef UIREM_DMSprTypDefectH
#define UIREM_DMSprTypDefectH
#include "IMainInterface.h"
#include "UGlobalConstant.h"
#include "FIBDatabase.hpp"
#include "FIBDataSet.hpp"
#include "FIBQuery.hpp"
#include "pFIBDatabase.hpp"
#include "pFIBDataSet.hpp"
#include "pFIBQuery.hpp"
#include <Classes.hpp>
class __declspec(uuid(Global_IID_IREM_DMSprTypDefect)) IREM_DMSprTypDefect : public IMainInterface
{
public:
   __property TDataSource * DataSourceTable = {read = get_DataSourceTable , write = set_DataSourceTable};
   virtual TDataSource * get_DataSourceTable(void)=0;
   virtual void set_DataSourceTable(TDataSource * DataSourceTable)=0;

   __property TDataSource * DataSourceElement = {read = get_DataSourceElement , write = set_DataSourceElement};
   virtual TDataSource * get_DataSourceElement(void)=0;
   virtual void set_DataSourceElement(TDataSource * DataSourceElement)=0;

   __property TpFIBDataSet * Table = {read = get_Table , write = set_Table};
   virtual TpFIBDataSet * get_Table(void)=0;
   virtual void set_Table(TpFIBDataSet * Table)=0;

   __property TpFIBDataSet * Element = {read = get_Element , write = set_Element};
   virtual TpFIBDataSet * get_Element(void)=0;
   virtual void set_Element(TpFIBDataSet * Element)=0;

   __property TpFIBTransaction * IBTr = {read = get_IBTr , write = set_IBTr};
   virtual TpFIBTransaction * get_IBTr(void)=0;
   virtual void set_IBTr(TpFIBTransaction * IBTr)=0;

   __property TpFIBTransaction * IBTrUpdate = {read = get_IBTrUpdate , write = set_IBTrUpdate};
   virtual TpFIBTransaction * get_IBTrUpdate(void)=0;
   virtual void set_IBTrUpdate(TpFIBTransaction * IBTrUpdate)=0;

   __property TpFIBQuery * pFIBQuery = {read = get_pFIBQuery , write = set_pFIBQuery};
   virtual TpFIBQuery * get_pFIBQuery(void)=0;
   virtual void set_pFIBQuery(TpFIBQuery * pFIBQuery)=0;

   __property TIntegerField * TableRECNO = {read = get_TableRECNO , write = set_TableRECNO};
   virtual TIntegerField * get_TableRECNO(void)=0;
   virtual void set_TableRECNO(TIntegerField * TableRECNO)=0;

   __property TFIBLargeIntField * TableID_REM_STYPDEFECT = {read = get_TableID_REM_STYPDEFECT , write = set_TableID_REM_STYPDEFECT};
   virtual TFIBLargeIntField * get_TableID_REM_STYPDEFECT(void)=0;
   virtual void set_TableID_REM_STYPDEFECT(TFIBLargeIntField * TableID_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * TableGID_REM_STYPDEFECT = {read = get_TableGID_REM_STYPDEFECT , write = set_TableGID_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_TableGID_REM_STYPDEFECT(void)=0;
   virtual void set_TableGID_REM_STYPDEFECT(TFIBWideStringField * TableGID_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * TableNAME_REM_STYPDEFECT = {read = get_TableNAME_REM_STYPDEFECT , write = set_TableNAME_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_TableNAME_REM_STYPDEFECT(void)=0;
   virtual void set_TableNAME_REM_STYPDEFECT(TFIBWideStringField * TableNAME_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * TableCODE_REM_STYPDEFECT = {read = get_TableCODE_REM_STYPDEFECT , write = set_TableCODE_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_TableCODE_REM_STYPDEFECT(void)=0;
   virtual void set_TableCODE_REM_STYPDEFECT(TFIBWideStringField * TableCODE_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * TableDESCR_REM_STYPDEFECT = {read = get_TableDESCR_REM_STYPDEFECT , write = set_TableDESCR_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_TableDESCR_REM_STYPDEFECT(void)=0;
   virtual void set_TableDESCR_REM_STYPDEFECT(TFIBWideStringField * TableDESCR_REM_STYPDEFECT)=0;

   __property TFIBLargeIntField * TableIDGRP_REM_STYPDEFECT = {read = get_TableIDGRP_REM_STYPDEFECT , write = set_TableIDGRP_REM_STYPDEFECT};
   virtual TFIBLargeIntField * get_TableIDGRP_REM_STYPDEFECT(void)=0;
   virtual void set_TableIDGRP_REM_STYPDEFECT(TFIBLargeIntField * TableIDGRP_REM_STYPDEFECT)=0;

   __property TFIBLargeIntField * ElementID_REM_STYPDEFECT = {read = get_ElementID_REM_STYPDEFECT , write = set_ElementID_REM_STYPDEFECT};
   virtual TFIBLargeIntField * get_ElementID_REM_STYPDEFECT(void)=0;
   virtual void set_ElementID_REM_STYPDEFECT(TFIBLargeIntField * ElementID_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * ElementGID_REM_STYPDEFECT = {read = get_ElementGID_REM_STYPDEFECT , write = set_ElementGID_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_ElementGID_REM_STYPDEFECT(void)=0;
   virtual void set_ElementGID_REM_STYPDEFECT(TFIBWideStringField * ElementGID_REM_STYPDEFECT)=0;

   __property TFIBLargeIntField * ElementIDBASE_REM_STYPDEFECT = {read = get_ElementIDBASE_REM_STYPDEFECT , write = set_ElementIDBASE_REM_STYPDEFECT};
   virtual TFIBLargeIntField * get_ElementIDBASE_REM_STYPDEFECT(void)=0;
   virtual void set_ElementIDBASE_REM_STYPDEFECT(TFIBLargeIntField * ElementIDBASE_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * ElementNAME_REM_STYPDEFECT = {read = get_ElementNAME_REM_STYPDEFECT , write = set_ElementNAME_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_ElementNAME_REM_STYPDEFECT(void)=0;
   virtual void set_ElementNAME_REM_STYPDEFECT(TFIBWideStringField * ElementNAME_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * ElementCODE_REM_STYPDEFECT = {read = get_ElementCODE_REM_STYPDEFECT , write = set_ElementCODE_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_ElementCODE_REM_STYPDEFECT(void)=0;
   virtual void set_ElementCODE_REM_STYPDEFECT(TFIBWideStringField * ElementCODE_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * ElementDESCR_REM_STYPDEFECT = {read = get_ElementDESCR_REM_STYPDEFECT , write = set_ElementDESCR_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_ElementDESCR_REM_STYPDEFECT(void)=0;
   virtual void set_ElementDESCR_REM_STYPDEFECT(TFIBWideStringField * ElementDESCR_REM_STYPDEFECT)=0;

   __property TFIBLargeIntField * ElementIDGRP_REM_STYPDEFECT = {read = get_ElementIDGRP_REM_STYPDEFECT , write = set_ElementIDGRP_REM_STYPDEFECT};
   virtual TFIBLargeIntField * get_ElementIDGRP_REM_STYPDEFECT(void)=0;
   virtual void set_ElementIDGRP_REM_STYPDEFECT(TFIBLargeIntField * ElementIDGRP_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * TableNAME_ENG_REM_STYPDEFECT = {read = get_TableNAME_ENG_REM_STYPDEFECT , write = set_TableNAME_ENG_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_TableNAME_ENG_REM_STYPDEFECT(void)=0;
   virtual void set_TableNAME_ENG_REM_STYPDEFECT(TFIBWideStringField * TableNAME_ENG_REM_STYPDEFECT)=0;

   __property TFIBWideStringField * ElementNAME_ENG_REM_STYPDEFECT = {read = get_ElementNAME_ENG_REM_STYPDEFECT , write = set_ElementNAME_ENG_REM_STYPDEFECT};
   virtual TFIBWideStringField * get_ElementNAME_ENG_REM_STYPDEFECT(void)=0;
   virtual void set_ElementNAME_ENG_REM_STYPDEFECT(TFIBWideStringField * ElementNAME_ENG_REM_STYPDEFECT)=0;

   __property __int64 IdGrp = {read = get_IdGrp , write = set_IdGrp};
   virtual __int64 get_IdGrp(void)=0;
   virtual void set_IdGrp(__int64 IdGrp)=0;

   __property bool AllElement = {read = get_AllElement , write = set_AllElement};
   virtual bool get_AllElement(void)=0;
   virtual void set_AllElement(bool AllElement)=0;

   virtual UnicodeString GetTextQuery(__int64 id_grp, bool all)=0;
   virtual void OpenTable(__int64 id_grp, bool all)=0;
   virtual int OpenElement(__int64 id)=0;
   virtual bool NewElement(__int64 id_grp)=0;
   virtual bool SaveElement(void)=0;
   virtual bool DeleteElement(__int64 id)=0;
   virtual void ChancheGrp(__int64 id_new_grp, __int64 id_el)=0;
   virtual __int64 GetIdGrpNom(__int64 id)=0;
};
#define IID_IREM_DMSprTypDefect __uuidof(IREM_DMSprTypDefect)
#endif
