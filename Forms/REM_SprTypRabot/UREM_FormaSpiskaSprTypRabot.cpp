//---------------------------------------------------------------------------
#include "vcl.h"
#pragma hdrstop

//-----------------------------------------------------------------------------
#include "UREM_FormaSpiskaSprTypRabot.h"

#include "IFormaRunExternalModule.h"
#include "UGlobalConstant.h"
#include "UGlobalFunction.h"
#include "IConnectionInterface.h"
#include "IMainInterface.h"
#include "IMainCOMInterface.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxTreeView"
#pragma link "cxButtonEdit"
#pragma link "cxClasses"
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
#pragma link "cxDropDownEdit"
#pragma link "cxMaskEdit"
#pragma link "cxTextEdit"
#pragma link "cxLookAndFeels"
#pragma resource "*.dfm"

//---------------------------------------------------------------------------
__fastcall TREM_FormaSpiskaSprTypRabot::TREM_FormaSpiskaSprTypRabot(TComponent* Owner)
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
bool TREM_FormaSpiskaSprTypRabot::Init(void)
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

InterfaceGlobalCom->kanCreateObject(ProgId_REM_DMSprTypRabot,IID_IREM_DMSprTypRabot, (void**)&DM);
DM->Init(InterfaceMainObject,InterfaceImpl);

InterfaceGlobalCom->kanCreateObject(ProgId_REM_DMSprGrpTypRabot,IID_IREM_DMSprGrpTypRabot, (void**)&DMGrp);
DMGrp->Init(InterfaceMainObject,InterfaceImpl);



cxGrid1DBTableView1->DataController->DataSource=DM->DataSourceTable;

flAllElement=false;
flVibor=false;
TypeEvent=0;;
ViborRekvisit=NO;
flPodbor=false;

LabelNameGrp->Caption="���. ������\\...";
HintLabel->Caption="";



//�������� ������ ������� �������
InterfaceGlobalCom->kanCreateObject("Oberon.DMTableExtPrintForm.1",IID_IDMTableExtPrintForm,
									 (void**)&DMTableExtPrintForm);
DMTableExtPrintForm->Init(InterfaceMainObject,InterfaceImpl);

DMTableExtPrintForm->OpenTable(StringToGUID(Global_CLSID_TREM_FormaSpiskaSprTypRabotImpl),false);
DMTableExtPrintForm->Table->First();
while (!DMTableExtPrintForm->Table->Eof)
		{
		TMenuItem *menu=new TMenuItem(PopupMenuExtModule);
		menu->Caption=DMTableExtPrintForm->TableNAME_EXTPRINT_FORM->AsString;
		menu->OnClick = PopupMenuExtModuleClick;
		PopupMenuExtModule->Items->Add(menu);
		//static_cast<TPopupMenu*>(Sender)->Items->Add(Item);
		DMTableExtPrintForm->Table->Next();
		}

//����������
DM_Connection->GetPrivDM(GCPRIV_DM_NoModule);
ExecPriv=DM_Connection->ExecPriv;
InsertPriv=DM_Connection->InsertPriv;
EditPriv=DM_Connection->EditPriv;
DeletePriv=DM_Connection->DeletePriv;


UpdateForm();

