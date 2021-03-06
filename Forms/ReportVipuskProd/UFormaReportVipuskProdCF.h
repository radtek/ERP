#ifndef UFormaReportVipuskProdCFH                  
#define UFormaReportVipuskProdCFH                  
#include "GlobalInterface.h"            
//---------------------------------------------------------------
class TFormaReportVipuskProdCF : public IkanClassFactory                                 
{                                                                             
public:                                                                       
   TFormaReportVipuskProdCF();                                                           
   ~TFormaReportVipuskProdCF();                                                          
   int NumRefs;                                                               
   virtual int kanQueryInterface(REFIID id_interface, void ** ppv);     
	  virtual int kanAddRef(void);                                         
	  virtual int kanRelease(void);                                        
   virtual int kanCreateInstance(REFIID id_interface, void ** ppv); 
};                                                                     
//---------------------------------------------------------------
#endif                                                                 
