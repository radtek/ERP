//---------------------------------------------------------------------------

#include "vcl.h"
#pragma hdrstop
//----------------------------------------------------------------------------
#include "UDMDocVipBanka.h"
#include "UGlobalConstant.h"
#include "UGlobalFunction.h"
#include "IDMSetup.h"
#include "IDMSprNom.h"
#include "IDMTableNumberDoc.h"
#include "IConnectionInterface.h"
#include "IMainInterface.h"
#include "IMainCOMInterface.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "FIBDatabase"
#pragma link "FIBDataSet"
#pragma link "pFIBDatabase"
#pragma link "pFIBDataSet"
#pragma link "FIBQuery"
#pragma link "pFIBQuery"
#pragma resource "*.dfm"


//---------------------------------------------------------------------------
__fastcall TDMDocVipBanka::TDMDocVipBanka(TComponent* Owner)
        : TDataModule(Owner)
{
FunctionDeleteImpl=0;
flDeleteImpl=true;
InterfaceMainObject=0;
InterfaceOwnerObject=0;
DM_Connection=0;
InterfaceGlobalCom=0;
}
//---------------------------------------------------------------------------

void __fastcall TDMDocVipBanka::DataModuleCreate(TObject *Sender)
{

Prosmotr=false;
flGetNumberDoc=true;
}
//---------------------------------------------------------------------------
bool TDMDocVipBanka::Init(void)
{
bool result=false;
if (InterfaceMainObject>0)
	{
	//������� ����������
	IConnectionInterface * i_connection;
	InterfaceMainObject->kanQueryInterface(IID_IConnectionInterface,(void**)&i_connection);
	DM_Connection=i_connection->GetFibConnection();
	i_connection->kanRelease();

	//������� ��������� COM ������� ��� �������� ����� ��������
	IMainCOMInterface * i_com;
	InterfaceMainObject->kanQueryInterface(IID_IMainCOMInterface,(void**)&i_com);
	InterfaceGlobalCom=i_com->GetCOM();
	i_com->kanRelease();
	}
IBTr->DefaultDatabase=DM_Connection->pFIBData;
IBTrUpdate->DefaultDatabase=DM_Connection->pFIBData;
IBTrDvReg->DefaultDatabase=DM_Connection->pFIBData;

DocAll->Database=DM_Connection->pFIBData;
Doc->Database=DM_Connection->pFIBData;
DocT->Database=DM_Connection->pFIBData;

NumDoc->Database=DM_Connection->pFIBData;

pFIBQ->Database=DM_Connection->pFIBData;

QueryCancelDvReg->Database=DM_Connection->pFIBData;
QueryDvReg->Database=DM_Connection->pFIBData;



//����������
DM_Connection->GetPrivDM(GCPRIV_DM_NoModule);
ExecPriv=DM_Connection->ExecPriv;
InsertPriv=DM_Connection->InsertPriv;
EditPriv=DM_Connection->EditPriv;
DeletePriv=DM_Connection->DeletePriv;


result=true;

return result;
}
//---------------------------------------------------------------------------
int TDMDocVipBanka::Done(void)
{

return -1;
}
//---------------------------------------------------------------------------
void __fastcall TDMDocVipBanka::DataModuleDestroy(TObject *Sender)
{

DocAll->Active=false;
Doc->Active=false;
DocT->Active=false;
NumDoc->Active=false;

if (flDeleteImpl==true)
	{
	if (FunctionDeleteImpl) FunctionDeleteImpl();
	}
}
//---------------------------------------------------------------------------

