#ifndef UREM_FormaDocZAktPrImplH
#define UREM_FormaDocZAktPrImplH
#include "IREM_FormaDocZAktPr.h"
#include "UREM_FormaDocZAktPr.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TREM_FormaDocZAktPrImpl)) TREM_FormaDocZAktPrImpl : public IREM_FormaDocZAktPr, IkanCallBack
{
public:
   TREM_FormaDocZAktPrImpl();
   ~TREM_FormaDocZAktPrImpl();
   TREM_FormaDocZAktPr * Object;
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

//IREM_FormaDocZAktPr
   virtual IREM_DMDocZAktPr * get_DM(void);
   virtual void set_DM(IREM_DMDocZAktPr * DM);

   virtual bool get_Prosmotr(void);
   virtual void set_Prosmotr(bool Prosmotr);

   virtual __int64 get_IdDoc(void);
   virtual void set_IdDoc(__int64 IdDoc);

   virtual bool get_OutReady(void);
   virtual void set_OutReady(bool OutReady);

   virtual __int64 get_VibTovarId(void);
   virtual void set_VibTovarId(__int64 VibTovarId);

   virtual __int64 get_VibTovarIdGrp(void);
   virtual void set_VibTovarIdGrp(__int64 VibTovarIdGrp);

   virtual void UpdateForm(void);
};
#define CLSID_TREM_FormaDocZAktPrImpl __uuidof(TREM_FormaDocZAktPrImpl)
#endif
