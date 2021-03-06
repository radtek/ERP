#ifndef UFormaSpiskaSprNomVZipImplH
#define UFormaSpiskaSprNomVZipImplH
#include "IFormaSpiskaSprNomVZip.h"
#include "UFormaSpiskaSprNomVZip.h"
#include "UGlobalConstant.h"
//---------------------------------------------------------------
class __declspec(uuid(Global_CLSID_TFormaSpiskaSprNomVZipImpl)) TFormaSpiskaSprNomVZipImpl : public IFormaSpiskaSprNomVZip, IkanCallBack
{
public:
   TFormaSpiskaSprNomVZipImpl();
   ~TFormaSpiskaSprNomVZipImpl();
   TFormaSpiskaSprNomVZip * Object;
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

//IFormaSpiskaSprNomVZip
   virtual IFormaPodboraNom * get_FormaPodboraNom(void);
   virtual void set_FormaPodboraNom(IFormaPodboraNom * FormaPodboraNom);

   virtual IDMSprNomVZip* get_DM(void);
   virtual void set_DM(IDMSprNomVZip* DM);

   virtual IDMSprGrpNom * get_DMGrp(void);
   virtual void set_DMGrp(IDMSprGrpNom * DMGrp);

   virtual bool get_Vibor(void);
   virtual void set_Vibor(bool Vibor);

   virtual int get_NumberProcVibor(void);
   virtual void set_NumberProcVibor(int NumberProcVibor);

   virtual __int64 get_IdGrp(void);
   virtual void set_IdGrp(__int64 IdGrp);

   virtual __int64 get_IdNom(void);
   virtual void set_IdNom(__int64 IdNom);

   virtual __int64 get_IdFirm(void);
   virtual void set_IdFirm(__int64 IdFirm);

   virtual AnsiString get_NameFirm(void);
   virtual void set_NameFirm(AnsiString NameFirm);

   virtual __int64 get_IdSklad(void);
   virtual void set_IdSklad(__int64 IdSklad);

   virtual AnsiString get_NameSklad(void);
   virtual void set_NameSklad(AnsiString NameSklad);

   virtual __int64 get_IdInetCatalog(void);
   virtual void set_IdInetCatalog(__int64 IdInetCatalog);

   virtual UnicodeString get_NameInetCatalog(void);
   virtual void set_NameInetCatalog(UnicodeString NameInetCatalog);

   virtual bool get_AllElement(void);
   virtual void set_AllElement(bool AllElement);

   virtual bool get_Podbor(void);
   virtual void set_Podbor(bool Podbor);

   virtual __int64 get_IdTypePrice(void);
   virtual void set_IdTypePrice(__int64 IdTypePrice);

   virtual void UpdateForm(void);
};
#define CLSID_TFormaSpiskaSprNomVZipImpl __uuidof(TFormaSpiskaSprNomVZipImpl)
#endif