bool TDMDocVipBanka::NewDoc(void)
{
bool result=false;
flGetNumberDoc=false;

try
	{
	DocAll->Active=false;
	Doc->Active=false;
	DocT->Active=false;

	DocAll->Active=true;
	Doc->Active=true;
	DocT->Active=true;

	DocAll->Append();
	Doc->Append();

	IdDoc=DocAllIDDOC->AsInt64;


	DocAllPOSDOC->AsDateTime=Now();
	DocAllTDOC->AsString="VIPBANK";
	if (DM_Connection->UserInfoID_USER->AsInt64!=0)
		{
		DocAllIDUSERDOC->AsInt64=DM_Connection->UserInfoID_USER->AsInt64;
		DocAllFNAME_USER->AsString=DM_Connection->UserInfoFNAME_USER->AsString;
		}
	if (DM_Connection->UserInfoIDFIRM_USER->AsInt64!=0)
		{
		DocAllIDFIRMDOC->AsInt64=DM_Connection->UserInfoIDFIRM_USER->AsInt64;
		DocAllNAMEFIRM->AsString=DM_Connection->UserInfoNAMEFIRM->AsString;
		}
	if (DM_Connection->UserInfoIDSKLAD_USER->AsInt64!=0)
		{
		DocAllIDSKLDOC->AsInt64=DM_Connection->UserInfoIDSKLAD_USER->AsInt64;
		DocAllNAMESKLAD->AsString=DM_Connection->UserInfoNAMESKLAD->AsString;
		}
	if (DM_Connection->UserInfoIDBASE_SUSER->AsInt64!=0)
		{
		DocAllIDBASE_GALLDOC->AsInt64=DM_Connection->UserInfoIDBASE_SUSER->AsInt64;
		DocAllNAME_SINFBASE_OBMEN->AsString=DM_Connection->UserInfoNAME_SINFBASE_OBMEN->AsString;
		}
	DocAll->Post();

	result=true;
	}
catch(Exception &exception)
	{
	result=false;
	TextError=exception.Message;

	}

flGetNumberDoc=true;
DocAll->Edit();
GetNumberNewDoc();
DocAll->Post();
return result;
}
//---------------------------------------------------------------------------
int TDMDocVipBanka::GetNumberNewDoc(void)
{
int result=0;
if (flGetNumberDoc==false) return result;

//������� ����� ���������
NumDoc->Active=false;
NumDoc->ParamByName("PARAM_IDBASE")->AsString=DocAllIDBASE_GALLDOC->AsString;
NumDoc->ParamByName("PARAM_IDFIRM")->AsString=DocAllIDFIRMDOC->AsString;
NumDoc->ParamByName("PARAM_IDBSCHET")->AsString=DocIDBSCHET_DVIPBANK->AsString;

NumDoc->Open();
DocAllPREFIKS_NUM_GALLDOC->AsString=NumDoc->FieldByName("OUT_PREFIKS_DOC")->AsString;
DocAllNUMDOC->AsInteger=NumDoc->FieldByName("OUT_NUMDOC")->AsInteger;
NumDoc->Close();
result=DocAllNUMDOC->AsInteger;
return result;
}
//----------------------------------------------------------------------------
bool TDMDocVipBanka::OpenDoc(__int64 id)
{
bool result=false;

try
	{
	DocAll->Active=false;
	Doc->Active=false;
	DocT->Active=false;

	DocAll->ParamByName("PARAM_IDDOC")->AsInt64=id;
	Doc->ParamByName("PARAM_IDDOC")->AsInt64=id;
	DocAll->Active=true;
	Doc->Active=true;


	DocT->ParamByName("PARAM_IDDOC")->AsInt64=id;
	DocT->Active=true;

IDMSetup * DMSetup;
InterfaceGlobalCom->kanCreateObject("Oberon.DMSetup.1",IID_IDMSetup,
													(void**)&DMSetup);
DMSetup->Init(InterfaceMainObject,InterfaceOwnerObject);
	Prosmotr=DMSetup->ProveritPosZapretaRed(DocAllPOSDOC->AsDateTime);
DMSetup->kanRelease();

	DocAllIDBASE_GALLDOC->ReadOnly=true;

	IdDoc=DocAllIDDOC->AsInt64;
	result=false;
	}
catch(Exception &exception)
	{
	result=false;
	TextError=exception.Message;

	}
	
return result;
}
//-----------------------------------------------------------------------------
void TDMDocVipBanka::TableAppend()
{
DocT->Append();
}
//---------------------------------------------------------------------------
void TDMDocVipBanka::TableDelete(void)
{
DocT->Delete();
}
//---------------------------------------------------------------------------
bool TDMDocVipBanka::SaveDoc(void)
{
bool Res=false;

IDMSetup * DMSetup;
InterfaceGlobalCom->kanCreateObject("Oberon.DMSetup.1",IID_IDMSetup,
													(void**)&DMSetup);
DMSetup->Init(InterfaceMainObject,InterfaceOwnerObject);
Prosmotr=DMSetup->ProveritPosZapretaRed(DocAllPOSDOC->AsDateTime);
DMSetup->kanRelease();

if (Prosmotr==true)
        {

        TextError="������� ��������� ������ ������� ������� ��������������!";
        return Res;
		}
		
if (DM_Connection->UserInfoID_USER->AsString!=DocAllIDUSERDOC->AsString)
	{
	if (DM_Connection->UserInfoEDIT_CHUG_DOC_SUSER->AsInteger!=1)
		{

		TextError="������ ������������� ����� ���������!";
		return Res;
		}
	}

try
        {
        IdDoc=DocAllIDDOC->AsInt64;
		DocAll->ApplyUpdToBase();
		Doc->ApplyUpdToBase();
		DocT->ApplyUpdToBase();
		IBTrUpdate->Commit();
		DocAll->CommitUpdToCach();
		Doc->CommitUpdToCach();
		DocT->CommitUpdToCach();
        Res=true;
        OpenDoc(IdDoc);
        }
catch(Exception &exception)
				{
				IBTrUpdate->Rollback();
				Res=false;
				TextError=exception.Message;

				}

return Res;
}

