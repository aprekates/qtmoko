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

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_FILTERS)

#include "SVGElement.h"
#include "JSSVGFilterElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "KURL.h"
#include "SVGFilterElement.h"

#include <runtime/Error.h>
#include <runtime/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFilterElement)

/* Hash table */

static const HashTableValue JSSVGFilterElementTableValues[15] =
{
    { "filterUnits", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementFilterUnits, (intptr_t)0 },
    { "primitiveUnits", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementPrimitiveUnits, (intptr_t)0 },
    { "x", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementX, (intptr_t)0 },
    { "y", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementY, (intptr_t)0 },
    { "width", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementWidth, (intptr_t)0 },
    { "height", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementHeight, (intptr_t)0 },
    { "filterResX", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementFilterResX, (intptr_t)0 },
    { "filterResY", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementFilterResY, (intptr_t)0 },
    { "href", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementHref, (intptr_t)0 },
    { "xmllang", DontDelete, (intptr_t)jsSVGFilterElementXmllang, (intptr_t)setJSSVGFilterElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)jsSVGFilterElementXmlspace, (intptr_t)setJSSVGFilterElementXmlspace },
    { "externalResourcesRequired", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementExternalResourcesRequired, (intptr_t)0 },
    { "className", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementClassName, (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)jsSVGFilterElementStyle, (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFilterElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 511, JSSVGFilterElementTableValues, 0 };
#else
    { 35, 31, JSSVGFilterElementTableValues, 0 };
#endif

/* Hash table for prototype */

static const HashTableValue JSSVGFilterElementPrototypeTableValues[3] =
{
    { "setFilterRes", DontDelete|Function, (intptr_t)jsSVGFilterElementPrototypeFunctionSetFilterRes, (intptr_t)2 },
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)jsSVGFilterElementPrototypeFunctionGetPresentationAttribute, (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGFilterElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGFilterElementPrototypeTableValues, 0 };
#else
    { 5, 3, JSSVGFilterElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGFilterElementPrototype::s_info = { "SVGFilterElementPrototype", 0, &JSSVGFilterElementPrototypeTable, 0 };

JSObject* JSSVGFilterElementPrototype::self(ExecState* exec)
{
    return getDOMPrototype<JSSVGFilterElement>(exec);
}

bool JSSVGFilterElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFilterElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFilterElement::s_info = { "SVGFilterElement", &JSSVGElement::s_info, &JSSVGFilterElementTable, 0 };

JSSVGFilterElement::JSSVGFilterElement(PassRefPtr<Structure> structure, PassRefPtr<SVGFilterElement> impl)
    : JSSVGElement(structure, impl)
{
}

JSObject* JSSVGFilterElement::createPrototype(ExecState* exec)
{
    return new (exec) JSSVGFilterElementPrototype(JSSVGFilterElementPrototype::createStructure(JSSVGElementPrototype::self(exec)));
}

bool JSSVGFilterElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFilterElement, Base>(exec, &JSSVGFilterElementTable, this, propertyName, slot);
}

JSValuePtr jsSVGFilterElementFilterUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->filterUnitsAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementPrimitiveUnits(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedEnumeration> obj = imp->primitiveUnitsAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementWidth(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementHeight(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementFilterResX(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->filterResXAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementFilterResY(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedInteger> obj = imp->filterResYAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementHref(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementXmllang(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->xmllang());
}

JSValuePtr jsSVGFilterElementXmlspace(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    return jsString(exec, imp->xmlspace());
}

JSValuePtr jsSVGFilterElementExternalResourcesRequired(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementClassName(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    return toJS(exec, obj.get(), imp);
}

JSValuePtr jsSVGFilterElementStyle(ExecState* exec, const Identifier&, const PropertySlot& slot)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(asObject(slot.slotBase()))->impl());
    return toJS(exec, WTF::getPtr(imp->style()));
}

void JSSVGFilterElement::put(ExecState* exec, const Identifier& propertyName, JSValuePtr value, PutPropertySlot& slot)
{
    lookupPut<JSSVGFilterElement, Base>(exec, propertyName, value, &JSSVGFilterElementTable, this, slot);
}

void setJSSVGFilterElementXmllang(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(thisObject)->impl());
    imp->setXmllang(value->toString(exec));
}

void setJSSVGFilterElementXmlspace(ExecState* exec, JSObject* thisObject, JSValuePtr value)
{
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(static_cast<JSSVGFilterElement*>(thisObject)->impl());
    imp->setXmlspace(value->toString(exec));
}

JSValuePtr jsSVGFilterElementPrototypeFunctionSetFilterRes(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFilterElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFilterElement* castedThisObj = static_cast<JSSVGFilterElement*>(asObject(thisValue));
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(castedThisObj->impl());
    unsigned filterResX = args.at(exec, 0)->toInt32(exec);
    unsigned filterResY = args.at(exec, 1)->toInt32(exec);

    imp->setFilterRes(filterResX, filterResY);
    return jsUndefined();
}

JSValuePtr jsSVGFilterElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValuePtr thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGFilterElement::s_info))
        return throwError(exec, TypeError);
    JSSVGFilterElement* castedThisObj = static_cast<JSSVGFilterElement*>(asObject(thisValue));
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValuePtr result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FILTERS)
