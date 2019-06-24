#ifndef UREM_DMGurProverokImplH
#define UREM_DMGurProverokImplH
#include "IREM_DMGurProverok.h"
#include "UREM_DMGurProverok.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TREM_DMGurProverokImpl)) TREM_DMGurProverokImpl : public IREM_DMGurProverok
{
public:
   TREM_DMGurProverokImpl();
   ~TREM_DMGurProverokImpl();
   TREM_DMGurProverok * Object;
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

//IREM_DMGurProverok
   virtual TDataSource * get_DataSourceTable(void);
   virtual void set_DataSourceTable(TDataSource * DataSourceTable);

   virtual TpFIBDataSet * get_Table(void);
   virtual void set_Table(TpFIBDataSet * Table);

   virtual TpFIBTransaction * get_IBTr(void);
   virtual void set_IBTr(TpFIBTransaction * IBTr);

   virtual TpFIBDataSet * get_IBQ(void);
   virtual void set_IBQ(TpFIBDataSet * IBQ);

   virtual TpFIBQuery * get_pFIBQ(void);
   virtual void set_pFIBQ(TpFIBQuery * pFIBQ);

   virtual TFIBLargeIntField * get_TableID_REM_GUR_PROV(void);
   virtual void set_TableID_REM_GUR_PROV(TFIBLargeIntField * TableID_REM_GUR_PROV);

   virtual TFIBLargeIntField * get_TableIDBASE_REM_GUR_PROV(void);
   virtual void set_TableIDBASE_REM_GUR_PROV(TFIBLargeIntField * TableIDBASE_REM_GUR_PROV);

   virtual TFIBDateTimeField * get_TablePOS_REM_GUR_PROV(void);
   virtual void set_TablePOS_REM_GUR_PROV(TFIBDateTimeField * TablePOS_REM_GUR_PROV);

   virtual TFIBIntegerField * get_TableNUM_REM_GUR_PROV(void);
   virtual void set_TableNUM_REM_GUR_PROV(TFIBIntegerField * TableNUM_REM_GUR_PROV);

   virtual TFIBWideStringField * get_TableDESCR_REM_GUR_PROV(void);
   virtual void set_TableDESCR_REM_GUR_PROV(TFIBWideStringField * TableDESCR_REM_GUR_PROV);

   virtual TFIBLargeIntField * get_TableIDDOC_REM_GUR_PROV(void);
   virtual void set_TableIDDOC_REM_GUR_PROV(TFIBLargeIntField * TableIDDOC_REM_GUR_PROV);

   virtual TFIBLargeIntField * get_TableIDUSER_REM_GUR_PROV(void);
   virtual void set_TableIDUSER_REM_GUR_PROV(TFIBLargeIntField * TableIDUSER_REM_GUR_PROV);

   virtual TFIBIntegerField * get_TableRES_REM_GUR_PROV(void);
   virtual void set_TableRES_REM_GUR_PROV(TFIBIntegerField * TableRES_REM_GUR_PROV);

   virtual TFIBWideStringField * get_TableNAMEFIRM(void);
   virtual void set_TableNAMEFIRM(TFIBWideStringField * TableNAMEFIRM);

   virtual TFIBWideStringField * get_TableNAMESKLAD(void);
   virtual void set_TableNAMESKLAD(TFIBWideStringField * TableNAMESKLAD);

   virtual TFIBWideStringField * get_TableNAMEKLIENT(void);
   virtual void set_TableNAMEKLIENT(TFIBWideStringField * TableNAMEKLIENT);

   virtual TFIBWideStringField * get_TableNAME_USER_DOC(void);
   virtual void set_TableNAME_USER_DOC(TFIBWideStringField * TableNAME_USER_DOC);

   virtual TFIBWideStringField * get_TableNAME_USER_PROV(void);
   virtual void set_TableNAME_USER_PROV(TFIBWideStringField * TableNAME_USER_PROV);

   virtual TFIBWideStringField * get_TableNAME_SINFBASE_OBMEN(void);
   virtual void set_TableNAME_SINFBASE_OBMEN(TFIBWideStringField * TableNAME_SINFBASE_OBMEN);

   virtual TFIBWideStringField * get_TablePREFIKS_NUM_REM_GALLDOC(void);
   virtual void set_TablePREFIKS_NUM_REM_GALLDOC(TFIBWideStringField * TablePREFIKS_NUM_REM_GALLDOC);

   virtual TFIBSmallIntField * get_TablePR_REM_GALLDOC(void);
   virtual void set_TablePR_REM_GALLDOC(TFIBSmallIntField * TablePR_REM_GALLDOC);

   virtual TFIBIntegerField * get_TableNUM_REM_GALLDOC(void);
   virtual void set_TableNUM_REM_GALLDOC(TFIBIntegerField * TableNUM_REM_GALLDOC);

   virtual TFIBDateTimeField * get_TablePOS_REM_GALLDOC(void);
   virtual void set_TablePOS_REM_GALLDOC(TFIBDateTimeField * TablePOS_REM_GALLDOC);

   virtual TFIBWideStringField * get_TableTDOC_REM_GALLDOC(void);
   virtual void set_TableTDOC_REM_GALLDOC(TFIBWideStringField * TableTDOC_REM_GALLDOC);

   virtual TDateTime get_PosNach(void);
   virtual void set_PosNach(TDateTime PosNach);

   virtual TDateTime get_PosCon(void);
   virtual void set_PosCon(TDateTime PosCon);

   virtual __int64 get_IdDoc(void);
   virtual void set_IdDoc(__int64 IdDoc);

   virtual __int64 get_IdKlient(void);
   virtual void set_IdKlient(__int64 IdKlient);

   virtual __int64 get_IdSklad(void);
   virtual void set_IdSklad(__int64 IdSklad);

   virtual __int64 get_IdFirm(void);
   virtual void set_IdFirm(__int64 IdFirm);

   virtual UnicodeString get_StringTypeDoc(void);
   virtual void set_StringTypeDoc(UnicodeString StringTypeDoc);

   virtual bool get_OtborVkl(void);
   virtual void set_OtborVkl(bool OtborVkl);

   virtual void OpenTable();
   virtual void UpdateTable(void);
};
#define CLSID_TREM_DMGurProverokImpl __uuidof(TREM_DMGurProverokImpl)
#endif
