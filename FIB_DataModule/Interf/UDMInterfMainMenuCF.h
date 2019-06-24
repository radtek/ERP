#ifndef UDMInterfMainMenuCFH                  
#define UDMInterfMainMenuCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMInterfMainMenuCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMInterfMainMenuCF();                                                           
   ~TDMInterfMainMenuCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
