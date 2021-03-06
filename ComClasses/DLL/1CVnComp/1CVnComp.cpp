//---------------------------------------------------------------------------

//#include <vcl.h>
#include <windows.h>
#pragma hdrstop
#include "GlobalInterface.h"


#include "UObject1CVnCompImpl.h"
#include "UObject1CVnCompCF.h"
//---------------------------------------------------------------------------
extern "C" int __declspec (dllexport) kanGetClassObject(REFIID id_class, REFIID id_interface, void ** ppv);


//extern "C" int __declspec (dllexport) kanSendApplication(TApplication * app);
extern "C" int __declspec (dllexport) kanRegisterServer(IkanCom * icom);
extern "C" int __declspec (dllexport) kanUnregisterServer(IkanCom * icom);
extern "C" int __declspec (dllexport) kanCanUnloadNow(void);
extern "C" void __declspec (dllexport) kanInit(void);
extern "C" void __declspec (dllexport) kanDone(void);
//---------------------------------------------------------------------------
int NumObject=0;
//TApplication * glApp=0;
//TApplication * dllApp=0;


#pragma argsused
//---------------------------------------------------------------------------
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fwdreason, LPVOID lpvReserved)
{

	return 1;
}

//-----------------------------------------------------------------------------
//int kanSendApplication(TApplication * app)
//{
//int result=0;
//if (app!=0)
//	{
//	glApp=app;
//	dllApp=Application;
//	Application=glApp;
//	}
//
//return result;
//}
//-----------------------------------------------------------------------------
void kanInit(void)
{


}
//---------------------------------------------------------------------------
void kanDone(void)
{

//if (dllApp!=0) Application=dllApp;
}

//---------------------------------------------------------------------------
int kanCanUnloadNow(void)
{
int result=0;

if (NumObject==0)
	{
	result= -1;
	}

return result;
}
//---------------------------------------------------------------------------
int kanGetClassObject(REFIID id_class, REFIID id_interface, void ** ppv)
{
int result=0;
if (id_class==CLSID_TObject1CVnCompImpl)
	{
	TObject1CVnCompCF * ob=new TObject1CVnCompCF();
	result=ob->kanQueryInterface(id_interface, ppv);
	if (result!=-1)
		{
		delete ob;
		}
	}

else
	{
	result=0;
	*ppv=NULL;
	}


return result;
}
//----------------------------------------------------------------------------

int kanRegisterServer(IkanCom * icom)
{
int result=0;

if (icom->kanAddClass(CLSID_TObject1CVnCompImpl,ProgId_Object1CVnComp,"1CVnComp.dll")!=-1)
	{
	//ShowMessage("Error! Falid register class - "+ProgId_Object1CVnComp +"!");
	}

return result;
}
//-----------------------------------------------------------------------------
int kanUnregisterServer(IkanCom * icom)
{
int result=0;

return result;
}
//-----------------------------------------------------------------------------
