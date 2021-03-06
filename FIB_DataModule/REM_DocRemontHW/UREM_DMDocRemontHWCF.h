#ifndef UREM_DMDocRemontHWCFH                  
#define UREM_DMDocRemontHWCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TREM_DMDocRemontHWCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TREM_DMDocRemontHWCF();                                                           
   ~TREM_DMDocRemontHWCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
