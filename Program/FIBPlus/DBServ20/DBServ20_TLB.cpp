// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 5081 $
// File generated on 26.11.2009 10:50:36 from Type Library described below.

// ************************************************************************  //
// Type Lib: K:\Program\FIBPlus\DBServ20\DBServ20.tlb (1)
// LIBID: {67436983-B658-40C7-AD92-CAD54DCB46AB}
// LCID: 0
// Helpfile: 
// HelpString: DBServ20 Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\system32\stdole2.tlb)
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include "DBServ20_TLB.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Dbserv20_tlb
{


// *********************************************************************//
// GUIDS declared in the TypeLibrary                                      
// *********************************************************************//
const GUID LIBID_DBServ20 = {0x67436983, 0xB658, 0x40C7,{ 0xAD, 0x92, 0xCA,0xD5, 0x4D, 0xCB,0x46, 0xAB} };
const GUID IID_IOleDM = {0x74F3797D, 0x8754, 0x4353,{ 0x9F, 0x62, 0xA7,0x86, 0x05, 0x6A,0xDD, 0xE4} };
const GUID CLSID_OleDM = {0xE1697EFF, 0x540A, 0x410C,{ 0x9A, 0xBC, 0x80,0x84, 0x17, 0x02,0xB3, 0x3F} };
const GUID IID_IOleDMGurAllDoc = {0x76C6259A, 0xF143, 0x4E40,{ 0x9E, 0xBE, 0x83,0x8B, 0x44, 0x40,0x47, 0x70} };
const GUID CLSID_OleDMGurAllDoc = {0xB4D56577, 0xB867, 0x4D50,{ 0xBC, 0x7F, 0x38,0x27, 0x67, 0x26,0x65, 0xC9} };
const GUID IID_IOleDMSprSklad = {0x1094236B, 0x2344, 0x47A0,{ 0x8E, 0xF7, 0xC3,0x6F, 0x82, 0xB7,0x1B, 0x48} };
const GUID CLSID_OleDMSprSklad = {0x13B97FAE, 0xE818, 0x424B,{ 0xA6, 0x37, 0xF6,0x91, 0x4F, 0x7D,0x5F, 0xBB} };
const GUID IID_IOleDMSprFirm = {0x6537D36E, 0xE877, 0x40F4,{ 0x8B, 0xA1, 0xEA,0x80, 0x18, 0x25,0x60, 0x82} };
const GUID CLSID_OleDMSprFirm = {0x51730083, 0x11CD, 0x4941,{ 0xA5, 0x81, 0x9B,0xEE, 0x20, 0xF8,0x8F, 0x55} };
const GUID IID_IOleDMSprInfBase = {0x1C1C010E, 0xC0C9, 0x4871,{ 0xBC, 0x0E, 0x7A,0x93, 0xE2, 0xCB,0x6A, 0xD9} };
const GUID CLSID_OleDMSprInfBase = {0xB3F3DEE4, 0x6750, 0x432F,{ 0x9B, 0x23, 0xF3,0x32, 0xA8, 0xBE,0xEF, 0x89} };
const GUID IID_IOleDMSprEd = {0xD28F8AE3, 0x3B91, 0x49E0,{ 0xBE, 0x35, 0x11,0x33, 0xF9, 0x36,0x27, 0x91} };
const GUID CLSID_OleDMSprEd = {0x505A0FE0, 0x291B, 0x4E4E,{ 0x9E, 0x6D, 0x55,0xF9, 0xC4, 0x14,0xB3, 0x44} };
const GUID IID_IOleDMSprGrpNom = {0xE00B40C2, 0x1DED, 0x4F6C,{ 0x8D, 0x31, 0xFA,0x94, 0xC0, 0x78,0x69, 0x1E} };
const GUID CLSID_OleDMSprGrpNom = {0x0659145F, 0xD916, 0x4364,{ 0x95, 0x43, 0x03,0x62, 0x69, 0x50,0xD5, 0x9D} };
const GUID IID_IOleDMSprNom = {0x5023B6C6, 0x594F, 0x4337,{ 0xB9, 0x07, 0xE7,0x12, 0x69, 0x05,0x8E, 0x57} };
const GUID CLSID_OleDMSprNom = {0x16B5B746, 0xF053, 0x4C44,{ 0xAB, 0x11, 0x91,0x86, 0xCC, 0x67,0x8D, 0xEA} };
const GUID IID_IOleDMSprTypePrice = {0xDA8FD0DF, 0xAD0F, 0x411A,{ 0xB4, 0x55, 0xD9,0xE2, 0xEC, 0x4D,0xF1, 0x3D} };
const GUID CLSID_OleDMSprTypePrice = {0x26A5740D, 0xB2F6, 0x4EA5,{ 0xA8, 0xAB, 0x24,0x62, 0x1F, 0x0B,0x9C, 0x6F} };
const GUID IID_IOleDMSprPrice = {0x8FAC9484, 0xDAC5, 0x4142,{ 0xB3, 0x81, 0xBB,0x4A, 0xAF, 0xA0,0xEC, 0xF8} };
const GUID CLSID_OleDMSprPrice = {0xFE0C2C6D, 0x3C6E, 0x4790,{ 0xB1, 0x79, 0x26,0xD3, 0x65, 0x0B,0xBF, 0x36} };
const GUID IID_IOleDMDocReal = {0xC03B1E3C, 0xDE78, 0x4569,{ 0x9A, 0x1D, 0xA9,0xC3, 0x48, 0xDD,0x96, 0x87} };
const GUID CLSID_OleDMDocReal = {0x4D026F48, 0x5F35, 0x416D,{ 0x97, 0xA0, 0x2E,0x5C, 0xBC, 0xDF,0x54, 0xC0} };

};     // namespace Dbserv20_tlb