result=true;
return result;
}
//---------------------------------------------------------------------------
int TREM_FormaSpiskaSprTypRabot::Done(void)
{

return -1;
}
//---------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::UpdateForm(void)
{

DM->DataSourceTable->Enabled=false;

DM->OpenTable(IdGrp,flAllElement);


TLocateOptions Opt;
Opt<<loCaseInsensitive;
DM->Table->Locate("ID_REM_STYPRABOT",IdElement,Opt);
UpdateDerevo();
DM->DataSourceTable->Enabled=true;


}
//---------------------------------------------------------------------------
void __fastcall TREM_FormaSpiskaSprTypRabot::FormClose(TObject *Sender,
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
DMGrp->kanRelease();
DMTableExtPrintForm->kanRelease();
Action=caFree;
}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::UpdateDerevo()
{
//������� ������ �� ����������� ������
if (cxTreeView1->Items->Count>0)
        {
		for (int i=0;i<cxTreeView1->Items->Item[0]->Count;i++)
                {
				delete (__int64*)cxTreeView1->Items->Item[i]->Data;
                }
        }

//
DMGrp->OpenTable();
cxTreeView1->Items->Clear();
__int64 *lpIDGrp=new __int64;
*lpIDGrp=0;

cxTreeView1->Items->AddObject(NULL,"���. ������",lpIDGrp);

cxTreeView1->Items->Item[0]->Data=lpIDGrp;
DMGrp->Table->First();
while (! DMGrp->Table->Eof)
        {
		__int64 IDGr=glStrToInt64(DMGrp->TableIDGRP_REM_STYPRABOT_GRP->AsString);
		__int64 IDData;
        //ShowMessage("IDGrp="+IntToStr(IDGrp));
		for (int i=0;i<cxTreeView1->Items->Count;i++)
                {

				IDData=*(__int64*)cxTreeView1->Items->Item[i]->Data;
                //ShowMessage("IDGrp="+IntToStr(IDGrp)+" IDData="+IntToStr(IDData));

                if (IDGr==IDData)
                        {
						 lpIDGrp=new __int64;
						  *lpIDGrp=glStrToInt64(DMGrp->TableID_REM_STYPRABOT_GRP->AsString);
                         // ShowMessage(" ������� ID="+IntToStr(*lpIDGrp));
						 cxTreeView1->Items->AddChildObjectFirst(cxTreeView1->Items->Item[i],
						 DMGrp->TableNAME_REM_STYPRABOT_GRP->AsString, lpIDGrp);
                         break;
                       }

                }
        DMGrp->Table->Next();
        }
cxTreeView1->AlphaSort(true);

for (int i=0;i<cxTreeView1->Items->Count;i++)
        {
		__int64 IDData=*(__int64*)cxTreeView1->Items->Item[i]->Data;
                if (IdGrp==IDData)
                        {
						cxTreeView1->Selected=cxTreeView1->Items->Item[i];
                        break;
                        }
		}
}
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------
int TREM_FormaSpiskaSprTypRabot::ExternalEvent(IkanUnknown * pUnk,   //��������� �� �������� ������
									REFIID id_object,      //��� ��������� �������
									int type_event,     //��� ������� � �������� �������
									int number_procedure_end  //����� ��������� � ���. �����, �������������� ������� ������
									)
{
if (number_procedure_end==ViborGroupElement)
        {

        UpdateDerevo();
        }


if (number_procedure_end==ViborElement)
		{
		if (type_event==1)
				{
				 EndEditElement();
				}
		FormaElementa=0;
		}

if (number_procedure_end==ViborGrp)
		{
		if (type_event==1)
				{
				 EndEditGrp();
				}
		FormaGrpElementa=0;
		}

//if(ViborRekvisit!=RekvisitPodborNom)
//        {
        ViborRekvisit=NO;

//        }
return -1;
}
//--------------------------------------------------------------------------

// �������������� �����
void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonNewScaleClick(TObject *Sender)
{
OpenFormNewGrpElement();
}
//---------------------------------------------------------------------------
void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonEdiScaleClick(TObject *Sender)
{
OpenFormGrpElement();
}
//---------------------------------------------------------------------------
void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonDeleteScaleClick(
      TObject *Sender)
{
DeleteGrpElement();
}
//---------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::OpenFormGrpElement()
{

if (FormaGrpElementa==0)
		{
		if (cxTreeView1->Selected!=NULL)
				{
				InterfaceGlobalCom->kanCreateObject(ProgId_REM_FormaElementaSprTypRabotGrp,IID_IREM_FormaElementaSprTypRabotGrp,
													(void**)&FormaGrpElementa);
				FormaGrpElementa->Init(InterfaceMainObject,InterfaceImpl);
				FormaGrpElementa->DM->OpenElement(*(__int64*)cxTreeView1->Selected->Data);
				FormaGrpElementa->NumberProcVibor=ViborGrp;
				}
		}

}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::OpenFormNewGrpElement()
{
if (FormaGrpElementa==0)
		{

				InterfaceGlobalCom->kanCreateObject(ProgId_REM_FormaElementaSprTypRabotGrp,IID_IREM_FormaElementaSprTypRabotGrp,
													(void**)&FormaGrpElementa);
				FormaGrpElementa->Init(InterfaceMainObject,InterfaceImpl);
			if (!FormaGrpElementa) return;

			if (cxTreeView1->Selected!=NULL)
				{
				IdGrp=*(__int64*)cxTreeView1->Selected->Data;
				FormaGrpElementa->DM->NewElement(IdGrp);
				}
			else
				{
				FormaGrpElementa->DM->NewElement(0);
				}
			FormaGrpElementa->NumberProcVibor=ViborGrp;

		}
}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::DeleteGrpElement()
{
		UnicodeString V="�� ������������� ������ ������� "
		+LabelNameGrp->Caption+"?";
		UnicodeString Z="������������� �������� ������";
		if (Application->MessageBox(V.c_str(),Z.c_str(),MB_YESNO)!=IDYES)
				{
				return;
				}

		if (cxTreeView1->Selected!=NULL)
				{
				DMGrp->DeleteElement(*(__int64*)cxTreeView1->Selected->Data);
				UpdateDerevo();
				}

}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::EndEditGrp(void)
{
FormaGrpElementa=0;
UpdateDerevo();
}
//--------------------------------------------------------------------------


