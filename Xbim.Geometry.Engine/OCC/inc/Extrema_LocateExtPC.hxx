// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_LocateExtPC_HeaderFile
#define _Extrema_LocateExtPC_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Extrema_POnCurv_HeaderFile
#include <Extrema_POnCurv.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Extrema_LocEPCOfLocateExtPC_HeaderFile
#include <Extrema_LocEPCOfLocateExtPC.hxx>
#endif
#ifndef _Extrema_ELPCOfLocateExtPC_HeaderFile
#include <Extrema_ELPCOfLocateExtPC.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_DomainError;
class StdFail_NotDone;
class Adaptor3d_Curve;
class Extrema_CurveTool;
class Extrema_ExtPElC;
class gp_Pnt;
class gp_Vec;
class Extrema_POnCurv;
class Extrema_SequenceOfPOnCurv;
class Extrema_ELPCOfLocateExtPC;
class Extrema_EPCOfELPCOfLocateExtPC;
class Extrema_LocEPCOfLocateExtPC;
class Extrema_PCLocFOfLocEPCOfLocateExtPC;



class Extrema_LocateExtPC  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_LocateExtPC();
  
  Standard_EXPORT   Extrema_LocateExtPC(const gp_Pnt& P,const Adaptor3d_Curve& C,const Standard_Real U0,const Standard_Real TolF);
  
  Standard_EXPORT   Extrema_LocateExtPC(const gp_Pnt& P,const Adaptor3d_Curve& C,const Standard_Real U0,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolF);
  
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Standard_Real Umin,const Standard_Real Usup,const Standard_Real TolF) ;
  
  Standard_EXPORT     void Perform(const gp_Pnt& P,const Standard_Real U0) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     Standard_Real SquareDistance() const;
  
  Standard_EXPORT     Standard_Boolean IsMin() const;
  
  Standard_EXPORT    const Extrema_POnCurv& Point() const;





protected:





private:



Extrema_POnCurv mypp;
Standard_Address myC;
Standard_Real mydist2;
Standard_Boolean myismin;
Standard_Boolean myDone;
Standard_Real myumin;
Standard_Real myusup;
Standard_Real mytol;
Extrema_LocEPCOfLocateExtPC myLocExtPC;
Extrema_ELPCOfLocateExtPC myExtremPC;
GeomAbs_CurveType type;
Standard_Integer numberext;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif