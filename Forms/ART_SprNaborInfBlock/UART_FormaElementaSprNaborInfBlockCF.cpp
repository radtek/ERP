#include "vcl.h"
#pragma hdrstop  
#include "UART_FormaElementaSprNaborInfBlockCF.h"   
#include "UART_FormaElementaSprNaborInfBlockImpl.h"  
#include "IART_FormaElementaSprNaborInfBlock.h"  
#pragma package(smart_init)  
extern int NumObject;  
//---------------------------------------------------------------
TART_FormaElementaSprNaborInfBlockCF::TART_FormaElementaSprNaborInfBlockCF()   
{    
NumRefs=0; 
++NumObject; 
} 
//---------------------------------------------------------------
TART_FormaElementaSprNaborInfBlockCF::~TART_FormaElementaSprNaborInfBlockCF() 
{ 
--NumObject;  
} 
//---------------------------------------------------------------
int TART_FormaElementaSprNaborInfBlockCF::kanQueryInterface(REFIID id_interface, void**ppv)  
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
int TART_FormaElementaSprNaborInfBlockCF::kanAddRef(void) 
{     
return (++NumRefs);    
}    
//---------------------------------------------------------------
int TART_FormaElementaSprNaborInfBlockCF::kanRelease(void)  
{  
if (--NumRefs==0)   
	{  
	delete this;   
	}    
return NumRefs;  
}  
//---------------------------------------------------------------
int TART_FormaElementaSprNaborInfBlockCF::kanCreateInstance(REFIID id_interface, void ** ppv)  
{  
int result=0;  
		TART_FormaElementaSprNaborInfBlockImpl * ob=new TART_FormaElementaSprNaborInfBlockImpl();  
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
