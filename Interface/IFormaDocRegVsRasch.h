#ifndef UIFormaDocRegVsRaschH
#define UIFormaDocRegVsRaschH
#include "IMainInterface.h"
#include "IDMDocRegVsRasch.h"
#include "UGlobalConstant.h"
class __declspec(uuid(Global_IID_IFormaDocRegVsRasch)) IFormaDocRegVsRasch : public IMainInterface
{
public:
   __property IDMDocRegVsRasch * DM = {read = get_DM , write = set_DM};
   virtual IDMDocRegVsRasch * get_DM(void)=0;
   virtual void set_DM(IDMDocRegVsRasch * DM)=0;

   __property bool Prosmotr = {read = get_Prosmotr , write = set_Prosmotr};
   virtual bool get_Prosmotr(void)=0;
   virtual void set_Prosmotr(bool Prosmotr)=0;

   __property __int64 IdDoc = {read = get_IdDoc , write = set_IdDoc};
   virtual __int64 get_IdDoc(void)=0;
   virtual void set_IdDoc(__int64 IdDoc)=0;

   virtual void UpdateForm(void)=0;
};
#define IID_IFormaDocRegVsRasch __uuidof(IFormaDocRegVsRasch)
#endif
