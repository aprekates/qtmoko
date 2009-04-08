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

#ifndef JSSVGFEFuncAElement_h
#define JSSVGFEFuncAElement_h


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "JSSVGComponentTransferFunctionElement.h"

namespace WebCore {

class SVGFEFuncAElement;

class JSSVGFEFuncAElement : public JSSVGComponentTransferFunctionElement {
    typedef JSSVGComponentTransferFunctionElement Base;
public:
    JSSVGFEFuncAElement(PassRefPtr<JSC::Structure>, PassRefPtr<SVGFEFuncAElement>);
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

};


class JSSVGFEFuncAElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    JSSVGFEFuncAElementPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};


} // namespace WebCore

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)

#endif
