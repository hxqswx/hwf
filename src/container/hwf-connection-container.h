/* -*- mode: C; c-basic-offset: 4; indent-tabs-mode: nil; -*- */
/*
 * Copyright (c) 2010 Havoc Pennington
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef __HWF_CONNECTION_CONTAINER_H__
#define __HWF_CONNECTION_CONTAINER_H__

#include <glib-object.h>
#include <hio/hio-connection-http.h>

G_BEGIN_DECLS

typedef struct HwfConnectionContainer      HwfConnectionContainer;
typedef struct HwfConnectionContainerClass HwfConnectionContainerClass;

#define HWF_TYPE_CONNECTION_CONTAINER              (hwf_connection_container_get_type ())
#define HWF_CONNECTION_CONTAINER(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), HWF_TYPE_CONNECTION_CONTAINER, HwfConnectionContainer))
#define HWF_CONNECTION_CONTAINER_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), HWF_TYPE_CONNECTION_CONTAINER, HwfConnectionContainerClass))
#define HWF_IS_CONNECTION_CONTAINER(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), HWF_TYPE_CONNECTION_CONTAINER))
#define HWF_IS_CONNECTION_CONTAINER_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), HWF_TYPE_CONNECTION_CONTAINER))
#define HWF_CONNECTION_CONTAINER_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), HWF_TYPE_CONNECTION_CONTAINER, HwfConnectionContainerClass))

GType           hwf_connection_container_get_type                  (void) G_GNUC_CONST;

G_END_DECLS

#endif  /* __HWF_CONNECTION_CONTAINER_H__ */
