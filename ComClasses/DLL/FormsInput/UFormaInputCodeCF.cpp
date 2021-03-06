#include "vcl.h"
#pragma hdrstop  
#include "UFormaInputCodeCF.h"   
#include "UFormaInputCodeImpl.h"  
#include "IFormaInputCode.h"  
#pragma package(smart_init)  
extern int NumObject;  
//---------------------------------------------------------------
TFormaInputCodeCF::TFormaInputCodeCF()   
{    
NumRefs=0; 
++NumObject; 
} 
//---------------------------------------------------------------
TFormaInputCodeCF::~TFormaInputCodeCF() 
{ 
--NumObject;  
} 
//---------------------------------------------------------------
int TFormaInputCodeCF::kanQueryInterface(REFIID id_interface, void**ppv)  
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
int TFormaInputCodeCF::kanAddRef(void) 
{     
return (++NumRefs);    
}    
//---------------------------------------------------------------
int TFormaInputCodeCF::kanRelease(void)  
{  
if (--NumRefs==0)   
	{  
	delete this;
	return 0;
	}    
return NumRefs;  
}  
//---------------------------------------------------------------
int TFormaInputCodeCF::kanCreateInstance(REFIID id_interface, void ** ppv)  
{  
int result=0;  
		TFormaInputCodeImpl * ob=new TFormaInputCodeImpl();  
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
