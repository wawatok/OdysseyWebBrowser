/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef WebKitDOMTestCustomConstructorWithNoInterfaceObject_h
#define WebKitDOMTestCustomConstructorWithNoInterfaceObject_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT            (webkit_dom_test_custom_constructor_with_no_interface_object_get_type())
#define WEBKIT_DOM_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT, WebKitDOMTestCustomConstructorWithNoInterfaceObject))
#define WEBKIT_DOM_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT, WebKitDOMTestCustomConstructorWithNoInterfaceObjectClass)
#define WEBKIT_DOM_IS_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT))
#define WEBKIT_DOM_IS_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT))
#define WEBKIT_DOM_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_TEST_CUSTOM_CONSTRUCTOR_WITH_NO_INTERFACE_OBJECT, WebKitDOMTestCustomConstructorWithNoInterfaceObjectClass))

struct _WebKitDOMTestCustomConstructorWithNoInterfaceObject {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMTestCustomConstructorWithNoInterfaceObjectClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_test_custom_constructor_with_no_interface_object_get_type(void);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMTestCustomConstructorWithNoInterfaceObject_h */
