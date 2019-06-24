#ifndef UHLP_DMSprNaborInfBlockSostavImplH
#define UHLP_DMSprNaborInfBlockSostavImplH
#include "IHLP_DMSprNaborInfBlockSostav.h"
#include "UHLP_DMSprNaborInfBlockSostav.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_THLP_DMSprNaborInfBlockSostavImpl)) THLP_DMSprNaborInfBlockSostavImpl : public IHLP_DMSprNaborInfBlockSostav
{
public:
   THLP_DMSprNaborInfBlockSostavImpl();
   ~THLP_DMSprNaborInfBlockSostavImpl();
   THLP_DMSprNaborInfBlockSostav * Object;
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

//IHLP_DMSprNaborInfBlockSostav
   virtual TDataSource * get_DataSourceTable(void);
   virtual void set_DataSourceTable(TDataSource * DataSourceTable);

   virtual TDataSource * get_DataSourcePodr(void);
   virtual void set_DataSourcePodr(TDataSource * DataSourcePodr);

   virtual TpFIBDataSet * get_Table(void);
   virtual void set_Table(TpFIBDataSet * Table);

   virtual TpFIBTransaction * get_IBTr(void);
   virtual void set_IBTr(TpFIBTransaction * IBTr);

   virtual TpFIBTransaction * get_IBTrUpdate(void);
   virtual void set_IBTrUpdate(TpFIBTransaction * IBTrUpdate);

   virtual TpFIBDataSet * get_Element(void);
   virtual void set_Element(TpFIBDataSet * Element);

   virtual TFIBLargeIntField * get_TableID_HLP_N_IB_S(void);
   virtual void set_TableID_HLP_N_IB_S(TFIBLargeIntField * TableID_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_TableIDBASE_HLP_N_IB_S(void);
   virtual void set_TableIDBASE_HLP_N_IB_S(TFIBLargeIntField * TableIDBASE_HLP_N_IB_S);

   virtual TFIBWideStringField * get_TableGUID_HLP_N_IB_S(void);
   virtual void set_TableGUID_HLP_N_IB_S(TFIBWideStringField * TableGUID_HLP_N_IB_S);

   virtual TFIBDateTimeField * get_TablePOS_ISM_HLP_N_IB_S(void);
   virtual void set_TablePOS_ISM_HLP_N_IB_S(TFIBDateTimeField * TablePOS_ISM_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_TableIDGRP_HLP_N_IB_S(void);
   virtual void set_TableIDGRP_HLP_N_IB_S(TFIBLargeIntField * TableIDGRP_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_TableIDNABOR_HLP_N_IB_S(void);
   virtual void set_TableIDNABOR_HLP_N_IB_S(TFIBLargeIntField * TableIDNABOR_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_TableIDIB_HLP_N_IB_S(void);
   virtual void set_TableIDIB_HLP_N_IB_S(TFIBLargeIntField * TableIDIB_HLP_N_IB_S);

   virtual TFIBIntegerField * get_TableINDEX_HLP_N_IB_S(void);
   virtual void set_TableINDEX_HLP_N_IB_S(TFIBIntegerField * TableINDEX_HLP_N_IB_S);

   virtual TFIBWideStringField * get_TableNAME_HLP_IB(void);
   virtual void set_TableNAME_HLP_IB(TFIBWideStringField * TableNAME_HLP_IB);

   virtual TFIBLargeIntField * get_ElementID_HLP_N_IB_S(void);
   virtual void set_ElementID_HLP_N_IB_S(TFIBLargeIntField * ElementID_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_ElementIDBASE_HLP_N_IB_S(void);
   virtual void set_ElementIDBASE_HLP_N_IB_S(TFIBLargeIntField * ElementIDBASE_HLP_N_IB_S);

   virtual TFIBWideStringField * get_ElementGUID_HLP_N_IB_S(void);
   virtual void set_ElementGUID_HLP_N_IB_S(TFIBWideStringField * ElementGUID_HLP_N_IB_S);

   virtual TFIBDateTimeField * get_ElementPOS_ISM_HLP_N_IB_S(void);
   virtual void set_ElementPOS_ISM_HLP_N_IB_S(TFIBDateTimeField * ElementPOS_ISM_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_ElementIDGRP_HLP_N_IB_S(void);
   virtual void set_ElementIDGRP_HLP_N_IB_S(TFIBLargeIntField * ElementIDGRP_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_ElementIDNABOR_HLP_N_IB_S(void);
   virtual void set_ElementIDNABOR_HLP_N_IB_S(TFIBLargeIntField * ElementIDNABOR_HLP_N_IB_S);

   virtual TFIBLargeIntField * get_ElementIDIB_HLP_N_IB_S(void);
   virtual void set_ElementIDIB_HLP_N_IB_S(TFIBLargeIntField * ElementIDIB_HLP_N_IB_S);

   virtual TFIBIntegerField * get_ElementINDEX_HLP_N_IB_S(void);
   virtual void set_ElementINDEX_HLP_N_IB_S(TFIBIntegerField * ElementINDEX_HLP_N_IB_S);

   virtual TFIBWideStringField * get_ElementNAME_HLP_IB(void);
   virtual void set_ElementNAME_HLP_IB(TFIBWideStringField * ElementNAME_HLP_IB);

   virtual __int64 get_IdGroupElement(void);
   virtual void set_IdGroupElement(__int64 IdGroupElement);

   virtual __int64 get_IdGrp(void);
   virtual void set_IdGrp(__int64 IdGrp);

   virtual __int64 get_IdElement(void);
   virtual void set_IdElement(__int64 IdElement);

   virtual bool get_AllElement(void);
   virtual void set_AllElement(bool AllElement);

   virtual bool NewElement(__int64 id_group_element, __int64 id_grp);
   virtual bool InsertElement(__int64 id_group_element, __int64 id_grp, __int64 id_ib);
   virtual bool OpenElement(__int64 id);
   virtual bool DeleteElement(__int64 id);
   virtual bool SaveElement(void);
   virtual bool ChancheGrp(__int64 id_new_grp,__int64 id_element);
   virtual bool OpenTable(__int64 id_group_element, __int64 id_grp, bool all);
   virtual bool TableSaveIsmen(void);
   virtual bool TableCancelIsmen(void);
   virtual bool TableNewElement(__int64 id_group_element, __int64 id_grp);
   virtual bool TableAppend(void);
   virtual bool TableDelete(void);
   virtual bool TableEdit(void);
   virtual bool TablePost(void);
};
#define CLSID_THLP_DMSprNaborInfBlockSostavImpl __uuidof(THLP_DMSprNaborInfBlockSostavImpl)
#endif
