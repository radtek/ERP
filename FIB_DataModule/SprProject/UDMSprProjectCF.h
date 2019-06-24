#ifndef UDMSprProjectCFH                  
#define UDMSprProjectCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMSprProjectCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMSprProjectCF();                                                           
   ~TDMSprProjectCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
