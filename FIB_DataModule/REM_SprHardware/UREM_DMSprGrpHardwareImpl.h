#ifndef UREM_DMSprGrpHardwareImplH
#define UREM_DMSprGrpHardwareImplH
#include "IREM_DMSprGrpHardware.h"
#include "UREM_DMSprGrpHardware.h"
//---------------------------------------------------------------
class __declspec(uuid("{67C32447-86A7-4649-802D-46C310F84C29}")) TREM_DMSprGrpHardwareImpl : public IREM_DMSprGrpHardware
{
public:
   TREM_DMSprGrpHardwareImpl();
   ~TREM_DMSprGrpHardwareImpl();
   TREM_DMSprGrpHardware * Object;
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

//IREM_DMSprGrpHardware
   virtual TDataSource * get_DataSourceTable(void);
   virtual void set_DataSourceTable(TDataSource * DataSourceTable);

   virtual TDataSource * get_DataSourceElement(void);
   virtual void set_DataSourceElement(TDataSource * DataSourceElement);

   virtual TpFIBDataSet * get_Table(void);
   virtual void set_Table(TpFIBDataSet * Table);

   virtual TpFIBDataSet * get_Element(void);
   virtual void set_Element(TpFIBDataSet * Element);

   virtual TpFIBQuery * get_pFIBQ(void);
   virtual void set_pFIBQ(TpFIBQuery * pFIBQ);

   virtual TIntegerField * get_TableRECNO(void);
   virtual void set_TableRECNO(TIntegerField * TableRECNO);

   virtual TFIBLargeIntField * get_TableID_REM_SGRP_HARDWARE(void);
   virtual void set_TableID_REM_SGRP_HARDWARE(TFIBLargeIntField * TableID_REM_SGRP_HARDWARE);

   virtual TFIBLargeIntField * get_TableIDBASE_REM_SGRP_HARDWARE(void);
   virtual void set_TableIDBASE_REM_SGRP_HARDWARE(TFIBLargeIntField * TableIDBASE_REM_SGRP_HARDWARE);

   virtual TFIBWideStringField * get_TableNAME_REM_SGRP_HARDWARE(void);
   virtual void set_TableNAME_REM_SGRP_HARDWARE(TFIBWideStringField * TableNAME_REM_SGRP_HARDWARE);

   virtual TFIBLargeIntField * get_TableIDGRP_REM_SGRP_HARDWARE(void);
   virtual void set_TableIDGRP_REM_SGRP_HARDWARE(TFIBLargeIntField * TableIDGRP_REM_SGRP_HARDWARE);

   virtual TFIBLargeIntField * get_ElementID_REM_SGRP_HARDWARE(void);
   virtual void set_ElementID_REM_SGRP_HARDWARE(TFIBLargeIntField * ElementID_REM_SGRP_HARDWARE);

   virtual TFIBLargeIntField * get_ElementIDBASE_REM_SGRP_HARDWARE(void);
   virtual void set_ElementIDBASE_REM_SGRP_HARDWARE(TFIBLargeIntField * ElementIDBASE_REM_SGRP_HARDWARE);

   virtual TFIBWideStringField * get_ElementNAME_REM_SGRP_HARDWARE(void);
   virtual void set_ElementNAME_REM_SGRP_HARDWARE(TFIBWideStringField * ElementNAME_REM_SGRP_HARDWARE);

   virtual TFIBLargeIntField * get_ElementIDGRP_REM_SGRP_HARDWARE(void);
   virtual void set_ElementIDGRP_REM_SGRP_HARDWARE(TFIBLargeIntField * ElementIDGRP_REM_SGRP_HARDWARE);

   virtual void OpenTable(void);
   virtual int OpenElement(__int64 id);
   virtual void NewElement(__int64 id_grp);
   virtual bool SaveElement(void);
   virtual bool DeleteElement(__int64 id);
   virtual __int64 FindPoName(AnsiString name);
};
#define CLSID_TREM_DMSprGrpHardwareImpl __uuidof(TREM_DMSprGrpHardwareImpl)
#endif