//---------------------------------------------------------------------------
bool TDMDocVipBanka::DvRegDoc(void)
{
bool result=false;
if (Prosmotr==true)
		{

		TextError="������� ��������� ������ ������� ������� ��������������!";
		return result;
		}


try
        {
        if (CancelDvRegDoc()==true)
                {
				QueryDvReg->Close();
				QueryDvReg->ParamByName("PARAM_IDDOC")->AsInt64=IdDoc;
				QueryDvReg->ExecProc();
				IBTrDvReg->Commit();

                result=true;
                }
        }
catch(Exception &exception)
				{
				IBTrDvReg->Rollback();
				result=false;
				TextError=exception.Message;

				}


QueryDvReg->Close();
return result;
}

//---------------------------------------------------------------------------
bool TDMDocVipBanka::CancelDvRegDoc(void)
{
bool result=false;
if (Prosmotr==true)
		{

		TextError="������� ��������� ������ ������� ������� ��������������!";
		return result;
		}
try
		{
				QueryCancelDvReg->Close();
				QueryCancelDvReg->ParamByName("PARAM_IDDOC")->AsInt64=IdDoc;
				QueryCancelDvReg->ExecProc();
				IBTrDvReg->Commit();

				result=true;

		}
catch(Exception &exception)
				{
				IBTrDvReg->Rollback();
				result=false;
				TextError=exception.Message;

				}
				
QueryCancelDvReg->Close();
return result;
}

//---------------------------------------------------------------------------
void __fastcall TDMDocVipBanka::DocT1CalcFields(TDataSet *DataSet)
{
DocT->FieldByName("RECNO")->AsInteger=DocT->RecNo;
}

//---------------------------------------------------------------------------


