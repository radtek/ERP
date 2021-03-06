#ifndef UIFormaSpiskaSprProducerNomH
#define UIFormaSpiskaSprProducerNomH
#include "IMainInterface.h"
#include "UGlobalConstant.h"
#include "IDMSprProducerNom.h"
#include "IDMSprProducerNomGrp.h"
class __declspec(uuid(Global_IID_IFormaSpiskaSprProducerNom)) IFormaSpiskaSprProducerNom : public IMainInterface
{
public:
   __property IDMSprProducerNom* DM = {read = get_DM , write = set_DM};
   virtual IDMSprProducerNom* get_DM(void)=0;
   virtual void set_DM(IDMSprProducerNom* DM)=0;

   __property IDMSprProducerNomGrp * DMGrp = {read = get_DMGrp , write = set_DMGrp};
   virtual IDMSprProducerNomGrp * get_DMGrp(void)=0;
   virtual void set_DMGrp(IDMSprProducerNomGrp * DMGrp)=0;

   __property bool Vibor = {read = get_Vibor , write = set_Vibor};
   virtual bool get_Vibor(void)=0;
   virtual void set_Vibor(bool Vibor)=0;

   __property int NumberProcVibor = {read = get_NumberProcVibor , write = set_NumberProcVibor};
   virtual int get_NumberProcVibor(void)=0;
   virtual void set_NumberProcVibor(int NumberProcVibor)=0;

   __property __int64 IdGrp = {read = get_IdGrp , write = set_IdGrp};
   virtual __int64 get_IdGrp(void)=0;
   virtual void set_IdGrp(__int64 IdGrp)=0;

   __property __int64 IdNom = {read = get_IdNom , write = set_IdNom};
   virtual __int64 get_IdNom(void)=0;
   virtual void set_IdNom(__int64 IdNom)=0;

   __property __int64 IdGroupElement = {read = get_IdGroupElement , write = set_IdGroupElement};
   virtual __int64 get_IdGroupElement(void)=0;
   virtual void set_IdGroupElement(__int64 IdGroupElement)=0;

   __property bool AllElement = {read = get_AllElement , write = set_AllElement};
   virtual bool get_AllElement(void)=0;
   virtual void set_AllElement(bool AllElement)=0;

   __property bool Podbor = {read = get_Podbor , write = set_Podbor};
   virtual bool get_Podbor(void)=0;
   virtual void set_Podbor(bool Podbor)=0;

   __property __int64 IdTypePrice = {read = get_IdTypePrice , write = set_IdTypePrice};
   virtual __int64 get_IdTypePrice(void)=0;
   virtual void set_IdTypePrice(__int64 IdTypePrice)=0;

   virtual void UpdateForm(void)=0;
   virtual void ReadShtrihCodEvent(int number, UnicodeString sh)=0;
};
#define IID_IFormaSpiskaSprProducerNom __uuidof(IFormaSpiskaSprProducerNom)
#endif
