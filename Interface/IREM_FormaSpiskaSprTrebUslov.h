#ifndef UIREM_FormaSpiskaSprTrebUslovH
#define UIREM_FormaSpiskaSprTrebUslovH
#include "IMainInterface.h"
#include "UGlobalConstant.h"
#include "IREM_DMSprTrebUslov.h"
class __declspec(uuid(Global_IID_IREM_FormaSpiskaSprTrebUslov)) IREM_FormaSpiskaSprTrebUslov : public IMainInterface
{
public:
   __property bool Prosmotr = {read = get_Prosmotr , write = set_Prosmotr};
   virtual bool get_Prosmotr(void)=0;
   virtual void set_Prosmotr(bool Prosmotr)=0;

   __property bool Vibor = {read = get_Vibor , write = set_Vibor};
   virtual bool get_Vibor(void)=0;
   virtual void set_Vibor(bool Vibor)=0;

   __property int NumberProcVibor = {read = get_NumberProcVibor , write = set_NumberProcVibor};
   virtual int get_NumberProcVibor(void)=0;
   virtual void set_NumberProcVibor(int NumberProcVibor)=0;

   __property IREM_DMSprTrebUslov * DM = {read = get_DM , write = set_DM};
   virtual IREM_DMSprTrebUslov * get_DM(void)=0;
   virtual void set_DM(IREM_DMSprTrebUslov * DM)=0;

   __property __int64 IdDefectModelNeispr = {read = get_IdDefectModelNeispr , write = set_IdDefectModelNeispr};
   virtual __int64 get_IdDefectModelNeispr(void)=0;
   virtual void set_IdDefectModelNeispr(__int64 IdDefectModelNeispr)=0;

   __property UnicodeString TextMessage = {read = get_TextMessage , write = set_TextMessage};
   virtual UnicodeString get_TextMessage(void)=0;
   virtual void set_TextMessage(UnicodeString TextMessage)=0;

   virtual void UpdateForm()=0;
};
#define IID_IREM_FormaSpiskaSprTrebUslov __uuidof(IREM_FormaSpiskaSprTrebUslov)
#endif
