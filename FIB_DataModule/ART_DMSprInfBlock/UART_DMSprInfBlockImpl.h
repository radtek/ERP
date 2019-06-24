#ifndef UART_DMSprInfBlockImplH
#define UART_DMSprInfBlockImplH
#include "IART_DMSprInfBlock.h"
#include "UART_DMSprInfBlock.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TART_DMSprInfBlockImpl)) TART_DMSprInfBlockImpl : public IART_DMSprInfBlock
{
public:
   TART_DMSprInfBlockImpl();
   ~TART_DMSprInfBlockImpl();
   TART_DMSprInfBlock * Object;
   int NumRefs;
   bool flDeleteObject;
   void DeleteImpl(void);

   //IUnknown
   virtual int kanQueryInterface(REFIID id_interface,void ** ppv);
   virtual int kanAddRef(void);
   virtual int kanRelease(void);

   //IMainInterface
   virtual int  get_CodeError(void);
   virtual void set_CodeError(int CodeError);
   virtual UnicodeString  get_TextError(void);
   virtual void set_TextError(UnicodeString  TextError);
   virtual int Init(IkanUnknown * i_main_object, IkanUnknown * i_owner_object);
   virtual int Done(void);

//IART_DMSprInfBlock
   virtual TDataSource * get_DataSourceTable(void);
   virtual void set_DataSourceTable(TDataSource * DataSourceTable);

   virtual TDataSource * get_DataSourceElement(void);
   virtual void set_DataSourceElement(TDataSource * DataSourceElement);

   virtual TpFIBDataSet * get_Table(void);
   virtual void set_Table(TpFIBDataSet * Table);

   virtual TpFIBDataSet * get_Element(void);
   virtual void set_Element(TpFIBDataSet * Element);

   virtual TpFIBTransaction * get_IBTr(void);
   virtual void set_IBTr(TpFIBTransaction * IBTr);

   virtual TpFIBTransaction * get_IBTrUpdate(void);
   virtual void set_IBTrUpdate(TpFIBTransaction * IBTrUpdate);

   virtual TpFIBQuery * get_Query(void);
   virtual void set_Query(TpFIBQuery * Query);

   virtual TFIBLargeIntField * get_TableID_ART_IB(void);
   virtual void set_TableID_ART_IB(TFIBLargeIntField * TableID_ART_IB);

   virtual TFIBLargeIntField * get_TableIDBASE_ART_IB(void);
   virtual void set_TableIDBASE_ART_IB(TFIBLargeIntField * TableIDBASE_ART_IB);

   virtual TFIBDateTimeField * get_TablePOS_ISM_ART_IB(void);
   virtual void set_TablePOS_ISM_ART_IB(TFIBDateTimeField * TablePOS_ISM_ART_IB);

   virtual TFIBWideStringField * get_TableGUID_ART_IB(void);
   virtual void set_TableGUID_ART_IB(TFIBWideStringField * TableGUID_ART_IB);

   virtual TFIBLargeIntField * get_TableIDGRP_ART_IB(void);
   virtual void set_TableIDGRP_ART_IB(TFIBLargeIntField * TableIDGRP_ART_IB);

   virtual TFIBWideStringField * get_TableGUIDGRP_ART_IB(void);
   virtual void set_TableGUIDGRP_ART_IB(TFIBWideStringField * TableGUIDGRP_ART_IB);

   virtual TFIBWideStringField * get_TableNAME_ART_IB(void);
   virtual void set_TableNAME_ART_IB(TFIBWideStringField * TableNAME_ART_IB);

   virtual TFIBWideStringField * get_TableKEYWORDS_ART_IB(void);
   virtual void set_TableKEYWORDS_ART_IB(TFIBWideStringField * TableKEYWORDS_ART_IB);

   virtual TFIBWideStringField * get_TableTITLE_ART_IB(void);
   virtual void set_TableTITLE_ART_IB(TFIBWideStringField * TableTITLE_ART_IB);

   virtual TFIBWideStringField * get_TableDESCR_ART_IB(void);
   virtual void set_TableDESCR_ART_IB(TFIBWideStringField * TableDESCR_ART_IB);

   virtual TFIBIntegerField * get_TableINDEX_ART_IB(void);
   virtual void set_TableINDEX_ART_IB(TFIBIntegerField * TableINDEX_ART_IB);

   virtual TFIBLargeIntField * get_ElementID_ART_IB(void);
   virtual void set_ElementID_ART_IB(TFIBLargeIntField * ElementID_ART_IB);

   virtual TFIBLargeIntField * get_ElementIDBASE_ART_IB(void);
   virtual void set_ElementIDBASE_ART_IB(TFIBLargeIntField * ElementIDBASE_ART_IB);

   virtual TFIBDateTimeField * get_ElementPOS_ISM_ART_IB(void);
   virtual void set_ElementPOS_ISM_ART_IB(TFIBDateTimeField * ElementPOS_ISM_ART_IB);

   virtual TFIBWideStringField * get_ElementGUID_ART_IB(void);
   virtual void set_ElementGUID_ART_IB(TFIBWideStringField * ElementGUID_ART_IB);

   virtual TFIBLargeIntField * get_ElementIDGRP_ART_IB(void);
   virtual void set_ElementIDGRP_ART_IB(TFIBLargeIntField * ElementIDGRP_ART_IB);

   virtual TFIBWideStringField * get_ElementGUIDGRP_ART_IB(void);
   virtual void set_ElementGUIDGRP_ART_IB(TFIBWideStringField * ElementGUIDGRP_ART_IB);

   virtual TFIBWideStringField * get_ElementNAME_ART_IB(void);
   virtual void set_ElementNAME_ART_IB(TFIBWideStringField * ElementNAME_ART_IB);

   virtual TFIBWideStringField * get_ElementKEYWORDS_ART_IB(void);
   virtual void set_ElementKEYWORDS_ART_IB(TFIBWideStringField * ElementKEYWORDS_ART_IB);

   virtual TFIBWideStringField * get_ElementTITLE_ART_IB(void);
   virtual void set_ElementTITLE_ART_IB(TFIBWideStringField * ElementTITLE_ART_IB);

   virtual TFIBWideStringField * get_ElementDESCR_ART_IB(void);
   virtual void set_ElementDESCR_ART_IB(TFIBWideStringField * ElementDESCR_ART_IB);

   virtual TFIBIntegerField * get_ElementINDEX_ART_IB(void);
   virtual void set_ElementINDEX_ART_IB(TFIBIntegerField * ElementINDEX_ART_IB);

   virtual TFIBWideStringField * get_ElementWEB_KEYWORDS_ART_IB(void);
   virtual void set_ElementWEB_KEYWORDS_ART_IB(TFIBWideStringField * ElementWEB_KEYWORDS_ART_IB);

   virtual TFIBWideStringField * get_ElementWEB_TITLE_ART_IB(void);
   virtual void set_ElementWEB_TITLE_ART_IB(TFIBWideStringField * ElementWEB_TITLE_ART_IB);

   virtual TFIBWideStringField * get_ElementWEB_DESCR_ART_IB(void);
   virtual void set_ElementWEB_DESCR_ART_IB(TFIBWideStringField * ElementWEB_DESCR_ART_IB);

   virtual TFIBWideStringField * get_TableWEB_KEYWORDS_ART_IB(void);
   virtual void set_TableWEB_KEYWORDS_ART_IB(TFIBWideStringField * TableWEB_KEYWORDS_ART_IB);

   virtual TFIBWideStringField * get_TableWEB_TITLE_ART_IB(void);
   virtual void set_TableWEB_TITLE_ART_IB(TFIBWideStringField * TableWEB_TITLE_ART_IB);

   virtual TFIBWideStringField * get_TableWEB_DESCR_ART_IB(void);
   virtual void set_TableWEB_DESCR_ART_IB(TFIBWideStringField * TableWEB_DESCR_ART_IB);

   virtual TFIBSmallIntField * get_ElementFL_ADD_SITEMAP_ART_IB(void);
   virtual void set_ElementFL_ADD_SITEMAP_ART_IB(TFIBSmallIntField * ElementFL_ADD_SITEMAP_ART_IB);

   virtual TFIBSmallIntField * get_TableFL_ADD_SITEMAP_ART_IB(void);
   virtual void set_TableFL_ADD_SITEMAP_ART_IB(TFIBSmallIntField * TableFL_ADD_SITEMAP_ART_IB);

   virtual __int64 get_IdGrp(void);
   virtual void set_IdGrp(__int64 IdGrp);

   virtual bool get_AllElement(void);
   virtual void set_AllElement(bool AllElement);

   virtual __int64 get_IdElement(void);
   virtual void set_IdElement(__int64 IdElement);

   virtual void OpenTable(__int64 id_grp, bool all);
   virtual UnicodeString GetTextQuery(__int64 id_grp, bool all);
   virtual int OpenElement(__int64 id );
   virtual bool NewElement(__int64 id_grp);
   virtual bool SaveElement(void);
   virtual bool DeleteElement(__int64 id);
   virtual void ChancheGrp(__int64 id_new_grp,__int64 id_element);
   virtual __int64 FindPoName(UnicodeString name);
   virtual __int64 GetIdGrp(__int64 id_el);
};
#define CLSID_TART_DMSprInfBlockImpl __uuidof(TART_DMSprInfBlockImpl)
#endif
