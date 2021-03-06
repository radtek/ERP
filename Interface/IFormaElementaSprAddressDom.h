#ifndef UIFormaElementaSprAddressDomH
#define UIFormaElementaSprAddressDomH
#include "IMainInterface.h"
#include "UGlobalConstant.h"
#include "IDMSprAddressDom.h"
class __declspec(uuid(Global_IID_IFormaElementaSprAddressDom)) IFormaElementaSprAddressDom : public IMainInterface
{
public:
   __property IDMSprAddressDom * DM = {read = get_DM , write = set_DM};
   virtual IDMSprAddressDom * get_DM(void)=0;
   virtual void set_DM(IDMSprAddressDom * DM)=0;

   __property bool Vibor = {read = get_Vibor , write = set_Vibor};
   virtual bool get_Vibor(void)=0;
   virtual void set_Vibor(bool Vibor)=0;

   __property int NumberProcVibor = {read = get_NumberProcVibor , write = set_NumberProcVibor};
   virtual int get_NumberProcVibor(void)=0;
   virtual void set_NumberProcVibor(int NumberProcVibor)=0;

   virtual void UpdateForm(void)=0;
};
#define IID_IFormaElementaSprAddressDom __uuidof(IFormaElementaSprAddressDom)
#endif
