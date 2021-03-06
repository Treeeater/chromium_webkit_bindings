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
    the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
    Boston, MA 02111-1307, USA.
*/

#if ENABLE(XSLT)

#ifndef V8XSLTProcessor_h
#define V8XSLTProcessor_h

#include "WrapperTypeInfo.h"
#include "XSLTProcessor.h"
#include "wtf/text/StringHash.h"
#include <v8.h>
#include <wtf/HashMap.h>

namespace WebCore {

class V8XSLTProcessor {

public:
    static bool HasInstance(v8::Handle<v8::Value> value);
    static v8::Persistent<v8::FunctionTemplate> GetRawTemplate();
    static v8::Persistent<v8::FunctionTemplate> GetTemplate();
    static XSLTProcessor* toNative(v8::Handle<v8::Object>);
    static v8::Handle<v8::Object> wrap(XSLTProcessor*);
    static void derefObject(void*);
    static WrapperTypeInfo info;
    static v8::Handle<v8::Value> importStylesheetCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> transformToFragmentCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> transformToDocumentCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> setParameterCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> getParameterCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> removeParameterCallback(const v8::Arguments&);
    static v8::Handle<v8::Value> constructorCallback(const v8::Arguments& args);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
};

v8::Handle<v8::Value> toV8(XSLTProcessor*);
v8::Handle<v8::Value> toV8(PassRefPtr<XSLTProcessor >);
}

#endif // V8XSLTProcessor_h
#endif // ENABLE(XSLT)

