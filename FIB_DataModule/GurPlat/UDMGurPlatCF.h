#ifndef UDMGurPlatCFH                  
#define UDMGurPlatCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMGurPlatCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMGurPlatCF();                                                           
   ~TDMGurPlatCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
