#ifndef UREM_FormaSpiskaSprSostImplH
#define UREM_FormaSpiskaSprSostImplH
#include "IREM_FormaSpiskaSprSost.h"
#include "UREM_FormaSpiskaSprSost.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TREM_FormaSpiskaSprSostImpl)) TREM_FormaSpiskaSprSostImpl : public IREM_FormaSpiskaSprSost, IkanCallBack
{
public:
   TREM_FormaSpiskaSprSostImpl();
   ~TREM_FormaSpiskaSprSostImpl();
   TREM_FormaSpiskaSprSost * Object;
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

//IREM_FormaSpiskaSprSost
   virtual bool get_Prosmotr(void);
   virtual void set_Prosmotr(bool Prosmotr);

   virtual bool get_Vibor(void);
   virtual void set_Vibor(bool Vibor);

   virtual int get_NumberProcVibor(void);
   virtual void set_NumberProcVibor(int NumberProcVibor);

   virtual IREM_DMSprSost * get_DM(void);
   virtual void set_DM(IREM_DMSprSost * DM);

   virtual UnicodeString get_TextMessage(void);
   virtual void set_TextMessage(UnicodeString TextMessage);

};
#define CLSID_TREM_FormaSpiskaSprSostImpl __uuidof(TREM_FormaSpiskaSprSostImpl)
#endif
