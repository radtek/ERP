#include "vcl.h"
#pragma hdrstop


#include "UREM_FormaDocZVosvrZapImpl.h"
#pragma package(smart_init)
extern int NumObject;
//---------------------------------------------------------------
TREM_FormaDocZVosvrZapImpl::TREM_FormaDocZVosvrZapImpl()           
{                                            
Object=new TREM_FormaDocZVosvrZap(Application);         
Object->FunctionDeleteImpl=DeleteImpl;       
NumRefs=0;                                   
++NumObject;                                 
flDeleteObject=true;                         
}                                            
//---------------------------------------------------------------
TREM_FormaDocZVosvrZapImpl::~TREM_FormaDocZVosvrZapImpl()          
{                                            
if (flDeleteObject==true)                    
	{                                           
	Object->flDeleteImpl=false;                 
	delete Object;                              
	}                                           
--NumObject;                                 
}                                            
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::DeleteImpl(void) 
{                                                   
flDeleteObject=false;                               
delete this;                                        
}                                                   
//---------------------------------------------------------------
int TREM_FormaDocZVosvrZapImpl::kanQueryInterface(REFIID id_interface, void ** ppv)  
 {                                                                         
int result=0;                                                             
if (id_interface==IID_IkanUnknown)                                        
   {                                                                     
   *ppv=static_cast<IkanUnknown*> (static_cast<IMainInterface*>(this)); 
   result=-1;                                                             
   }                                                                      
else if (id_interface==IID_IMainInterface)                        
   {                                                                     
   *ppv=static_cast<IMainInterface*> (this);                                
   result=-1;                                                            
   }  
else if (id_interface==IID_IkanCallBack) 
   {                                        
   *ppv=static_cast<IkanCallBack*> (this);  
   result=-1;                               
   }                                        
else if (id_interface==IID_IREM_FormaDocZVosvrZap)                        
   {                                                                     
   *ppv=static_cast<IREM_FormaDocZVosvrZap*> (this);                                
   result=-1;                                                            
   }                                                                     
else                                                                     
   {                                                                     
   *ppv=NULL;                                                            
   result=1;                                                             
   return result;                                                        
   }                                                                     
kanAddRef();                       
return result;                                                           
}                                                                       
//---------------------------------------------------------------
int TREM_FormaDocZVosvrZapImpl::kanAddRef(void)                                    
{                                                                       
return (++NumRefs);                                                     
}                                                                       
//---------------------------------------------------------------
int TREM_FormaDocZVosvrZapImpl::kanRelease(void)                                  
{                                                                      
if (--NumRefs==0)                                                     
   {                                                                  
   delete this;                                                       
   return 0;                                                       
   }                                                                  
return NumRefs;                                                       
}                                                                     
//---------------------------------------------------------------

//IMainInterface 
int  TREM_FormaDocZVosvrZapImpl::get_CodeError(void)            
{                                                              
return Object->CodeError;                                                      
}                                                              
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_CodeError(int CodeError)             
{                                                              
}                                                              
//---------------------------------------------------------------
UnicodeString  TREM_FormaDocZVosvrZapImpl::get_TextError(void)            
{                                                              
return Object->TextError;                                      
}                                                              
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_TextError(UnicodeString  TextError)  
{                                                              
}                                                              
//---------------------------------------------------------------
int TREM_FormaDocZVosvrZapImpl::Init(IkanUnknown * i_main_object, IkanUnknown * i_owner_object) 
{  															
kanQueryInterface(IID_IkanUnknown,(void**) &Object->InterfaceImpl); 
Object->ClsIdImpl=CLSID_TREM_FormaDocZVosvrZapImpl;                  
Object->InterfaceMainObject=i_main_object;           
Object->InterfaceOwnerObject=i_owner_object;          
return Object->Init();                                         
}                                                              
//---------------------------------------------------------------
int TREM_FormaDocZVosvrZapImpl::Done(void)                                
{                                                              
return Object->Done();                                                     
}                                                              
//---------------------------------------------------------------

//IkanCallBack 
int TREM_FormaDocZVosvrZapImpl::kanExternalEvent(IkanUnknown * pUnk, REFIID id_object,int type_event, int number_procedure_end)    
{   
return Object->ExternalEvent(pUnk,   //��������� �� �������� ������ 
									id_object,      //��� ��������� �������  
									type_event,     //��� ������� � �������� ������� 
									number_procedure_end  //����� ��������� � ���. �����, �������������� ������� ������ 
									); 
}   
//---------------------------------------------------------------

//IREM_FormaDocZVosvrZap
IREM_DMDocZVosvrZap * TREM_FormaDocZVosvrZapImpl::get_DM(void)
{
return Object->DM;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_DM(IREM_DMDocZVosvrZap * DM)
{
Object->DM=DM;
}
//---------------------------------------------------------------
bool TREM_FormaDocZVosvrZapImpl::get_Prosmotr(void)
{
return Object->Prosmotr;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_Prosmotr(bool Prosmotr)
{
Object->Prosmotr=Prosmotr;
}
//---------------------------------------------------------------
__int64 TREM_FormaDocZVosvrZapImpl::get_IdDoc(void)
{
return Object->IdDoc;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_IdDoc(__int64 IdDoc)
{
Object->IdDoc=IdDoc;
}
//---------------------------------------------------------------
bool TREM_FormaDocZVosvrZapImpl::get_OutReady(void)
{
return Object->OutReady;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_OutReady(bool OutReady)
{
Object->OutReady=OutReady;
}
//---------------------------------------------------------------
__int64 TREM_FormaDocZVosvrZapImpl::get_VibTovarId(void)
{
return Object->VibTovarId;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_VibTovarId(__int64 VibTovarId)
{
Object->VibTovarId=VibTovarId;
}
//---------------------------------------------------------------
__int64 TREM_FormaDocZVosvrZapImpl::get_VibTovarIdGrp(void)
{
return Object->VibTovarIdGrp;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::set_VibTovarIdGrp(__int64 VibTovarIdGrp)
{
Object->VibTovarIdGrp=VibTovarIdGrp;
}
//---------------------------------------------------------------
void TREM_FormaDocZVosvrZapImpl::UpdateForm(void)
{
return Object->UpdateForm();
}
//---------------------------------------------------------------
