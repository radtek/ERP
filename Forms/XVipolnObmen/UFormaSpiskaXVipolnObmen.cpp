//---------------------------------------------------------------------------

#include "vcl.h"
#pragma hdrstop

#include "UFormaSpiskaXVipolnObmen.h"
#include "UGlobalConstant.h"
#include "UGlobalFunction.h"
#include "IConnectionInterface.h"
#include "IMainInterface.h"
#include "IMainCOMInterface.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxCheckBox"
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxStyles"
#pragma link "cxButtons"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxGridBandedTableView"
#pragma link "cxGridDBBandedTableView"
#pragma link "cxMemo"
#pragma link "cxSpinEdit"
#pragma link "cxButtonEdit"
#pragma link "cxImage"
#pragma link "cxTextEdit"
#pragma link "cxGridCardView"
#pragma link "cxGridDBCardView"
#pragma link "frxClass"
#pragma link "frxDesgn"
#pragma link "frxPreview"
#pragma link "cxPC"
#pragma link "cxImageComboBox"
#pragma link "cxContainer"
#pragma link "cxLabel"
#pragma link "cxMaskEdit"
#pragma resource "*.dfm"

//---------------------------------------------------------------------------
__fastcall TFormaSpiskaXVipolnObmen::TFormaSpiskaXVipolnObmen(TComponent* Owner)
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
bool TFormaSpiskaXVipolnObmen::Init(void)
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
InterfaceGlobalCom->kanCreateObject(ProgId_DMXVipolnObmen,IID_IDMXVipolnObmen,
								 (void**)&DM);
DM->Init(InterfaceMainObject,InterfaceImpl);

Vibor=false;
HintLabel->Caption="";

//�������� ������ ������� �������
//InterfaceGlobalCom->kanCreateObject("Oberon.DMTableExtPrintForm.1",IID_IDMTableExtPrintForm,
//												 (void**)&DMTableExtPrintForm);
//DMTableExtPrintForm->Init(InterfaceMainObject,InterfaceImpl);
//DMTableExtPrintForm->OpenTable(StringToGUID(Global_CLSID_THLP_FormaSpiskaSprPageElementImpl),false);
//DMTableExtPrintForm->Table->First();
//while (!DMTableExtPrintForm->Table->Eof)
//		{
//		TMenuItem *menu=new TMenuItem(PopupMenuExtModule);
//		menu->Caption=DMTableExtPrintForm->TableNAME_EXTPRINT_FORM->AsString;
//		menu->OnClick = PopupMenuExtModuleClick;
//		PopupMenuExtModule->Items->Add(menu);
//		//static_cast<TPopupMenu*>(Sender)->Items->Add(Item);
//		DMTableExtPrintForm->Table->Next();
//		}

cxGrid1DBTableView1->DataController->DataSource=DM->DataSourceTable;

//����������
DM_Connection->GetPrivDM(GCPRIV_DM_NoModule);
ExecPriv=DM_Connection->ExecPriv;
InsertPriv=DM_Connection->InsertPriv;
EditPriv=DM_Connection->EditPriv;
DeletePriv=DM_Connection->DeletePriv;


IntrvalcxSpinEdit->Text=10;
UpdateForm();

result=true;
return result;
}
//---------------------------------------------------------------------------
int TFormaSpiskaXVipolnObmen::Done(void)
{

return -1;
}
//---------------------------------------------------------------------------
void TFormaSpiskaXVipolnObmen::UpdateForm(void)
{
Timer1->Interval=6000 * StrToInt(IntrvalcxSpinEdit->Text);
Timer1->Enabled=true;



LabelNom->Caption=HeaderText;
DM->OpenTable();

}
//---------------------------------------------------------------------------

void __fastcall TFormaSpiskaXVipolnObmen::FormClose(TObject *Sender,
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
//DMTableExtPrintForm->kanRelease();
DM->kanRelease();
Action=caFree;
if (flDeleteImpl==true)
	{
	if (FunctionDeleteImpl) FunctionDeleteImpl();
	}
}

//--------------------------------------------------------------------------










//---------------------------------------------------------------------------
//������� ������
void __fastcall TFormaSpiskaXVipolnObmen::PopupMenuExtModuleClick(TObject *Sender)
{
int i= ((TMenuItem*)Sender)->MenuIndex;
DMTableExtPrintForm->Table->First();
DMTableExtPrintForm->Table->MoveBy(i);
RunExternalModule(glStrToInt64(DMTableExtPrintForm->TableID_EXTPRINT_FORM->AsString),
					DMTableExtPrintForm->TableTYPEMODULE_EXTPRINT_FORM->AsInteger);
}
//----------------------------------------------------------------------------
void TFormaSpiskaXVipolnObmen::RunExternalModule(__int64 id_module, int type_module)
{
IFormaRunExternalModule * module;
InterfaceGlobalCom->kanCreateObject("Oberon.FormaRunExternalModule.1",IID_IFormaRunExternalModule,
						 (void**)&module);
module->Init(InterfaceMainObject,InterfaceImpl);
module->IdModule=id_module;
module->TypeTable=1;

module->ClearModule();
module->LoadModule();


//��������� ������� ������
//TScriptDMDocRealRozn * scr_doc;
if (type_module==1 || type_module==2)
	{
//
//	//���� �������� ����� TScriptDMDocRealRozn
//	//������ ��� ������ � ����������
//	scr_doc=new TScriptDMDocRealRozn();
//	scr_doc->AddClassesInScript(module);
//	//���� �������� ������� DM
//	scr_doc->DM=DM;
//	module->fsScript1->AddObject("TecDMDocRealRozn",scr_doc);
	}

if (type_module==3)
	{  //���� �������� ���������� ������, ��� �������  IDDOC
	module->SetInt64Variables("glId", glStrToInt64(DM->TableID_XVIPOLN_OBMEN->AsString));
	}

module->ExecuteModule();


}
//-----------------------------------------------------------------------------
void __fastcall TFormaSpiskaXVipolnObmen::ActionCloseExecute(TObject *Sender)
{
TypeEvent=0;
Close();
}
//---------------------------------------------------------------------------
int TFormaSpiskaXVipolnObmen::ExternalEvent(IkanUnknown * pUnk,   //��������� �� �������� ������
									REFIID id_object,      //��� ��������� �������
									int type_event,     //��� ������� � �������� �������
									int number_procedure_end  //����� ��������� � ���. �����, �������������� ������� ������
									)
{



return -1;
}
//-----------------------------------------------------------------------------

void __fastcall TFormaSpiskaXVipolnObmen::Timer1Timer(TObject *Sender)
{
UpdateForm();
}
//---------------------------------------------------------------------------

void __fastcall TFormaSpiskaXVipolnObmen::ToolButtonUpdateFormClick(TObject *Sender)

{
UpdateForm();
}
//---------------------------------------------------------------------------

