#ifndef UFormaSpiskaSprBankSchetImplH
#define UFormaSpiskaSprBankSchetImplH
#include "IFormaSpiskaSprBankSchet.h"
#include "UFormaSpiskaSprBankSchet.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TFormaSpiskaSprBankSchetImpl)) TFormaSpiskaSprBankSchetImpl : public IFormaSpiskaSprBankSchet, IkanCallBack
{
public:
   TFormaSpiskaSprBankSchetImpl();
   ~TFormaSpiskaSprBankSchetImpl();
   TFormaSpiskaSprBankSchet * Object;
   int NumRefs;
   bool flDeleteObject;
   void DeleteImpl(void);

   //IUnknown
   virtual int kanQueryInterface(REFIID id_interface,void ** ppv);
   virtual int kanAddRef(void);
   virtual int kanRelease(void);

   //IMainInterface
   virtual int  get_CodeError(void);
   virtual void set_CodeError(int CodeError);
   virtual UnicodeString  get_TextError(void);
   virtual void set_TextError(UnicodeString  TextError);
   virtual int Init(IkanUnknown * i_main_object, IkanUnknown * i_owner_object);
   virtual int Done(void);

   //IkanCallBack  
   virtual int kanExternalEvent(IkanUnknown * pUnk, REFIID id_object,int type_event, int number_procedure_end);

//IFormaSpiskaSprBankSchet
   virtual IDMSprBankSchet * get_DM(void);
   virtual void set_DM(IDMSprBankSchet * DM);

   virtual __int64 get_IdFirm(void);
   virtual void set_IdFirm(__int64 IdFirm);

   virtual bool get_Vibor(void);
   virtual void set_Vibor(bool Vibor);

   virtual int get_NumberProcVibor(void);
   virtual void set_NumberProcVibor(int NumberProcVibor);

};
#define CLSID_TFormaSpiskaSprBankSchetImpl __uuidof(TFormaSpiskaSprBankSchetImpl)
#endif
