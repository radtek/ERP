#ifndef UREM_FormaElementaSprTypDefectImplH
#define UREM_FormaElementaSprTypDefectImplH
#include "IREM_FormaElementaSprTypDefect.h"
#include "UREM_FormaElementaSprTypDefect.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TREM_FormaElementaSprTypDefectImpl)) TREM_FormaElementaSprTypDefectImpl : public IREM_FormaElementaSprTypDefect, IkanCallBack
{
public:
   TREM_FormaElementaSprTypDefectImpl();
   ~TREM_FormaElementaSprTypDefectImpl();
   TREM_FormaElementaSprTypDefect * Object;
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

//IREM_FormaElementaSprTypDefect
   virtual IREM_DMSprTypDefect* get_DM(void);
   virtual void set_DM(IREM_DMSprTypDefect* DM);

   virtual bool get_Vibor(void);
   virtual void set_Vibor(bool Vibor);

   virtual int get_NumberProcVibor(void);
   virtual void set_NumberProcVibor(int NumberProcVibor);

   virtual UnicodeString get_NameGroupElement(void);
   virtual void set_NameGroupElement(UnicodeString NameGroupElement);

   virtual __int64 get_IdGroupElement(void);
   virtual void set_IdGroupElement(__int64 IdGroupElement);

   virtual UnicodeString get_NameGroup(void);
   virtual void set_NameGroup(UnicodeString NameGroup);

   virtual __int64 get_IdGrp(void);
   virtual void set_IdGrp(__int64 IdGrp);

   virtual void UpdateForm(void);
};
#define CLSID_TREM_FormaElementaSprTypDefectImpl __uuidof(TREM_FormaElementaSprTypDefectImpl)
#endif
