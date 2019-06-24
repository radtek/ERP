#ifndef UDMSprImportSetCFH                  
#define UDMSprImportSetCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMSprImportSetCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMSprImportSetCF();                                                           
   ~TDMSprImportSetCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
