//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UHOT_FormaElementaSprTypePosel.h"
#include "UGlobalConstant.h"
#include "UGlobalFunction.h"
#include "IConnectionInterface.h"
#include "IMainInterface.h"
#include "IMainCOMInterface.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxDBEdit"
#pragma link "cxEdit"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxTextEdit"
#pragma link "cxButtonEdit"
#pragma link "cxMaskEdit"
#pragma link "cxCalc"
#pragma link "cxDropDownEdit"
#pragma link "cxCheckBox"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeels"
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall THOT_FormaElementaSprTypePosel::THOT_FormaElementaSprTypePosel(TComponent* Owner)
        : TForm(Owner)
{
FunctionDeleteImpl=0;
flDeleteImpl=true;
InterfaceMainObject=0;
InterfaceOwnerObject=0;
DM_Connection=0;
InterfaceGlobalCom=0;
TypeEvent=0;
}
//---------------------------------------------------------------------------
bool THOT_FormaElementaSprTypePosel::Init(void)
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

InterfaceGlobalCom->kanCreateObject("Oberon.HOT_DMSprTypePosel.1",IID_IHOT_DMSprTypePosel,
												 (void**)&DM);
DM->Init(InterfaceMainObject,InterfaceImpl);

NamecxDBTextEdit->DataBinding->DataSource=DM->DataSourceElement;
KolMcxDBCalcEdit->DataBinding->DataSource=DM->DataSourceElement;
AllcxDBCheckBox->DataBinding->DataSource=DM->DataSourceElement;

DM_Connection->GetPrivDM(GCPRIV_DM_NoModule);
ExecPriv=DM_Connection->ExecPriv;
InsertPriv=DM_Connection->InsertPriv;
EditPriv=DM_Connection->EditPriv;
DeletePriv=DM_Connection->DeletePriv;

result=true;

return result;
}
//---------------------------------------------------------------------------
int THOT_FormaElementaSprTypePosel::Done(void)
{

return -1;
}
//---------------------------------------------------------------------------
void __fastcall THOT_FormaElementaSprTypePosel::FormClose(TObject *Sender,
      TCloseAction &Action)
{

//������� ICallBack ��� �������� ������� � ���������� �����
if(InterfaceOwnerObject)
	{
	IkanCallBack * i_callback=0;
	InterfaceOwnerObject->kanQueryInterface(IID_IkanCallBack,(void**)&i_callback);
	if (i_callback)
		{
		i_callback->kanExternalEvent(InterfaceImpl,ClsIdImpl,TypeEvent,NumberProcVibor);
		}
	i_callback->kanRelease();
	}
DM->kanRelease();
Action=caFree;
if (flDeleteImpl==true)
	{
	if (FunctionDeleteImpl) FunctionDeleteImpl();
	}
}
//---------------------------------------------------------------------------
int THOT_FormaElementaSprTypePosel::ExternalEvent(IkanUnknown * pUnk,   //��������� �� �������� ������
									REFIID id_object,      //��� ��������� �������
									int type_event,     //��� ������� � �������� �������
									int number_procedure_end  //����� ��������� � ���. �����, �������������� ������� ������
									)
{

return -1;
}
//--------------------------------------------------------------------------
void THOT_FormaElementaSprTypePosel::UpdateForm(void)
{
//


}
//---------------------------------------------------------------------------
void __fastcall THOT_FormaElementaSprTypePosel::ActionOpenHelpExecute(TObject *Sender)
{
Application->HelpJump("Hotel/Spr/SprTypePos");
}
//---------------------------------------------------------------------------




void __fastcall THOT_FormaElementaSprTypePosel::ActionCloseExecute(TObject *Sender)

{
Close();
}
//---------------------------------------------------------------------------

void __fastcall THOT_FormaElementaSprTypePosel::ActionOKExecute(TObject *Sender)
{
if (DM->SaveElement()==true)
		{
		Close();
		}
else
	{
	ShowMessage("������ ��� ������ �������� �����������: "+DM->TextError);
	}
}
//---------------------------------------------------------------------------

