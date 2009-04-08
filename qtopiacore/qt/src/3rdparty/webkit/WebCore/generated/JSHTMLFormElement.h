/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLFormElement_h
#define JSHTMLFormElement_h

#include "JSHTMLElement.h"

namespace WebCore {

class HTMLFormElement;

class JSHTMLFormElement : public JSHTMLElement {
    typedef JSHTMLElement Base;
public:
    JSHTMLFormElement(PassRefPtr<JSC::Structure>, PassRefPtr<HTMLFormElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    virtual void getPropertyNames(JSC::ExecState*, JSC::PropertyNameArray&);
    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
    static JSC::JSValuePtr indexGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFormElement*, const JSC::Identifier&);
    static JSC::JSValuePtr nameGetter(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
};


class JSHTMLFormElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSHTMLFormElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Functions

JSC::JSValuePtr jsHTMLFormElementPrototypeFunctionSubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
JSC::JSValuePtr jsHTMLFormElementPrototypeFunctionReset(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr, const JSC::ArgList&);
// Attributes

JSC::JSValuePtr jsHTMLFormElementElements(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLFormElementLength(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsHTMLFormElementName(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementAcceptCharset(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementAcceptCharset(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementAction(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementAction(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementEncoding(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementEncoding(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementEnctype(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementEnctype(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementMethod(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementMethod(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementTarget(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSHTMLFormElementTarget(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsHTMLFormElementConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif
