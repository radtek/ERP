#ifndef UREM_DMDocZOperImplH
#define UREM_DMDocZOperImplH
#include "IREM_DMDocZOper.h"
#include "UREM_DMDocZOper.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TREM_DMDocZOperImpl)) TREM_DMDocZOperImpl : public IREM_DMDocZOper
{
public:
   TREM_DMDocZOperImpl();
   ~TREM_DMDocZOperImpl();
   TREM_DMDocZOper * Object;
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

//IREM_DMDocZOper
   virtual TDataSource * get_DataSourceDoc(void);
   virtual void set_DataSourceDoc(TDataSource * DataSourceDoc);

   virtual TDataSource * get_DataSourceDocT(void);
   virtual void set_DataSourceDocT(TDataSource * DataSourceDocT);

   virtual TDataSource * get_DataSourceDocAll(void);
   virtual void set_DataSourceDocAll(TDataSource * DataSourceDocAll);

   virtual TpFIBDataSet * get_DocAll(void);
   virtual void set_DocAll(TpFIBDataSet * DocAll);

   virtual TpFIBDataSet * get_Doc(void);
   virtual void set_Doc(TpFIBDataSet * Doc);

   virtual TpFIBDataSet * get_DocT(void);
   virtual void set_DocT(TpFIBDataSet * DocT);

   virtual TpFIBTransaction * get_IBTr(void);
   virtual void set_IBTr(TpFIBTransaction * IBTr);

   virtual TpFIBTransaction * get_IBTrUpdate(void);
   virtual void set_IBTrUpdate(TpFIBTransaction * IBTrUpdate);

   virtual TpFIBTransaction * get_IBTrDvReg(void);
   virtual void set_IBTrDvReg(TpFIBTransaction * IBTrDvReg);

   virtual TpFIBDataSet * get_NumDoc(void);
   virtual void set_NumDoc(TpFIBDataSet * NumDoc);

   virtual TpFIBQuery * get_pFIBQ(void);
   virtual void set_pFIBQ(TpFIBQuery * pFIBQ);

   virtual TpFIBQuery * get_QueryCancelDvReg(void);
   virtual void set_QueryCancelDvReg(TpFIBQuery * QueryCancelDvReg);

   virtual TpFIBQuery * get_QueryDvReg(void);
   virtual void set_QueryDvReg(TpFIBQuery * QueryDvReg);

   virtual TFIBIntegerField * get_NumDocMAXNUMBER(void);
   virtual void set_NumDocMAXNUMBER(TFIBIntegerField * NumDocMAXNUMBER);

   virtual TIntegerField * get_DocTRECNO(void);
   virtual void set_DocTRECNO(TIntegerField * DocTRECNO);

   virtual TFIBLargeIntField * get_DocAllID_REM_GALLDOC(void);
   virtual void set_DocAllID_REM_GALLDOC(TFIBLargeIntField * DocAllID_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDBASE_REM_GALLDOC(void);
   virtual void set_DocAllIDBASE_REM_GALLDOC(TFIBLargeIntField * DocAllIDBASE_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDFIRM_REM_GALLDOC(void);
   virtual void set_DocAllIDFIRM_REM_GALLDOC(TFIBLargeIntField * DocAllIDFIRM_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDSKLAD_REM_GALLDOC(void);
   virtual void set_DocAllIDSKLAD_REM_GALLDOC(TFIBLargeIntField * DocAllIDSKLAD_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDKLIENT_REM_GALLDOC(void);
   virtual void set_DocAllIDKLIENT_REM_GALLDOC(TFIBLargeIntField * DocAllIDKLIENT_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDUSER_REM_GALLDOC(void);
   virtual void set_DocAllIDUSER_REM_GALLDOC(TFIBLargeIntField * DocAllIDUSER_REM_GALLDOC);

   virtual TFIBDateTimeField * get_DocAllPOS_REM_GALLDOC(void);
   virtual void set_DocAllPOS_REM_GALLDOC(TFIBDateTimeField * DocAllPOS_REM_GALLDOC);

   virtual TFIBIntegerField * get_DocAllNUM_REM_GALLDOC(void);
   virtual void set_DocAllNUM_REM_GALLDOC(TFIBIntegerField * DocAllNUM_REM_GALLDOC);

   virtual TFIBSmallIntField * get_DocAllPR_REM_GALLDOC(void);
   virtual void set_DocAllPR_REM_GALLDOC(TFIBSmallIntField * DocAllPR_REM_GALLDOC);

   virtual TFIBWideStringField * get_DocAllTDOC_REM_GALLDOC(void);
   virtual void set_DocAllTDOC_REM_GALLDOC(TFIBWideStringField * DocAllTDOC_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDDOCOSN_REM_GALLDOC(void);
   virtual void set_DocAllIDDOCOSN_REM_GALLDOC(TFIBLargeIntField * DocAllIDDOCOSN_REM_GALLDOC);

   virtual TFIBIntegerField * get_DocAllTYPEEXTDOC_REM_GALLDOC(void);
   virtual void set_DocAllTYPEEXTDOC_REM_GALLDOC(TFIBIntegerField * DocAllTYPEEXTDOC_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDEXTDOC_REM_GALLDOC(void);
   virtual void set_DocAllIDEXTDOC_REM_GALLDOC(TFIBLargeIntField * DocAllIDEXTDOC_REM_GALLDOC);

   virtual TFIBBCDField * get_DocAllSUM_REM_GALLDOC(void);
   virtual void set_DocAllSUM_REM_GALLDOC(TFIBBCDField * DocAllSUM_REM_GALLDOC);

   virtual TFIBWideStringField * get_DocAllFNAME_USER(void);
   virtual void set_DocAllFNAME_USER(TFIBWideStringField * DocAllFNAME_USER);

   virtual TFIBWideStringField * get_DocAllNAME_SINFBASE_OBMEN(void);
   virtual void set_DocAllNAME_SINFBASE_OBMEN(TFIBWideStringField * DocAllNAME_SINFBASE_OBMEN);

   virtual TFIBWideStringField * get_DocAllNAMEFIRM(void);
   virtual void set_DocAllNAMEFIRM(TFIBWideStringField * DocAllNAMEFIRM);

   virtual TFIBWideStringField * get_DocAllNAMESKLAD(void);
   virtual void set_DocAllNAMESKLAD(TFIBWideStringField * DocAllNAMESKLAD);

   virtual TFIBWideStringField * get_DocAllNAMEKLIENT(void);
   virtual void set_DocAllNAMEKLIENT(TFIBWideStringField * DocAllNAMEKLIENT);

   virtual TFIBLargeIntField * get_DocID_REM_DZOPER(void);
   virtual void set_DocID_REM_DZOPER(TFIBLargeIntField * DocID_REM_DZOPER);

   virtual TFIBLargeIntField * get_DocIDBASE_REM_DZOPER(void);
   virtual void set_DocIDBASE_REM_DZOPER(TFIBLargeIntField * DocIDBASE_REM_DZOPER);

   virtual TFIBWideStringField * get_DocGID_REM_DZOPER(void);
   virtual void set_DocGID_REM_DZOPER(TFIBWideStringField * DocGID_REM_DZOPER);

   virtual TFIBLargeIntField * get_DocIDDOC_REM_DZOPER(void);
   virtual void set_DocIDDOC_REM_DZOPER(TFIBLargeIntField * DocIDDOC_REM_DZOPER);

   virtual TFIBLargeIntField * get_DocIDZ_REM_DZOPER(void);
   virtual void set_DocIDZ_REM_DZOPER(TFIBLargeIntField * DocIDZ_REM_DZOPER);

   virtual TFIBLargeIntField * get_DocIDTPRICE_REM_DZOPER(void);
   virtual void set_DocIDTPRICE_REM_DZOPER(TFIBLargeIntField * DocIDTPRICE_REM_DZOPER);

   virtual TFIBWideStringField * get_DocPRIM_REM_DZOPER(void);
   virtual void set_DocPRIM_REM_DZOPER(TFIBWideStringField * DocPRIM_REM_DZOPER);

   virtual TFIBWideStringField * get_DocNAME_REM_Z(void);
   virtual void set_DocNAME_REM_Z(TFIBWideStringField * DocNAME_REM_Z);

   virtual TFIBIntegerField * get_DocNUM_REM_Z(void);
   virtual void set_DocNUM_REM_Z(TFIBIntegerField * DocNUM_REM_Z);

   virtual TFIBDateTimeField * get_DocPOS_REM_Z(void);
   virtual void set_DocPOS_REM_Z(TFIBDateTimeField * DocPOS_REM_Z);

   virtual TFIBWideStringField * get_DocSERNUM_REM_Z(void);
   virtual void set_DocSERNUM_REM_Z(TFIBWideStringField * DocSERNUM_REM_Z);

   virtual TFIBWideStringField * get_DocSERNUM2_REM_Z(void);
   virtual void set_DocSERNUM2_REM_Z(TFIBWideStringField * DocSERNUM2_REM_Z);

   virtual TFIBWideStringField * get_DocKLIENT_NAME_REM_Z(void);
   virtual void set_DocKLIENT_NAME_REM_Z(TFIBWideStringField * DocKLIENT_NAME_REM_Z);

   virtual TFIBWideStringField * get_DocMODEL_REM_Z(void);
   virtual void set_DocMODEL_REM_Z(TFIBWideStringField * DocMODEL_REM_Z);

   virtual TFIBWideStringField * get_DocNAME_REM_SMODEL(void);
   virtual void set_DocNAME_REM_SMODEL(TFIBWideStringField * DocNAME_REM_SMODEL);

   virtual TFIBLargeIntField * get_DocTID_REM_DZOPERT(void);
   virtual void set_DocTID_REM_DZOPERT(TFIBLargeIntField * DocTID_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDBASE_REM_DZOPERT(void);
   virtual void set_DocTIDBASE_REM_DZOPERT(TFIBLargeIntField * DocTIDBASE_REM_DZOPERT);

   virtual TFIBWideStringField * get_DocTGID_REM_DZOPERT(void);
   virtual void set_DocTGID_REM_DZOPERT(TFIBWideStringField * DocTGID_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDDOC_REM_DZOPERT(void);
   virtual void set_DocTIDDOC_REM_DZOPERT(TFIBLargeIntField * DocTIDDOC_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDNOM_REM_DZOPERT(void);
   virtual void set_DocTIDNOM_REM_DZOPERT(TFIBLargeIntField * DocTIDNOM_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDED_REM_DZOPERT(void);
   virtual void set_DocTIDED_REM_DZOPERT(TFIBLargeIntField * DocTIDED_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDHW_REM_DZOPERT(void);
   virtual void set_DocTIDHW_REM_DZOPERT(TFIBLargeIntField * DocTIDHW_REM_DZOPERT);

   virtual TFIBBCDField * get_DocTKOL_REM_DZOPERT(void);
   virtual void set_DocTKOL_REM_DZOPERT(TFIBBCDField * DocTKOL_REM_DZOPERT);

   virtual TFIBBCDField * get_DocTKF_REM_DZOPERT(void);
   virtual void set_DocTKF_REM_DZOPERT(TFIBBCDField * DocTKF_REM_DZOPERT);

   virtual TFIBBCDField * get_DocTPRICE_REM_DZOPERT(void);
   virtual void set_DocTPRICE_REM_DZOPERT(TFIBBCDField * DocTPRICE_REM_DZOPERT);

   virtual TFIBBCDField * get_DocTSUM_REM_DZOPERT(void);
   virtual void set_DocTSUM_REM_DZOPERT(TFIBBCDField * DocTSUM_REM_DZOPERT);

   virtual TFIBSmallIntField * get_DocTDVREG_REM_DZOPERT(void);
   virtual void set_DocTDVREG_REM_DZOPERT(TFIBSmallIntField * DocTDVREG_REM_DZOPERT);

   virtual TFIBWideStringField * get_DocTSTR_NAMENOM_REM_DZOPERT(void);
   virtual void set_DocTSTR_NAMENOM_REM_DZOPERT(TFIBWideStringField * DocTSTR_NAMENOM_REM_DZOPERT);

   virtual TFIBWideStringField * get_DocTNAMENOM(void);
   virtual void set_DocTNAMENOM(TFIBWideStringField * DocTNAMENOM);

   virtual TFIBIntegerField * get_DocTCODENOM(void);
   virtual void set_DocTCODENOM(TFIBIntegerField * DocTCODENOM);

   virtual TFIBWideStringField * get_DocTARTNOM(void);
   virtual void set_DocTARTNOM(TFIBWideStringField * DocTARTNOM);

   virtual TFIBWideStringField * get_DocTNAMEED(void);
   virtual void set_DocTNAMEED(TFIBWideStringField * DocTNAMEED);

   virtual TFIBWideStringField * get_DocTSHED(void);
   virtual void set_DocTSHED(TFIBWideStringField * DocTSHED);

   virtual TFIBWideStringField * get_DocTNAME_REM_SHARDWARE(void);
   virtual void set_DocTNAME_REM_SHARDWARE(TFIBWideStringField * DocTNAME_REM_SHARDWARE);

   virtual TFIBIntegerField * get_DocTCODE_REM_SHARDWARE(void);
   virtual void set_DocTCODE_REM_SHARDWARE(TFIBIntegerField * DocTCODE_REM_SHARDWARE);

   virtual TFIBLargeIntField * get_DocAllIDPROJECT_REM_GALLDOC(void);
   virtual void set_DocAllIDPROJECT_REM_GALLDOC(TFIBLargeIntField * DocAllIDPROJECT_REM_GALLDOC);

   virtual TFIBLargeIntField * get_DocAllIDBUSINOP_REM_GALLDOC(void);
   virtual void set_DocAllIDBUSINOP_REM_GALLDOC(TFIBLargeIntField * DocAllIDBUSINOP_REM_GALLDOC);

   virtual TFIBWideStringField * get_DocAllPREFIKS_NUM_REM_GALLDOC(void);
   virtual void set_DocAllPREFIKS_NUM_REM_GALLDOC(TFIBWideStringField * DocAllPREFIKS_NUM_REM_GALLDOC);

   virtual TFIBWideStringField * get_DocAllNAME_SPROJECT(void);
   virtual void set_DocAllNAME_SPROJECT(TFIBWideStringField * DocAllNAME_SPROJECT);

   virtual TFIBWideStringField * get_DocAllNAME_SBUSINESS_OPER(void);
   virtual void set_DocAllNAME_SBUSINESS_OPER(TFIBWideStringField * DocAllNAME_SBUSINESS_OPER);

   virtual TFIBLargeIntField * get_DocTIDHWOLD_REM_DZOPERT(void);
   virtual void set_DocTIDHWOLD_REM_DZOPERT(TFIBLargeIntField * DocTIDHWOLD_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDTNOM_REM_DZOPERT(void);
   virtual void set_DocTIDTNOM_REM_DZOPERT(TFIBLargeIntField * DocTIDTNOM_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDHW_DONOR_REM_DZOPERT(void);
   virtual void set_DocTIDHW_DONOR_REM_DZOPERT(TFIBLargeIntField * DocTIDHW_DONOR_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDTYP_USEL_REM_DZOPERT(void);
   virtual void set_DocTIDTYP_USEL_REM_DZOPERT(TFIBLargeIntField * DocTIDTYP_USEL_REM_DZOPERT);

   virtual TFIBLargeIntField * get_DocTIDMHRAN_REM_DZOPERT(void);
   virtual void set_DocTIDMHRAN_REM_DZOPERT(TFIBLargeIntField * DocTIDMHRAN_REM_DZOPERT);

   virtual TFIBWideStringField * get_DocTSERNUM_REM_SHARDWARE(void);
   virtual void set_DocTSERNUM_REM_SHARDWARE(TFIBWideStringField * DocTSERNUM_REM_SHARDWARE);

   virtual TFIBWideStringField * get_DocTOLD_NAME_REM_SHARDWARE(void);
   virtual void set_DocTOLD_NAME_REM_SHARDWARE(TFIBWideStringField * DocTOLD_NAME_REM_SHARDWARE);

   virtual TFIBIntegerField * get_DocTOLD_CODE_REM_SHARDWARE(void);
   virtual void set_DocTOLD_CODE_REM_SHARDWARE(TFIBIntegerField * DocTOLD_CODE_REM_SHARDWARE);

   virtual TFIBWideStringField * get_DocTOLD_SERNUM_REM_SHARDWARE(void);
   virtual void set_DocTOLD_SERNUM_REM_SHARDWARE(TFIBWideStringField * DocTOLD_SERNUM_REM_SHARDWARE);

   virtual TFIBWideStringField * get_DocTDONOR_NAME_REM_SHARDWARE(void);
   virtual void set_DocTDONOR_NAME_REM_SHARDWARE(TFIBWideStringField * DocTDONOR_NAME_REM_SHARDWARE);

   virtual TFIBIntegerField * get_DocTDONOR_CODE_REM_SHARDWARE(void);
   virtual void set_DocTDONOR_CODE_REM_SHARDWARE(TFIBIntegerField * DocTDONOR_CODE_REM_SHARDWARE);

   virtual TFIBWideStringField * get_DocTDONOR_SERNUM_REM_SHARDWARE(void);
   virtual void set_DocTDONOR_SERNUM_REM_SHARDWARE(TFIBWideStringField * DocTDONOR_SERNUM_REM_SHARDWARE);

   virtual TFIBWideStringField * get_DocTNAME_STNOM(void);
   virtual void set_DocTNAME_STNOM(TFIBWideStringField * DocTNAME_STNOM);

   virtual TFIBWideStringField * get_DocTNAME_SMHRAN(void);
   virtual void set_DocTNAME_SMHRAN(TFIBWideStringField * DocTNAME_SMHRAN);

   virtual TFIBWideStringField * get_DocTNAME_REM_STYPUSLOV(void);
   virtual void set_DocTNAME_REM_STYPUSLOV(TFIBWideStringField * DocTNAME_REM_STYPUSLOV);

   virtual __int64 get_IdDoc(void);
   virtual void set_IdDoc(__int64 IdDoc);

   virtual bool get_Prosmotr(void);
   virtual void set_Prosmotr(bool Prosmotr);

   virtual bool NewDoc(void);
   virtual bool OpenDoc(__int64 id);
   virtual bool SaveDoc(void);
   virtual bool DeleteDoc(__int64 id);
   virtual bool DvRegDoc(void);
   virtual bool CancelDvRegDoc(void);
   virtual void TableAppend(void);
   virtual void TableDelete(void);
};
#define CLSID_TREM_DMDocZOperImpl __uuidof(TREM_DMDocZOperImpl)
#endif
