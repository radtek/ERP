//---------------------------------------------------------------------------

#ifndef UREM_DMDocVZipVosvratPostH
#define UREM_DMDocVZipVosvratPostH
//---------------------------------------------------------------------------
#include "IDMFibConnection.h"

//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>

#include "FIBDatabase.hpp"
#include "FIBDataSet.hpp"
#include "pFIBDatabase.hpp"
#include "pFIBDataSet.hpp"
#include "FIBQuery.hpp"
#include "pFIBQuery.hpp"
//---------------------------------------------------------------------------
class TREM_DMDocVZipVosvratPost : public TDataModule
{
__published:	// IDE-managed Components
        TDataSource *DataSourceDoc;
        TDataSource *DataSourceDocT;
        TDataSource *DataSourceDocAll;
	TpFIBDataSet *DocAll;
	TpFIBDataSet *Doc;
	TpFIBDataSet *DocT;
	TpFIBTransaction *IBTr;
	TpFIBTransaction *IBTrUpdate;
	TpFIBTransaction *IBTrDvReg;
	TpFIBDataSet *NumDoc;
	TpFIBQuery *pFIBQ;
	TpFIBQuery *QueryCancelDvReg;
	TpFIBQuery *QueryDvReg;
	TFIBLargeIntField *DocAllID_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDBASE_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDFIRM_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDSKLAD_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDKLIENT_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDUSER_REM_GALLDOC;
	TFIBDateTimeField *DocAllPOS_REM_GALLDOC;
	TFIBIntegerField *DocAllNUM_REM_GALLDOC;
	TFIBSmallIntField *DocAllPR_REM_GALLDOC;
	TFIBWideStringField *DocAllTDOC_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDDOCOSN_REM_GALLDOC;
	TFIBIntegerField *DocAllTYPEEXTDOC_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDEXTDOC_REM_GALLDOC;
	TFIBBCDField *DocAllSUM_REM_GALLDOC;
	TFIBWideStringField *DocAllFNAME_USER;
	TFIBWideStringField *DocAllNAME_SINFBASE_OBMEN;
	TFIBWideStringField *DocAllNAMEFIRM;
	TFIBWideStringField *DocAllNAMESKLAD;
	TFIBWideStringField *DocAllNAMEKLIENT;
	TFIBLargeIntField *DocAllIDPROJECT_REM_GALLDOC;
	TFIBLargeIntField *DocAllIDBUSINOP_REM_GALLDOC;
	TFIBWideStringField *DocAllPREFIKS_NUM_REM_GALLDOC;
	TFIBWideStringField *DocAllNAME_SPROJECT;
	TFIBWideStringField *DocAllNAME_SBUSINESS_OPER;
	TFIBLargeIntField *DocAllIDOBJECT_REM_GALLDOC;
	TFIBWideStringField *DocAllNAME_SOBJECT;
	TFIBLargeIntField *DocID_REM_DVZVPO;
	TFIBLargeIntField *DocIDBASE_REM_DVZVPO;
	TFIBLargeIntField *DocIDDOC_REM_DVZVPO;
	TFIBWideStringField *DocDESCR_REM_DVZVPO;
	TFIBIntegerField *DocOPER_REM_DVZVPO;
	TFIBLargeIntField *DocTID_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDBASE_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDDOC_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDTNOM_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDNOM_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDZ_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDHW_REM_DVZVPOT;
	TFIBLargeIntField *DocTIDTVZIP_REM_DVZVPOT;
	TFIBBCDField *DocTKOL_REM_DVZVPOT;
	TFIBWideStringField *DocTNAME_REM_Z;
	TFIBIntegerField *DocTNUM_REM_Z;
	TFIBDateTimeField *DocTPOS_REM_Z;
	TFIBWideStringField *DocTSERNUM_REM_Z;
	TFIBWideStringField *DocTSERNUM2_REM_Z;
	TFIBWideStringField *DocTKLIENT_NAME_REM_Z;
	TFIBWideStringField *DocTMODEL_REM_Z;
	TFIBWideStringField *DocTNAME_STNOM;
	TFIBWideStringField *DocTNAMENOM;
	TFIBWideStringField *DocTNAME_REM_STVZIP;
	TFIBWideStringField *DocTNAME_REM_SHARDWARE;
	TFIBWideStringField *DocTSERNUM_REM_SHARDWARE;
	TFIBWideStringField *DocTSERNUM2_REM_SHARDWARE;
	TFIBWideStringField *DocTNAME_REM_SPRMODEL;
	TIntegerField *DocTRECNO;
	TFIBIntegerField *DocTCODENOM;
	TFIBWideStringField *DocTARTNOM;
	TFIBLargeIntField *DocTIDMHRAN_REM_DVZVPOT;
	TFIBWideStringField *DocTNAME_SMHRAN;
        void __fastcall DataModuleDestroy(TObject *Sender);
	void __fastcall DocTNewRecord(TDataSet *DataSet);
	void __fastcall DocTCalcFields(TDataSet *DataSet);
	void __fastcall DocNewRecord(TDataSet *DataSet);
	void __fastcall DocAllPOS_REM_GALLDOCChange(TField *Sender);
	void __fastcall DocAllIDBASE_REM_GALLDOCChange(TField *Sender);
private:	// User declarations

	bool ExecPriv, InsertPriv, EditPriv, DeletePriv;
		double OldSummaStr;
		double NewSummaStr;

		double OldSummaMexStr;
		double NewSummaMexStr;

			bool flGetNumberDoc;  //��� ��������� ������ ��������� �� �����
							  // ������ ��� �������� ����� ���������
public:		// User declarations
		__fastcall TREM_DMDocVZipVosvratPost(TComponent* Owner);

		typedef  void (__closure * TFunctionDeleteImplType)(void);
		TFunctionDeleteImplType FunctionDeleteImpl; //������� �������� ���������� ����������
		bool flDeleteImpl;   //���� �� ������� ���������� ��� �������� �������� ������

		IDMFibConnection * DM_Connection;
		IkanCom *InterfaceGlobalCom;
		IkanUnknown * InterfaceMainObject;
		IkanUnknown * InterfaceOwnerObject;
		IkanUnknown * InterfaceImpl; //��������� ������ ����������
		GUID ClsIdImpl;				 //GUID ������ ����������

		//IMainInterface
		int CodeError;
		UnicodeString TextError;

		bool Init(void);
		int  Done(void);



		//������� ���������

		__int64 IdDoc;           //������������� ������� ������
		bool Prosmotr;    //������ ��������

		bool NewDoc(void);
		bool OpenDoc(__int64 id);
		bool SaveDoc(void);
		bool DeleteDoc(__int64 id);

        bool DvRegDoc(void);
		bool CancelDvRegDoc(void);

		void TableAppend(void);
		void TableDelete(void);

		int GetNumberNewDoc(void);



};
//---------------------------------------------------------------------------
extern PACKAGE TREM_DMDocVZipVosvratPost *REM_DMDocVZipVosvratPost;
//---------------------------------------------------------------------------
#endif
