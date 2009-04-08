/*
 * Copyright (C) 2009 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JSByteArray.h"

#include "JSGlobalObject.h"
#include "PropertyNameArray.h"

namespace JSC {

const ClassInfo JSByteArray::s_defaultInfo = { "ByteArray", 0, 0, 0 };

JSByteArray::JSByteArray(ExecState* exec, PassRefPtr<Structure> structure, ByteArray* storage, const JSC::ClassInfo* classInfo)
    : JSObject(structure)
    , m_storage(storage)
    , m_classInfo(classInfo)
{
    putDirect(exec->globalData().propertyNames->length, jsNumber(exec, m_storage->length()), ReadOnly | DontDelete);
}
    
PassRefPtr<Structure> JSByteArray::createStructure(JSValuePtr prototype)
{
    PassRefPtr<Structure> result = Structure::create(prototype, TypeInfo(ObjectType));
    return result;
}

bool JSByteArray::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok && canAccessIndex(index)) {
        slot.setValue(getIndex(index));
        return true;
    }
    return JSObject::getOwnPropertySlot(exec, propertyName, slot);
}
    
bool JSByteArray::getOwnPropertySlot(ExecState* exec, unsigned propertyName, PropertySlot& slot)
{
    if (canAccessIndex(propertyName)) {
        slot.setValue(getIndex(propertyName));
        return true;
    }
    return JSObject::getOwnPropertySlot(exec, Identifier::from(exec, propertyName), slot);
}

void JSByteArray::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        setIndex(exec, index, value);
        return;
    }
    JSObject::put(exec, propertyName, value, slot);
}

void JSByteArray::put(ExecState* exec, unsigned propertyName, JSValuePtr value)
{
    setIndex(exec, propertyName, value);
}

void JSByteArray::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    unsigned length = m_storage->length();
    for (unsigned i = 0; i < length; ++i)
        propertyNames.add(Identifier::from(exec, i));
    JSObject::getPropertyNames(exec, propertyNames);
}

}