void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonAllClick(TObject *Sender)
{
if (flAllElement==true)
        {
		flAllElement=false;
		LabelNameGrp->Caption="...\\ "+cxTreeView1->Selected->Text+" \\";
        }
else
        {
		flAllElement=true ;
        LabelNameGrp->Caption="��� ��������...";
		}

IdGrp=glStrToInt64(DM->TableIDGRP_REM_STYPRABOT->AsString);

DM->OpenTable(IdGrp,flAllElement);
}
//---------------------------------------------------------------------------


void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonIsmGrpClick(TObject *Sender)
{
if (cxTreeView1->Selected!=NULL)
		{  //������������� �������
		TcxGridViewData * AViewData=cxGrid1DBTableView1->ViewData;
		for(int i=0;i<AViewData->RowCount;i++)
			{
			if (AViewData->Records[i]->Selected==true)
				{
				__int64 id=AViewData->Records[i]->Values[cxGrid1DBTableView1ID_REM_STYPRABOT->Index];
				DM->ChancheGrp(*(__int64*)cxTreeView1->Selected->Data,id);
				}
			}
		}
DM->OpenTable(IdGrp,flAllElement);
}
//---------------------------------------------------------------------------











//������� �� ����� ������
void __fastcall TREM_FormaSpiskaSprTypRabot::cxTreeView1DblClick(TObject *Sender)
{
if (cxTreeView1->Selected!=NULL)
		{
		if(flAllElement!=true)
				{
				LabelNameGrp->Caption="...\\ "+cxTreeView1->Selected->Text+" \\";
				}
		IdGrp=*(__int64*)cxTreeView1->Selected->Data;
		DM->OpenTable(IdGrp,flAllElement);
		}
}
//---------------------------------------------------------------------------
void __fastcall TREM_FormaSpiskaSprTypRabot::cxTreeView1KeyPress(TObject *Sender,
	  char &Key)
{
if (Key==VK_RETURN)
		{
		if (cxTreeView1->Selected!=NULL)
			{
			if(flAllElement!=true)
				{
				LabelNameGrp->Caption="...\\ "+cxTreeView1->Selected->Text+" \\";
				}
			IdGrp=*(__int64*)cxTreeView1->Selected->Data;
			DM->OpenTable(IdGrp,flAllElement);
			}
		}
}
//---------------------------------------------------------------------------
void __fastcall TREM_FormaSpiskaSprTypRabot::cxGrid1DBTableView1DblClick(
      TObject *Sender)
{
if (flVibor==true)
		{
		if (flPodbor==true)
				{
				//OpenFormPodboraNom();
				}
		else
				{
				TypeEvent=1;
				DM->OpenElement(glStrToInt64(DM->TableID_REM_STYPRABOT->AsString));
				Close();
				}
		}
else
		{
		IdElement=glStrToInt64(DM->TableID_REM_STYPRABOT->AsString);
		OpenFormElement();
		}
}
//---------------------------------------------------------------------------

void __fastcall TREM_FormaSpiskaSprTypRabot::cxGrid1DBTableView1KeyPress(
      TObject *Sender, char &Key)
{
if (Key==VK_RETURN)
		{
		if (flVibor==true)
				{
				if (flPodbor==true)
						{
						//OpenFormPodboraNom();
						}
				else
						{
						TypeEvent=1;
						DM->OpenElement(glStrToInt64(DM->TableID_REM_STYPRABOT->AsString));
						Close();
						}
				}
		else
				{
				OpenFormElement();
				}
		}
}
//---------------------------------------------------------------------------





