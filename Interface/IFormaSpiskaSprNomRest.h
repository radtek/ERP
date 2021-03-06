#ifndef UIFormaSpiskaSprNomRestH
#define UIFormaSpiskaSprNomRestH
#include "IMainInterface.h"
#include "IDMSprNomRest.h"
class __declspec(uuid(Global_IID_IFormaSpiskaSprNomRest)) IFormaSpiskaSprNomRest : public IMainInterface
{
public:
   __property IDMSprNomRest * DM = {read = get_DM , write = set_DM};
   virtual IDMSprNomRest * get_DM(void)=0;
   virtual void set_DM(IDMSprNomRest * DM)=0;

   __property bool Vibor = {read = get_Vibor , write = set_Vibor};
   virtual bool get_Vibor(void)=0;
   virtual void set_Vibor(bool Vibor)=0;

   __property int NumberProcVibor = {read = get_NumberProcVibor , write = set_NumberProcVibor};
   virtual int get_NumberProcVibor(void)=0;
   virtual void set_NumberProcVibor(int NumberProcVibor)=0;

   __property __int64 IdNom = {read = get_IdNom , write = set_IdNom};
   virtual __int64 get_IdNom(void)=0;
   virtual void set_IdNom(__int64 IdNom)=0;

   __property UnicodeString NameNom = {read = get_NameNom , write = set_NameNom};
   virtual UnicodeString get_NameNom(void)=0;
   virtual void set_NameNom(UnicodeString NameNom)=0;

   virtual void UpdateForm()=0;
};
#define IID_IFormaSpiskaSprNomRest __uuidof(IFormaSpiskaSprNomRest)
#endif
