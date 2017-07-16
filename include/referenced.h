// ----------------------------------------------------------------------------
//  2016 Marcos Vazquez Rey
//  All copyright applies in cascade
// ----------------------------------------------------------------------------
// Copyright (C) 2014 Jose L. Hidalgo 
// Referenced Class.
// ----------------------------------------------------------------------------
#ifndef INCLUDE_EDK3_REFERENCED_H_
#define INCLUDE_EDK3_REFERENCED_H_

#include <cassert>
#include "types.h"

  // Referenced base class
  class Referenced {
  public:
    uint32 ref_counter() const { return ref_counter_; }
    void ref();
    void unref();
    void unref_noDelete();

  protected:
    Referenced() : ref_counter_(0) {}
    virtual ~Referenced() {}

  private:
    uint32 ref_counter_;
    Referenced(const Referenced &);
    Referenced& operator=(const Referenced &);
  };

  // Inline Implementations -------------------------------------------------

  inline void Referenced::ref() {
    ++ref_counter_;
  }

  inline void Referenced::unref() {
    assert(ref_counter_ > 0);
    --ref_counter_;
    if (ref_counter_ == 0) {
      delete this;
    }
  }
  
  inline void Referenced::unref_noDelete() {
    assert(ref_counter_ > 0);
    --ref_counter_;
  }

#endif  // INCLUDE_EDK3_REFERENCED_H_

