#ifndef UFormaSpiskaInterfToolBarImplH
#define UFormaSpiskaInterfToolBarImplH
#include "IFormaSpiskaInterfToolBar.h"
#include "UFormaSpiskaInterfToolBar.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TFormaSpiskaInterfToolBarImpl)) TFormaSpiskaInterfToolBarImpl : public IFormaSpiskaInterfToolBar, IkanCallBack
{
public:
   TFormaSpiskaInterfToolBarImpl();
   ~TFormaSpiskaInterfToolBarImpl();
   TFormaSpiskaInterfToolBar * Object;
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

//IFormaSpiskaInterfToolBar
   virtual IDMInterfToolBar * get_DM(void);
   virtual void set_DM(IDMInterfToolBar * DM);

   virtual __int64 get_IdGrpUser(void);
   virtual void set_IdGrpUser(__int64 IdGrpUser);

   virtual int get_NumApplication(void);
   virtual void set_NumApplication(int NumApplication);

   virtual __int64 get_IdElement(void);
   virtual void set_IdElement(__int64 IdElement);

   virtual void UpdateForm(void);
};
#define CLSID_TFormaSpiskaInterfToolBarImpl __uuidof(TFormaSpiskaInterfToolBarImpl)
#endif
