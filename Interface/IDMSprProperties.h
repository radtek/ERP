#ifndef UIDMSprPropertiesH
#define UIDMSprPropertiesH
#include "IMainInterface.h"
#include "UGlobalConstant.h"
#include "FIBDatabase.hpp"
#include "FIBDataSet.hpp"
#include "FIBQuery.hpp"
#include "pFIBDatabase.hpp"
#include "pFIBDataSet.hpp"
#include "pFIBQuery.hpp"
#include <Classes.hpp>
class __declspec(uuid(Global_IID_IDMSprProperties)) IDMSprProperties : public IMainInterface
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

   __property TFIBLargeIntField * TableID_SPROP = {read = get_TableID_SPROP , write = set_TableID_SPROP};
   virtual TFIBLargeIntField * get_TableID_SPROP(void)=0;
   virtual void set_TableID_SPROP(TFIBLargeIntField * TableID_SPROP)=0;

   __property TFIBLargeIntField * TableIDBASE_SPROP = {read = get_TableIDBASE_SPROP , write = set_TableIDBASE_SPROP};
   virtual TFIBLargeIntField * get_TableIDBASE_SPROP(void)=0;
   virtual void set_TableIDBASE_SPROP(TFIBLargeIntField * TableIDBASE_SPROP)=0;

   __property TFIBWideStringField * TableGID_SPROP = {read = get_TableGID_SPROP , write = set_TableGID_SPROP};
   virtual TFIBWideStringField * get_TableGID_SPROP(void)=0;
   virtual void set_TableGID_SPROP(TFIBWideStringField * TableGID_SPROP)=0;

   __property TFIBLargeIntField * TableIDGRP_SPROP = {read = get_TableIDGRP_SPROP , write = set_TableIDGRP_SPROP};
   virtual TFIBLargeIntField * get_TableIDGRP_SPROP(void)=0;
   virtual void set_TableIDGRP_SPROP(TFIBLargeIntField * TableIDGRP_SPROP)=0;

   __property TFIBWideStringField * TableNAME_SPROP = {read = get_TableNAME_SPROP , write = set_TableNAME_SPROP};
   virtual TFIBWideStringField * get_TableNAME_SPROP(void)=0;
   virtual void set_TableNAME_SPROP(TFIBWideStringField * TableNAME_SPROP)=0;

   __property TFIBSmallIntField * TableFL_TYPE_SPROP = {read = get_TableFL_TYPE_SPROP , write = set_TableFL_TYPE_SPROP};
   virtual TFIBSmallIntField * get_TableFL_TYPE_SPROP(void)=0;
   virtual void set_TableFL_TYPE_SPROP(TFIBSmallIntField * TableFL_TYPE_SPROP)=0;

   __property TIntegerField * TableRECNO = {read = get_TableRECNO , write = set_TableRECNO};
   virtual TIntegerField * get_TableRECNO(void)=0;
   virtual void set_TableRECNO(TIntegerField * TableRECNO)=0;

   __property TFIBLargeIntField * ElementID_SPROP = {read = get_ElementID_SPROP , write = set_ElementID_SPROP};
   virtual TFIBLargeIntField * get_ElementID_SPROP(void)=0;
   virtual void set_ElementID_SPROP(TFIBLargeIntField * ElementID_SPROP)=0;

   __property TFIBLargeIntField * ElementIDBASE_SPROP = {read = get_ElementIDBASE_SPROP , write = set_ElementIDBASE_SPROP};
   virtual TFIBLargeIntField * get_ElementIDBASE_SPROP(void)=0;
   virtual void set_ElementIDBASE_SPROP(TFIBLargeIntField * ElementIDBASE_SPROP)=0;

   __property TFIBWideStringField * ElementGID_SPROP = {read = get_ElementGID_SPROP , write = set_ElementGID_SPROP};
   virtual TFIBWideStringField * get_ElementGID_SPROP(void)=0;
   virtual void set_ElementGID_SPROP(TFIBWideStringField * ElementGID_SPROP)=0;

   __property TFIBLargeIntField * ElementIDGRP_SPROP = {read = get_ElementIDGRP_SPROP , write = set_ElementIDGRP_SPROP};
   virtual TFIBLargeIntField * get_ElementIDGRP_SPROP(void)=0;
   virtual void set_ElementIDGRP_SPROP(TFIBLargeIntField * ElementIDGRP_SPROP)=0;

   __property TFIBWideStringField * ElementNAME_SPROP = {read = get_ElementNAME_SPROP , write = set_ElementNAME_SPROP};
   virtual TFIBWideStringField * get_ElementNAME_SPROP(void)=0;
   virtual void set_ElementNAME_SPROP(TFIBWideStringField * ElementNAME_SPROP)=0;

   __property TFIBSmallIntField * ElementFL_TYPE_SPROP = {read = get_ElementFL_TYPE_SPROP , write = set_ElementFL_TYPE_SPROP};
   virtual TFIBSmallIntField * get_ElementFL_TYPE_SPROP(void)=0;
   virtual void set_ElementFL_TYPE_SPROP(TFIBSmallIntField * ElementFL_TYPE_SPROP)=0;

   __property TpFIBQuery * Query = {read = get_Query , write = set_Query};
   virtual TpFIBQuery * get_Query(void)=0;
   virtual void set_Query(TpFIBQuery * Query)=0;

   __property TFIBWideStringField * ElementNAME_FOR_PRINT_SPROP = {read = get_ElementNAME_FOR_PRINT_SPROP , write = set_ElementNAME_FOR_PRINT_SPROP};
   virtual TFIBWideStringField * get_ElementNAME_FOR_PRINT_SPROP(void)=0;
   virtual void set_ElementNAME_FOR_PRINT_SPROP(TFIBWideStringField * ElementNAME_FOR_PRINT_SPROP)=0;

   __property TFIBWideStringField * TableNAME_FOR_PRINT_SPROP = {read = get_TableNAME_FOR_PRINT_SPROP , write = set_TableNAME_FOR_PRINT_SPROP};
   virtual TFIBWideStringField * get_TableNAME_FOR_PRINT_SPROP(void)=0;
   virtual void set_TableNAME_FOR_PRINT_SPROP(TFIBWideStringField * TableNAME_FOR_PRINT_SPROP)=0;

   __property __int64 IdGrp = {read = get_IdGrp , write = set_IdGrp};
   virtual __int64 get_IdGrp(void)=0;
   virtual void set_IdGrp(__int64 IdGrp)=0;

   __property bool AllElement = {read = get_AllElement , write = set_AllElement};
   virtual bool get_AllElement(void)=0;
   virtual void set_AllElement(bool AllElement)=0;

   __property __int64 IdElement = {read = get_IdElement , write = set_IdElement};
   virtual __int64 get_IdElement(void)=0;
   virtual void set_IdElement(__int64 IdElement)=0;

   virtual void OpenTable(__int64 id_grp, bool all)=0;
   virtual UnicodeString GetTextQuery(__int64 id_grp, bool all)=0;
   virtual int OpenElement(__int64 id )=0;
   virtual bool NewElement(__int64 id_grp)=0;
   virtual bool SaveElement(void)=0;
   virtual bool DeleteElement(__int64 id)=0;
   virtual void ChancheGrp(__int64 id_new_grp,__int64 id_prop)=0;
   virtual __int64 FindPoName(UnicodeString name)=0;
   virtual __int64 GetIdGrp(__int64 id_el)=0;
};
#define IID_IDMSprProperties __uuidof(IDMSprProperties)
#endif
