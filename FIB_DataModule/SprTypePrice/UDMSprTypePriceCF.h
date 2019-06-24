#ifndef UDMSprTypePriceCFH                  
#define UDMSprTypePriceCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMSprTypePriceCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMSprTypePriceCF();                                                           
   ~TDMSprTypePriceCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
