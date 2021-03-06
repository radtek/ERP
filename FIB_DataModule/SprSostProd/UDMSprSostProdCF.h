#ifndef UDMSprSostProdCFH                  
#define UDMSprSostProdCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMSprSostProdCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMSprSostProdCF();                                                           
   ~TDMSprSostProdCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
