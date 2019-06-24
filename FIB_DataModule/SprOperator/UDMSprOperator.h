//---------------------------------------------------------------------------

#ifndef UDMSprOperatorH
#define UDMSprOperatorH
//---------------------------------------------------------------------------

#include "IDMFibConnection.h"
//----------------------------------------------------------------------------
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
class TDMSprOperator : public TDataModule
{
__published:	// IDE-managed Components
        TDataSource *DataSourceTable;
        TDataSource *DataSourceElement;
	TpFIBDataSet *Table;
	TpFIBDataSet *Element;
	TpFIBTransaction *IBTr;
	TpFIBTransaction *IBTrUpdate;
	TIntegerField *TableRECNO;
	TpFIBQuery *pFIBQ;
	TFIBLargeIntField *TableID_SPRODUCER;
	TFIBLargeIntField *TableIDBASE_SPRODUCER;
	TFIBWideStringField *TableGID_SPRODUCER;
	TFIBWideStringField *TableNAME_SPRODUCER;
	TFIBLargeIntField *TableIDKLIENT_SPRODUCER;
	TFIBWideStringField *TableNAMEKLIENT;
	TFIBWideStringField *TableINNKLIENT;
	TFIBLargeIntField *ElementID_SPRODUCER;
	TFIBLargeIntField *ElementIDBASE_SPRODUCER;
	TFIBWideStringField *ElementGID_SPRODUCER;
	TFIBWideStringField *ElementNAME_SPRODUCER;
	TFIBLargeIntField *ElementIDKLIENT_SPRODUCER;
	TFIBWideStringField *ElementNAMEKLIENT;
	TFIBLargeIntField *ElementIDPOST_ZIP_SPRODUCER;
	TFIBWideStringField *ElementPOST_ZIP_NAME;
        void __fastcall DataModuleDestroy(TObject *Sender);
private:	// User declarations


bool ExecPriv, InsertPriv, EditPriv, DeletePriv;

public:		// User declarations
		__fastcall TDMSprOperator(TComponent* Owner);

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

        bool OpenTable();
		bool  OpenElement(__int64 id);  //���������� ���������� ���������
		bool NewElement();
        bool SaveElement(void);
        void CloseElement(void);
		bool DeleteElement(__int64 id);

		__int64 GetIdElementPoName(UnicodeString   name);
		int GetIndexInTablePoId(__int64 id_element);

		__int64 GetIdElementPoGid(UnicodeString gid);
		UnicodeString GetGidElementPoId(__int64 id);

};
//---------------------------------------------------------------------------
extern PACKAGE TDMSprOperator *DMSprOperator;
//---------------------------------------------------------------------------
#endif
