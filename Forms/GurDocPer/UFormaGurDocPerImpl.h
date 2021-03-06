#ifndef UFormaGurDocPerImplH
#define UFormaGurDocPerImplH
#include "IFormaGurDocPer.h"
#include "UFormaGurDocPer.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TFormaGurDocPerImpl)) TFormaGurDocPerImpl : public IFormaGurDocPer, IkanCallBack
{
public:
   TFormaGurDocPerImpl();
   ~TFormaGurDocPerImpl();
   TFormaGurDocPer * Object;
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

//IFormaGurDocPer
   virtual bool get_Vibor(void);
   virtual void set_Vibor(bool Vibor);

   virtual int get_NumberProcVibor(void);
   virtual void set_NumberProcVibor(int NumberProcVibor);

   virtual IDMGurDocPer * get_DM(void);
   virtual void set_DM(IDMGurDocPer * DM);

   virtual __int64 get_IdDoc(void);
   virtual void set_IdDoc(__int64 IdDoc);

   virtual TDateTime get_PosNach(void);
   virtual void set_PosNach(TDateTime PosNach);

   virtual TDateTime get_PosCon(void);
   virtual void set_PosCon(TDateTime PosCon);

};
#define CLSID_TFormaGurDocPerImpl __uuidof(TFormaGurDocPerImpl)
#endif
