//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "UDMSprFactorValue.h"
#include "UGlobalConstant.h"
#include "UGlobalFunction.h"
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
__fastcall TDMSprFactorValue::TDMSprFactorValue(TComponent* Owner)
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
bool TDMSprFactorValue::Init(void)
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

Table->Database=DM_Connection->pFIBData;
Element->Database=DM_Connection->pFIBData;
Query->Database=DM_Connection->pFIBData;
FactorList->Database=DM_Connection->pFIBData;

//����������
DM_Connection->GetPrivDM(GCPRIV_DM_SprPrice);
ExecPriv=DM_Connection->ExecPriv;
InsertPriv=DM_Connection->InsertPriv;
EditPriv=DM_Connection->EditPriv;
DeletePriv=DM_Connection->DeletePriv;

result=true;

return result;
}
//---------------------------------------------------------------------------
int TDMSprFactorValue::Done(void)
{

return -1;
}
//---------------------------------------------------------------------------
void __fastcall TDMSprFactorValue::DataModuleDestroy(TObject *Sender)
{

Table->Active=false;
Element->Close();
Query->Close();
FactorList->Close();
if (flDeleteImpl==true)
	{
	if (FunctionDeleteImpl) FunctionDeleteImpl();
	}
}
//---------------------------------------------------------------------------
bool TDMSprFactorValue::OpenTable(__int64 id_produce)
{
bool result=true;
IdProduce=id_produce;
UpdateSpisokFactors();

Table->Active=false;
Table->ParamByName("PARAM_IDPRODUCE")->AsInt64=id_produce;
Table->Active=true;

return result;
}
//----------------------------------------------------------------------------
bool TDMSprFactorValue::SaveIsmen(void)
{
bool result=false;
if (Table->Active==true )
	{
	try
        {
		Table->ApplyUpdates();
		if (IBTrUpdate->Active==true)
			{
			IBTrUpdate->Commit();
			}
		OpenTable(IdProduce);
		result=true;
        }
	catch(Exception &exception)
		{
		result=false;
		TextError=exception.Message;
		}
	}
return result;
}
//----------------------------------------------------------------------------

bool  TDMSprFactorValue::NewElement(void)
{
bool result=true;
Element->Active=false;
Element->Open();
Element->Append();
return result;
}
//---------------------------------------------------------------------------

bool TDMSprFactorValue::OpenElement(__int64 id)
{
bool result=true;

Element->Active=false;
Element->ParamByName("PARAM_ID")->AsInt64=id;
Element->Active=true;


if (Element->RecordCount>0)
	{
	result=true;
	}
else
	{
	result=false;
	}
return result;
}
//---------------------------------------------------------------------------

bool TDMSprFactorValue::SaveElement()
{
bool result=false;

__int64 id=glStrToInt64(ElementID_SFACTOR_VAL->AsString);
try
        {
        Element->ApplyUpdates();
		IBTrUpdate->Commit();
		OpenElement(id);
		result=true;
        }
catch(Exception &exception)
		{
		TextError=exception.Message;
		result=false;
		}
		
return result;
}
//----------------------------------------------------------------------------
void TDMSprFactorValue::CancelIsmen(void)
{
Table->CancelUpdates();

}
//---------------------------------------------------------------------------
bool TDMSprFactorValue::DeleteElement(__int64 id)
{
bool result=false;
OpenElement(id);
if (Element->RecordCount==1)
        {
        Element->Delete();
        try
                {
                Element->ApplyUpdates();
				IBTrUpdate->Commit();
				result=true;
                }
		catch(Exception &exception)
				{
				IBTrUpdate->Rollback();
				TextError=exception.Message;
				result=false;
				}
		}
return result;
}
//---------------------------------------------------------------------------
__int64 TDMSprFactorValue::FindElement(__int64 id_factor, __int64 id_produce)
{
__int64 result=0;
Query->Close();
Query->SQL->Clear();
Query->SQL->Add("select ID_SFACTOR_VAL from SFACTOR_VAL ");
Query->SQL->Add(" where IDFACTOR_SFACTOR_VAL=:PARAM_IDFACTOR and IDPRODUCE_SFACTOR_VAL=:PARAM_IDPRODUCE ");
Query->ParamByName("PARAM_IDFACTOR")->AsInt64=id_factor;
Query->ParamByName("PARAM_IDPRODUCE")->AsInt64=id_produce;
Query->ExecQuery();
result=Query->FieldByName("ID_SFACTOR_VAL")->AsInt64;

Query->Close();
return result;
}
//---------------------------------------------------------------------------

void __fastcall TDMSprFactorValue::TableNewRecord(TDataSet *DataSet)
{
TableIDPRODUCE_SFACTOR_VAL->AsString=IdProduce;
TableIDFACTOR_SFACTOR_VAL->AsString=IdFactor;
}
//---------------------------------------------------------------------------

void __fastcall TDMSprFactorValue::ElementNewRecord(TDataSet *DataSet)
{
ElementIDPRODUCE_SFACTOR_VAL->AsString=IdProduce;
ElementIDFACTOR_SFACTOR_VAL->AsString=IdFactor;
}
//---------------------------------------------------------------------------
bool TDMSprFactorValue::UpdateSpisokFactors(void)
{
bool result=true;
FactorList->Active=false;
FactorList->Active=true;
return result;
}
//----------------------------------------------------------------------------






