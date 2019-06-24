#ifndef UDMDocRegPaySaleCFH                  
#define UDMDocRegPaySaleCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TDMDocRegPaySaleCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TDMDocRegPaySaleCF();                                                           
   ~TDMDocRegPaySaleCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