void __fastcall TREM_FormaSpiskaSprTypRabot::ActionOpenHelpExecute(TObject *Sender)
{
//
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
//������� ������
void __fastcall TREM_FormaSpiskaSprTypRabot::PopupMenuExtModuleClick(TObject *Sender)
{
int i= ((TMenuItem*)Sender)->MenuIndex;
DMTableExtPrintForm->Table->First();
DMTableExtPrintForm->Table->MoveBy(i);
RunExternalModule(glStrToInt64(DMTableExtPrintForm->TableID_EXTPRINT_FORM->AsString),
					DMTableExtPrintForm->TableTYPEMODULE_EXTPRINT_FORM->AsInteger);
}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::RunExternalModule(__int64 id_module, int type_module)
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
	module->SetInt64Variables("glIdElement", glStrToInt64(DM->TableID_REM_STYPRABOT->AsString));
	module->SetInt64Variables("glIdGrp", IdGrp);
	}

module->ExecuteModule();

}
//-----------------------------------------------------------------------------



void __fastcall TREM_FormaSpiskaSprTypRabot::ActionCloseExecute(TObject *Sender)
{
TypeEvent=0;
Close();
}
//---------------------------------------------------------------------------

void TREM_FormaSpiskaSprTypRabot::OpenFormElement()
{

if (FormaElementa==0)
		{
		if (cxTreeView1->Selected!=NULL)
				{
				InterfaceGlobalCom->kanCreateObject(ProgId_REM_FormaElementaSprTypRabot,IID_IREM_FormaElementaSprTypRabot,
													(void**)&FormaElementa);
				FormaElementa->Init(InterfaceMainObject,InterfaceImpl);
				FormaElementa->DM->OpenElement(glStrToInt64(DM->TableID_REM_STYPRABOT->AsString));
				FormaElementa->NumberProcVibor=ViborElement;
				FormaElementa->IdGrp=IdGrp;
				FormaElementa->UpdateForm();
				IdElement=glStrToInt64(DM->TableID_REM_STYPRABOT->AsString);
				}
		}

}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::OpenFormNewElement(void)
{
if (FormaElementa==0)
		{

				InterfaceGlobalCom->kanCreateObject(ProgId_REM_FormaElementaSprTypRabot,IID_IREM_FormaElementaSprTypRabot,
													(void**)&FormaElementa);
				FormaElementa->Init(InterfaceMainObject,InterfaceImpl);
			if (!FormaElementa) return;

			if (cxTreeView1->Selected!=NULL)
				{
				IdGrp=*(__int64*)cxTreeView1->Selected->Data;
				FormaElementa->DM->NewElement(IdGrp);
				}
			else
				{
				FormaElementa->DM->NewElement(0);
				}
			FormaElementa->NumberProcVibor=ViborElement;

			FormaElementa->IdGrp=IdGrp;
			FormaElementa->UpdateForm();

		}
}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::DeleteElement(void)
{

		UnicodeString V="�� ������������� ������ ������� "
		+DM->TableNAME_REM_STYPRABOT->AsString+"?";
		UnicodeString Z="������������� �������� ��������";
		if (Application->MessageBox(V.c_str(),Z.c_str(),MB_YESNO)!=IDYES)
				{
				return;
				}

if(DM->DeleteElement(glStrToInt64(DM->TableID_REM_STYPRABOT->AsString))!=true)
	{
	ShowMessage("�� ������� ������� ������� �����������!  ������: "+DM->TextError );
	}


DM->OpenTable(IdGrp,flAllElement);

}
//----------------------------------------------------------------------------
void TREM_FormaSpiskaSprTypRabot::EndEditElement(void)
{
DM->OpenTable(IdGrp,flAllElement);
cxGrid1->SetFocus();

}
//---------------------------------------------------------------------------

void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonNewClick(TObject *Sender)

{
OpenFormNewElement();
}
//---------------------------------------------------------------------------

void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonEditClick(TObject *Sender)

{
OpenFormElement();
}
//---------------------------------------------------------------------------

void __fastcall TREM_FormaSpiskaSprTypRabot::ToolButtonDeleteClick(TObject *Sender)

{
DeleteElement();
}
//---------------------------------------------------------------------------

