// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef CloseEventInit_h
#define CloseEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT CloseEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    CloseEventInit();

    bool hasCode() const { return !m_code.isNull(); }
    unsigned code() const { return m_code.get(); }
    void setCode(unsigned value) { m_code = value; }

    bool hasReason() const { return !m_reason.isNull(); }
    String reason() const { return m_reason; }
    void setReason(String value) { m_reason = value; }

    bool hasWasClean() const { return !m_wasClean.isNull(); }
    bool wasClean() const { return m_wasClean.get(); }
    void setWasClean(bool value) { m_wasClean = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<unsigned> m_code;
    String m_reason;
    Nullable<bool> m_wasClean;

    friend class V8CloseEventInit;
};

} // namespace blink

#endif // CloseEventInit_h