bool TDMDocVipBanka::DeleteDoc(__int64 id)
{
bool res=false;

OpenDoc(id);
if (Prosmotr==true)
        {

        TextError="������� ��������� ������ ������� ������� ��������������!";
        return res;
		}

if (DM_Connection->UserInfoID_USER->AsString!=DocAllIDUSERDOC->AsString)
	{
	if (DM_Connection->UserInfoDEL_CHUG_DOC_SUSER->AsInteger!=1)
		{

		TextError="������ ������� ����� ���������!";
		return res;
		}
	}

try
        {
        if (CancelDvRegDoc()!=true)
                {
                res=false;
                return res;
                }

        DocT->First();
        while(!DocT->Eof)
                {
                //ShowMessage(IntToStr(DocT->RecNo));
                DocT->Delete();
                }

        Doc->Delete();
        DocAll->Delete();

        DocT->ApplyUpdates();
        Doc->ApplyUpdates();
        DocAll->ApplyUpdates();
		IBTrUpdate->Commit();
        res=true;
        }
catch(Exception &exception)
				{
				IBTrUpdate->Rollback();
				res=false;
				TextError=exception.Message;

				}
return res;

}

//---------------------------------------------------------------------------
void __fastcall TDMDocVipBanka::DocNewRecord(TDataSet *DataSet)
{
DocIDDOC_DVIPBANK->AsInt64=DocAllIDDOC->AsInt64;
if (DocAllIDBASE_GALLDOC->AsInt64!=0)
	{
	DocIDBASE_DVIPBANK->AsInt64=DocAllIDBASE_GALLDOC->AsInt64;
	}
}
//-----------------------------------------------------------------------------
void __fastcall TDMDocVipBanka::DocTNewRecord(TDataSet *DataSet)
{
DocTIDDOC_DVIPBANKT->AsInt64=DocAllIDDOC->AsInt64;

	if (DocAllIDBASE_GALLDOC->AsInt64!=0)
		{
		DocTIDBASE_DVIPBANKT->AsInt64=DocAllIDBASE_GALLDOC->AsInt64;
		}

}
//---------------------------------------------------------------------------

void __fastcall TDMDocVipBanka::DocAllPOSDOCChange(TField *Sender)
{
IDMSetup * DMSetup;
InterfaceGlobalCom->kanCreateObject("Oberon.DMSetup.1",IID_IDMSetup,
													(void**)&DMSetup);
DMSetup->Init(InterfaceMainObject,InterfaceOwnerObject);
Prosmotr=DMSetup->ProveritPosZapretaRed(DocAllPOSDOC->AsDateTime);
DMSetup->kanRelease();
}
//---------------------------------------------------------------------------


void __fastcall TDMDocVipBanka::DocTCalcFields(TDataSet *DataSet)
{
DocTRECNO->AsInteger=DocT->RecNo;	
}
//---------------------------------------------------------------------------

void __fastcall TDMDocVipBanka::DocAllIDBASE_GALLDOCChange(TField *Sender)
{

	if (DocAllIDBASE_GALLDOC->AsInt64!=0)
		{
		Doc->Edit();
		DocIDBASE_DVIPBANK->AsInt64=DocAllIDBASE_GALLDOC->AsInt64;
		Doc->Post();
		}   

	DocT->First();
	while (!DocT->Eof)
		{
		if (DocAllIDBASE_GALLDOC->AsInt64!=0)
			{
			DocT->Edit();
			DocTIDBASE_DVIPBANKT->AsInt64=DocAllIDBASE_GALLDOC->AsInt64;
			DocT->Post();
			}
		DocT->Next();
		}
GetNumberNewDoc();
}
//---------------------------------------------------------------------------








void __fastcall TDMDocVipBanka::DocIDBSCHET_DVIPBANKChange(TField *Sender)
{
DocAll->Edit();
GetNumberNewDoc();
DocAll->Post();
}
//---------------------------------------------------------------------------

void __fastcall TDMDocVipBanka::DocAllIDFIRMDOCChange(TField *Sender)
{
GetNumberNewDoc();
}
//---------------------------------------------------------------------------

