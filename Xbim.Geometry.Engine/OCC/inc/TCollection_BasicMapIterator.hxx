// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_BasicMapIterator_HeaderFile
#define _TCollection_BasicMapIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TCollection_BasicMap;


//! This  class  provides    basic   services  for the <br>
//! iterators  on Maps. The  iterators  are  inherited <br>
//! from this one. <br>
//! <br>
//! The  iterator   contains  an   array   of pointers <br>
//! (buckets). Each bucket is a  pointer  on a node. A <br>
//! node contains a pointer on the next node. <br>
//! <br>
//! This class  provides also basic  services for  the <br>
//! implementation of Maps. <br>
//! A map iterator provides a step by step exploration of all <br>
//! entries of a map. After initialization of a concrete derived <br>
//! iterator, use in a loop: <br>
//! -   the function More to know if there is a current entry for <br>
//!   the iterator in the map, <br>
//! -   then the functions which read data on an entry of the <br>
//!   map (these functions are provided by each type of map), <br>
//! -   then the function Next to set the iterator to the next   entry of the map. <br>
//!   Warning <br>
//! -   A map is a non-ordered data structure. The order in <br>
//!   which entries of a map are explored by the iterator <br>
//!  depends on its contents, and change when the map is edited. <br>
//! -   It is not recommended to modify the contents of a map <br>
//!   during iteration: the result is unpredictable. <br>
class TCollection_BasicMapIterator  {
public:

  DEFINE_STANDARD_ALLOC

  //! Resets the iterator to the first node. <br>
  Standard_EXPORT     void Reset() ;
  //! Returns true if there is a current entry for this iterator in the map. <br>
//! Use the function Next to set this iterator to the position of <br>
//! the next entry, if it exists. <br>
        Standard_Boolean More() const;
  //! Sets this iterator to the position of the next entry of the map. <br>
//! Nothing is changed if there is no more entry to explore in <br>
//! the map: this iterator is always positioned on the last entry <br>
//! of the map but the function More returns false. <br>
  Standard_EXPORT     void Next() ;





protected:

  //! Creates an empty iterator. <br>
  Standard_EXPORT   TCollection_BasicMapIterator();
  //! Initialize on the first node in the buckets. <br>
  Standard_EXPORT   TCollection_BasicMapIterator(const TCollection_BasicMap& M);
  //! Initialize on the first node in the buckets. <br>
  Standard_EXPORT     void Initialize(const TCollection_BasicMap& M) ;


Standard_Address myNode;


private:



Standard_Integer myNbBuckets;
Standard_Address myBuckets;
Standard_Integer myBucket;


};


#include <TCollection_BasicMapIterator.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif