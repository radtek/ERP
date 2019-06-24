#include "vcl.h"
#pragma hdrstop
#include "UDMQueryReadCF.h"   
#include "UDMQueryReadImpl.h"  
#include "IDMQueryRead.h"  
#pragma package(smart_init)  
extern int NumObject;  
//---------------------------------------------------------------
TDMQueryReadCF::TDMQueryReadCF()   
{    
NumRefs=0; 
++NumObject; 
} 
//---------------------------------------------------------------
TDMQueryReadCF::~TDMQueryReadCF() 
{ 
--NumObject;  
} 
//---------------------------------------------------------------
int TDMQueryReadCF::kanQueryInterface(REFIID id_interface, void**ppv)  
{    
int result=0;  
if (id_interface==IID_IkanUnknown) 
	{  
	*ppv=static_cast<IkanUnknown*> (this);  
	result=-1;  
	} 
else if (id_interface==IID_IkanClassFactory) 
	{  
	*ppv=static_cast<IkanClassFactory*> (this); 
	result=-1; 
	} 
else  
	{   
	*ppv=NULL;  
	result=0;  
	return result;  
	} 
kanAddRef();
return result;  
}   
//---------------------------------------------------------------
int TDMQueryReadCF::kanAddRef(void) 
{     
return (++NumRefs);    
}    
//---------------------------------------------------------------
int TDMQueryReadCF::kanRelease(void)  
{  
if (--NumRefs==0)   
	{  
	delete this;
	return 0;
	}    
return NumRefs;  
}  
//---------------------------------------------------------------
int TDMQueryReadCF::kanCreateInstance(REFIID id_interface, void ** ppv)  
{  
int result=0;  
		TDMQueryReadImpl * ob=new TDMQueryReadImpl();  
		if (ob->kanQueryInterface(id_interface, ppv)==-1)   
			{       
			result=-1;  
			}    
		else     
			{           
			delete ob;   
			result=0;   
			}      
return result;  
}       
//---------------------------------------------------------------
