/*
 * Copyright (c) 2000, 2002 IBM Corp.  All rights reserved.
 * The contents of this file are made available under the terms
 * of the GNU Lesser General Public License (LGPL) Version 2.1 that
 * accompanies this distribution (lgpl-v21.txt).  The LGPL is also
 * available at http://www.gnu.org/licenses/lgpl.html.  If the version
 * of the LGPL at http://www.gnu.org is different to the version of
 * the LGPL accompanying this distribution and there is any conflict
 * between the two license versions, the terms of the LGPL accompanying
 * this distribution shall govern.
 */

#define G_DISABLE_DEPRECATED
#define GTK_DISABLE_DEPRECATED

#include "swt.h"
#include "structs.h"
#include <string.h>

#ifndef NO_GDK_1ROOT_1PARENT
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GDK_1ROOT_1PARENT
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("GDK_1ROOT_1PARENT\n")

	return (jint)GDK_ROOT_PARENT();
}
#endif

#ifndef NO_GDK_1TYPE_1COLOR
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GDK_1TYPE_1COLOR
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("GDK_1TYPE_1COLOR\n")

	return (jint)GDK_TYPE_COLOR;
}
#endif

#ifndef NO_GDK_1TYPE_1PIXBUF
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GDK_1TYPE_1PIXBUF
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("GDK_1TYPE_1PIXBUF\n")

	return (jint)GDK_TYPE_PIXBUF;
}
#endif

#ifndef NO_GTK_1ACCEL_1LABEL_1ACCEL_1STRING__II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1ACCEL_1LABEL_1ACCEL_1STRING__II
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("GTK_1ACCEL_1LABEL_1ACCEL_1STRING__II\n")

	((GtkAccelLabel *)arg0)->accel_string = (gchar *)arg1;
}
#endif

#ifndef NO_GTK_1ACCEL_1LABEL_1ACCEL_1STRING__I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1ACCEL_1LABEL_1ACCEL_1STRING__I
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1ACCEL_1LABEL_1ACCEL_1STRING__I\n")

	return (jint)((GtkAccelLabel *)arg0)->accel_string;
}
#endif

#ifndef NO_GTK_1IS_1CELL_1RENDERER_1PIXBUF
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1IS_1CELL_1RENDERER_1PIXBUF
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1IS_1CELL_1RENDERER_1PIXBUF\n")

	return (jboolean)GTK_IS_CELL_RENDERER_PIXBUF(arg0);
}
#endif

#ifndef NO_GTK_1SCROLLED_1WINDOW_1HSCROLLBAR
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1SCROLLED_1WINDOW_1HSCROLLBAR
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1SCROLLED_1WINDOW_1HSCROLLBAR\n")

	return (jint)((GtkScrolledWindow *)arg0)->hscrollbar;
}
#endif

#ifndef NO_GTK_1SCROLLED_1WINDOW_1SCROLLBAR_1SPACING
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1SCROLLED_1WINDOW_1SCROLLBAR_1SPACING
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1SCROLLED_1WINDOW_1SCROLLBAR_1SPACING\n")

#define DEFAULT_SCROLLBAR_SPACING  3

	return (GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing >= 0 ?
		GTK_SCROLLED_WINDOW_GET_CLASS (arg0)->scrollbar_spacing : DEFAULT_SCROLLBAR_SPACING);
}
#endif

#ifndef NO_GTK_1SCROLLED_1WINDOW_1VSCROLLBAR
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1SCROLLED_1WINDOW_1VSCROLLBAR
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1SCROLLED_1WINDOW_1VSCROLLBAR\n")

	return (jint)((GtkScrolledWindow *)arg0)->vscrollbar;
}
#endif

#ifndef NO_GTK_1WIDGET_1FLAGS
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1FLAGS
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1FLAGS\n")

	return (jint)GTK_WIDGET_FLAGS(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1HAS_1DEFAULT
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1HAS_1DEFAULT
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1HAS_1DEFAULT\n")

	return (jboolean)GTK_WIDGET_HAS_DEFAULT(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1HAS_1FOCUS
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1HAS_1FOCUS
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1HAS_1FOCUS\n")

	return (jboolean)GTK_WIDGET_HAS_FOCUS(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1HEIGHT
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1HEIGHT
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1HEIGHT\n")

	return (jint)((GtkWidget *)arg0)->allocation.height;
}
#endif

#ifndef NO_GTK_1WIDGET_1IS_1SENSITIVE
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1IS_1SENSITIVE
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1IS_1SENSITIVE\n")

	return (jboolean)GTK_WIDGET_IS_SENSITIVE(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1MAPPED
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1MAPPED
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1MAPPED\n")

	return (jboolean)GTK_WIDGET_MAPPED(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1SENSITIVE
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1SENSITIVE
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1SENSITIVE\n")

	return (jboolean)GTK_WIDGET_SENSITIVE(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1SET_1FLAGS
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1SET_1FLAGS
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("GTK_1WIDGET_1SET_1FLAGS\n")

	GTK_WIDGET_SET_FLAGS(arg0, arg1);
}
#endif

#ifndef NO_GTK_1WIDGET_1UNSET_1FLAGS
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1UNSET_1FLAGS
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("GTK_1WIDGET_1UNSET_1FLAGS\n")

	GTK_WIDGET_UNSET_FLAGS(arg0, arg1);
}
#endif

#ifndef NO_GTK_1WIDGET_1VISIBLE
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1VISIBLE
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1VISIBLE\n")

	return (jboolean)GTK_WIDGET_VISIBLE(arg0);
}
#endif

#ifndef NO_GTK_1WIDGET_1WIDTH
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1WIDTH
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1WIDTH\n")

	return (jint)((GtkWidget *)arg0)->allocation.width;
}
#endif

#ifndef NO_GTK_1WIDGET_1WINDOW
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1WINDOW
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1WINDOW\n")

	return (jint)((GtkWidget *)arg0)->window;
}
#endif

#ifndef NO_GTK_1WIDGET_1X
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1X
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1X\n")

	return (jint)((GtkWidget *)arg0)->allocation.x;
}
#endif

#ifndef NO_GTK_1ENTRY_1IM_1CONTEXT
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1ENTRY_1IM_1CONTEXT
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1ENTRY_1IM_1CONTEXT\n")

	return (jint)((GtkEntry *)arg0)->im_context;
}
#endif

#ifndef NO_GTK_1TEXTVIEW_1IM_1CONTEXT
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1TEXTVIEW_1IM_1CONTEXT
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1TEXTVIEW_1IM_1CONTEXT\n")

	return (jint)((GtkTextView *)arg0)->im_context;
}
#endif

#ifndef NO_GTK_1WIDGET_1Y
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GTK_1WIDGET_1Y
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("GTK_1WIDGET_1Y\n")

	return (jint)((GtkWidget *)arg0)->allocation.y;
}
#endif

#ifndef NO_G_1TYPE_1BOOLEAN
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_G_1TYPE_1BOOLEAN
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("G_1TYPE_1BOOLEAN\n")

	return (jint)G_TYPE_BOOLEAN;
}
#endif

#ifndef NO_G_1TYPE_1INT
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_G_1TYPE_1INT
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("G_1TYPE_1INT\n")

	return (jint)G_TYPE_INT;
}
#endif

#ifndef NO_G_1TYPE_1STRING
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_G_1TYPE_1STRING
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("G_1TYPE_1STRING\n")

	return (jint)G_TYPE_STRING;
}
#endif

#ifndef NO_GtkTreeIter_1sizeof
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_GtkTreeIter_1sizeof
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("GtkTreeIter_1sizeof\n")

	return (jint)sizeof(GtkTreeIter);
}
#endif

#ifndef NO_PANGO_1PIXELS
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_PANGO_1PIXELS
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("PANGO_1PIXELS\n")

	return (jint)PANGO_PIXELS(arg0);
}
#endif

#ifndef NO_g_1filename_1from_1utf8
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1filename_1from_1utf8
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jintArray arg2, jintArray arg3, jintArray arg4)
{
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint rc;

	DEBUG_CALL("g_1filename_1from_1utf8\n")

	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	rc = (jint)g_filename_from_utf8((const gchar *)arg0, arg1, lparg2, lparg3, (GError **)lparg4);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	return rc;
}
#endif

#ifndef NO_g_1filename_1to_1utf8
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1filename_1to_1utf8
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jintArray arg2, jintArray arg3, jintArray arg4)
{
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint rc;

	DEBUG_CALL("g_1filename_1to_1utf8\n")

	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	rc = (jint)g_filename_to_utf8((const gchar *)arg0, arg1, lparg2, lparg3, (GError **)lparg4);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	return rc;
}
#endif

#ifndef NO_g_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1free\n")

	g_free((gpointer)arg0);
}
#endif

#ifndef NO_g_1list_1append
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1append
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1append\n")

	return (jint)g_list_append((GList *)arg0, (gpointer)arg1);
}
#endif

#ifndef NO_g_1list_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1free\n")

	g_list_free((GList *)arg0);
}
#endif

#ifndef NO_g_1list_1free_11
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1free_11
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1free_11\n")

	g_list_free_1((GList *)arg0);
}
#endif

#ifndef NO_g_1list_1length
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1length
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1length\n")

	return (jint)g_list_length((GList *)arg0);
}
#endif

#ifndef NO_g_1list_1next__II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1next__II
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1next__II\n")

	((GList *)arg0)->next = (GList *)arg1;
}
#endif

#ifndef NO_g_1list_1next__I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1next__I
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1next__I\n")

	return (jint)g_list_next(arg0);
}
#endif

#ifndef NO_g_1list_1nth
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1nth
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1nth\n")

	return (jint)g_list_nth((GList *)arg0, (guint)arg1);
}
#endif

#ifndef NO_g_1list_1nth_1data
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1nth_1data
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1nth_1data\n")

	return (jint)g_list_nth_data((GList *)arg0, (guint)arg1);
}
#endif

#ifndef NO_g_1list_1prepend
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1prepend
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1prepend\n")

	return (jint)g_list_prepend((GList *)arg0, (gpointer)arg1);
}
#endif

#ifndef NO_g_1list_1previous__II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1previous__II
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1previous__II\n")

	((GList *)arg0)->prev = (GList *)arg1;
}
#endif

#ifndef NO_g_1list_1previous__I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1previous__I
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1previous__I\n")

	return (jint)g_list_previous(arg0);
}
#endif

#ifndef NO_g_1list_1remove_1link
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1remove_1link
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1list_1remove_1link\n")

	return (jint)g_list_remove_link((GList *)arg0, (GList *)arg1);
}
#endif

#ifndef NO_g_1list_1reverse
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1list_1reverse
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1list_1reverse\n")

	return (jint)g_list_reverse((GList *)arg0);
}
#endif

#ifndef NO_g_1log_1default_1handler
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1log_1default_1handler
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("g_1log_1default_1handler\n")

	g_log_default_handler((gchar *)arg0, (GLogLevelFlags)arg1, (gchar *)arg2, (gpointer)arg3);
}
#endif

#ifndef NO_g_1log_1remove_1handler
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1log_1remove_1handler
	(JNIEnv *env, jclass that, jbyteArray arg0, jint arg1)
{
	jbyte *lparg0=NULL;

	DEBUG_CALL("g_1log_1remove_1handler\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	g_log_remove_handler((gchar *)lparg0, (gint)arg1);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
}
#endif

#ifndef NO_g_1log_1set_1handler
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1log_1set_1handler
	(JNIEnv *env, jclass that, jbyteArray arg0, jint arg1, jint arg2, jint arg3)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("g_1log_1set_1handler\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)g_log_set_handler((gchar *)lparg0, (GLogLevelFlags)arg1, (GLogFunc)arg2, (gpointer)arg3);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_g_1malloc
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1malloc
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1malloc\n")

	return (jint)g_malloc((gulong)arg0);
}
#endif

#ifndef NO_g_1object_1get_1qdata
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1object_1get_1qdata
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1object_1get_1qdata\n")

	return (jint)g_object_get_qdata((GObject *)arg0, (GQuark)arg1);
}
#endif

#ifndef NO_g_1object_1ref
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1object_1ref
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1object_1ref\n")

	return (jint)g_object_ref((gpointer)arg0);
}
#endif

#ifndef NO_g_1object_1set
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1object_1set
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("g_1object_1set\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	g_object_set((gpointer)arg0, (gchar *)lparg1, arg2, NULL);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_g_1object_1set_1qdata
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1object_1set_1qdata
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("g_1object_1set_1qdata\n")

	g_object_set_qdata((GObject *)arg0, (GQuark)arg1, (gpointer)arg2);
}
#endif

#ifndef NO_g_1object_1unref
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1object_1unref
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1object_1unref\n")

	g_object_unref((gpointer)arg0);
}
#endif

#ifndef NO_g_1quark_1from_1string
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1quark_1from_1string
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("g_1quark_1from_1string\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)g_quark_from_string(lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_g_1signal_1connect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1connect
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jint arg3)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("g_1signal_1connect\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	g_signal_connect((gpointer)arg0, (const gchar *)lparg1, (GCallback)arg2, (gpointer)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_g_1signal_1connect_1after
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1connect_1after
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jint arg3)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("g_1signal_1connect_1after\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	g_signal_connect_after((gpointer)arg0, (const gchar *)lparg1, (GCallback)arg2, (gpointer)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_g_1signal_1handlers_1block_1matched
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1handlers_1block_1matched
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	DEBUG_CALL("g_1signal_1handlers_1block_1matched\n")

	return (jint)g_signal_handlers_block_matched((gpointer)arg0, (GSignalMatchType)arg1, (guint)arg2, (GQuark)arg3, (GClosure *)arg4, (gpointer)arg5, (gpointer)arg6);
}
#endif

#ifndef NO_g_1signal_1handlers_1disconnect_1matched
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1handlers_1disconnect_1matched
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	DEBUG_CALL("g_1signal_1handlers_1disconnect_1matched\n")

	return (jint)g_signal_handlers_disconnect_matched((gpointer)arg0, (GSignalMatchType)arg1, (guint)arg2, (GQuark)arg3, (GClosure *)arg4, (gpointer)arg5, (gpointer)arg6);
}
#endif

#ifndef NO_g_1signal_1handlers_1unblock_1matched
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1handlers_1unblock_1matched
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	DEBUG_CALL("g_1signal_1handlers_1unblock_1matched\n")

	return (jint)g_signal_handlers_unblock_matched((gpointer)arg0, (GSignalMatchType)arg1, (guint)arg2, (GQuark)arg3, (GClosure *)arg4, (gpointer)arg5, (gpointer)arg6);
}
#endif

#ifndef NO_g_1signal_1stop_1emission_1by_1name
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1signal_1stop_1emission_1by_1name
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("g_1signal_1stop_1emission_1by_1name\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	g_signal_stop_emission_by_name((gpointer)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_g_1strfreev
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1strfreev
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1strfreev\n")

	g_strfreev((gchar **)arg0);
}
#endif

#ifndef NO_g_1thread_1init
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1thread_1init
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("g_1thread_1init\n")

	g_thread_init((GThreadFunctions *)arg0);
}
#endif

#ifndef NO_g_1thread_1supported
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1thread_1supported
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("g_1thread_1supported\n")

	return (jboolean)g_thread_supported();
}
#endif

#ifndef NO_g_1utf16_1to_1utf8
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1utf16_1to_1utf8
	(JNIEnv *env, jclass that, jcharArray arg0, jint arg1, jintArray arg2, jintArray arg3, jintArray arg4)
{
	jchar *lparg0=NULL;
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint rc;

	DEBUG_CALL("g_1utf16_1to_1utf8\n")

	if (arg0) lparg0 = (*env)->GetCharArrayElements(env, arg0, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	rc = (jint)g_utf16_to_utf8((const gunichar2 *)lparg0, (glong)arg1, (glong *)lparg2, (glong *)lparg3, (GError **)lparg4);
	if (arg0) (*env)->ReleaseCharArrayElements(env, arg0, lparg0, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	return rc;
}
#endif

#ifndef NO_g_1utf8_1strlen
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1utf8_1strlen
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("g_1utf8_1strlen\n")
	return  (jint)g_utf8_strlen((const gchar *)arg0, (gssize)arg1);
}
#endif

#ifndef NO_g_1utf8_1to_1utf16__II_3I_3I_3I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1utf8_1to_1utf16__II_3I_3I_3I
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jintArray arg2, jintArray arg3, jintArray arg4)
{
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint rc;

	DEBUG_CALL("g_1utf8_1to_1utf16__II_3I_3I_3I\n")

	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	rc = (jint)g_utf8_to_utf16((const gchar *)arg0, (glong)arg1, (glong *)lparg2, (glong *)lparg3, (GError **)lparg4);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	return rc;
}
#endif

#ifndef NO_g_1utf8_1to_1utf16___3BI_3I_3I_3I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_g_1utf8_1to_1utf16___3BI_3I_3I_3I
	(JNIEnv *env, jclass that, jbyteArray arg0, jint arg1, jintArray arg2, jintArray arg3, jintArray arg4)
{
	jbyte *lparg0=NULL;
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint rc;

	DEBUG_CALL("g_1utf8_1to_1utf16___3BI_3I_3I_3I\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	rc = (jint)g_utf8_to_utf16((const gchar *)lparg0, (glong)arg1, (glong *)lparg2, (glong *)lparg3, (GError **)lparg4);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1atom_1intern
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1atom_1intern
	(JNIEnv *env, jclass that, jbyteArray arg0, jboolean arg1)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gdk_1atom_1intern\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gdk_atom_intern(lparg0, arg1);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1atom_1name
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1atom_1name
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1atom_1name\n")

	return (jint)gdk_atom_name((GdkAtom)arg0);
}
#endif

#ifndef NO_gdk_1beep
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1beep
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1beep\n")

	gdk_beep();
}
#endif

#ifndef NO_gdk_1bitmap_1create_1from_1data
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1bitmap_1create_1from_1data
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jint arg3)
{
	jbyte *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gdk_1bitmap_1create_1from_1data\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jint)gdk_bitmap_create_from_data((GdkWindow *)arg0, (const gchar *)lparg1, (gint)arg2, (gint)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1color_1white
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1color_1white
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkColor _arg1, *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gdk_1color_1white\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	rc = (jboolean)gdk_color_white((GdkColormap *)arg0, (GdkColor *)lparg1);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
	return rc;
}
#endif

#ifndef NO_gdk_1colormap_1alloc_1color
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1colormap_1alloc_1color
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jboolean arg2, jboolean arg3)
{
	GdkColor _arg1, *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gdk_1colormap_1alloc_1color\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	rc = (jboolean)gdk_colormap_alloc_color((GdkColormap *)arg0, (GdkColor *)lparg1, (gboolean)arg2, (gboolean)arg3);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
	return rc;
}
#endif

#ifndef NO_gdk_1colormap_1free_1colors
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1colormap_1free_1colors
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jint arg2)
{
	GdkColor _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1colormap_1free_1colors\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	gdk_colormap_free_colors((GdkColormap *)arg0, (GdkColor *)lparg1, (gint)arg2);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1colormap_1get_1system
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1colormap_1get_1system
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1colormap_1get_1system\n")

	return (jint)gdk_colormap_get_system();
}
#endif

#ifndef NO_gdk_1colormap_1query_1color
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1colormap_1query_1color
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2)
{
	GdkColor _arg2, *lparg2=NULL;

	DEBUG_CALL("gdk_1colormap_1query_1color\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	gdk_colormap_query_color((GdkColormap *)arg0, (gulong)arg1, (GdkColor *)lparg2);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gdk_1cursor_1destroy
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1cursor_1destroy
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1cursor_1destroy\n")

	gdk_cursor_destroy((GdkCursor *)arg0);
}
#endif

#ifndef NO_gdk_1cursor_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1cursor_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1cursor_1new\n")

	return (jint)gdk_cursor_new((GdkCursorType)arg0);
}
#endif

#ifndef NO_gdk_1cursor_1new_1from_1pixmap
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1cursor_1new_1from_1pixmap
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2, jobject arg3, jint arg4, jint arg5)
{
	GdkColor _arg2, *lparg2=NULL;
	GdkColor _arg3, *lparg3=NULL;
	jint rc;

	DEBUG_CALL("gdk_1cursor_1new_1from_1pixmap\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	if (arg3) lparg3 = getGdkColorFields(env, arg3, &_arg3);
	rc = (jint)gdk_cursor_new_from_pixmap((GdkPixmap *)arg0, (GdkPixmap *)arg1, (GdkColor *)lparg2, (GdkColor *)lparg3, (gint)arg4, (gint)arg5);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
	if (arg3) setGdkColorFields(env, arg3, lparg3);
	return rc;
}
#endif

#ifndef NO_gdk_1drag_1status
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1drag_1status
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gdk_1drag_1status\n")

	gdk_drag_status((GdkDragContext *)arg0, (GdkDragAction)arg1, (guint32)arg2);
}
#endif

#ifndef NO_gdk_1draw_1arc
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1arc
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
{
	DEBUG_CALL("gdk_1draw_1arc\n")

	gdk_draw_arc((GdkDrawable *)arg0, (GdkGC *)arg1, (gint)arg2, (gint)arg3, (gint)arg4, (gint)arg5, (gint)arg6, (gint)arg7, (gint)arg8);
}
#endif

#ifndef NO_gdk_1draw_1drawable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1drawable
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
{
	DEBUG_CALL("gdk_1draw_1drawable\n")

	gdk_draw_drawable((GdkDrawable *)arg0, (GdkGC *)arg1, (GdkDrawable *)arg2, (gint)arg3, (gint)arg4, (gint)arg5, (gint)arg6, (gint)arg7, (gint)arg8);
}
#endif

#ifndef NO_gdk_1draw_1layout
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1layout
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gdk_1draw_1layout\n")

	gdk_draw_layout((GdkDrawable *)arg0, (GdkGC *)arg1, (gint)arg2, (gint)arg3, (PangoLayout *)arg4);
}
#endif

#ifndef NO_gdk_1draw_1line
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1line
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	DEBUG_CALL("gdk_1draw_1line\n")

	gdk_draw_line((GdkDrawable *)arg0, (GdkGC *)arg1, (gint)arg2, (gint)arg3, (gint)arg4, (gint)arg5);
}
#endif

#ifndef NO_gdk_1draw_1lines
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1lines
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jintArray arg2, jint arg3)
{
	jint *lparg2=NULL;

	DEBUG_CALL("gdk_1draw_1lines\n")

	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gdk_draw_lines((GdkDrawable *)arg0, (GdkGC *)arg1, (GdkPoint *)lparg2, (gint)arg3);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gdk_1draw_1polygon
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1polygon
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
{
	jint *lparg3=NULL;

	DEBUG_CALL("gdk_1draw_1polygon\n")

	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	gdk_draw_polygon((GdkDrawable *)arg0, (GdkGC *)arg1, (gint)arg2, (GdkPoint *)lparg3, (gint)arg4);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gdk_1draw_1rectangle
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1draw_1rectangle
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	DEBUG_CALL("gdk_1draw_1rectangle\n")

	gdk_draw_rectangle((GdkDrawable *)arg0, (GdkGC *)arg1, (gint)arg2, (gint)arg3, (gint)arg4, (gint)arg5, (gint)arg6);
}
#endif

#ifndef NO_gdk_1drawable_1get_1image
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1drawable_1get_1image
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gdk_1drawable_1get_1image\n")

	return (jint)gdk_drawable_get_image((GdkDrawable *)arg0, (gint)arg1, (gint)arg2, (gint)arg3, (gint)arg4);
}
#endif

#ifndef NO_gdk_1drawable_1get_1size
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1drawable_1get_1size
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gdk_1drawable_1get_1size\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gdk_drawable_get_size((GdkDrawable *)arg0, (gint *)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gdk_1drawable_1get_1visible_1region
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1drawable_1get_1visible_1region
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1drawable_1get_1visible_1region\n")

	return (jint)gdk_drawable_get_visible_region((GdkDrawable *)arg0);
}
#endif

#ifndef NO_gdk_1event_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1event_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1event_1free\n")

	gdk_event_free((GdkEvent *)arg0);
}
#endif

#ifndef NO_gdk_1event_1get
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1event_1get
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1event_1get\n")

	return (jint)gdk_event_get();
}
#endif

#ifndef NO_gdk_1event_1get_1coords
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1event_1get_1coords
	(JNIEnv *env, jclass that, jint arg0, jdoubleArray arg1, jdoubleArray arg2)
{
	jdouble *lparg1=NULL;
	jdouble *lparg2=NULL;
	jboolean rc;

	DEBUG_CALL("gdk_1event_1get_1coords\n")

	if (arg1) lparg1 = (*env)->GetDoubleArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetDoubleArrayElements(env, arg2, NULL);
	rc = (jboolean)gdk_event_get_coords((GdkEvent *)arg0, (gdouble *)lparg1, (gdouble *)lparg2);
	if (arg1) (*env)->ReleaseDoubleArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseDoubleArrayElements(env, arg2, lparg2, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1event_1get_1state
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1event_1get_1state
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1)
{
	jint *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gdk_1event_1get_1state\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jboolean)gdk_event_get_state((GdkEvent *)arg0, (GdkModifierType *)lparg1);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1event_1get_1time
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1event_1get_1time
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1event_1get_1time\n")

	return (jint)gdk_event_get_time((GdkEvent *)arg0);
}
#endif

#ifndef NO_gdk_1flush
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1flush
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1flush\n")

	gdk_flush();
}
#endif

#ifndef NO_gdk_1free_1text_1list
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1free_1text_1list
	(JNIEnv *env, jclass that, jint arg1)
{
	DEBUG_CALL("gdk_1free_1text_1list\n")

	gdk_free_text_list((gchar **)arg1);
}
#endif

#ifndef NO_gdk_1gc_1get_1values
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1get_1values
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkGCValues _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1gc_1get_1values\n")

	if (arg1) lparg1 = getGdkGCValuesFields(env, arg1, &_arg1);
	gdk_gc_get_values((GdkGC *)arg0, (GdkGCValues *)lparg1);
	if (arg1) setGdkGCValuesFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1gc_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1gc_1new\n")

	return (jint)gdk_gc_new((GdkDrawable *)arg0);
}
#endif

#ifndef NO_gdk_1gc_1set_1background
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1background
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkColor _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1gc_1set_1background\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	gdk_gc_set_background((GdkGC *)arg0, (GdkColor *)lparg1);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1clip_1mask
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1clip_1mask
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1clip_1mask\n")

	gdk_gc_set_clip_mask((GdkGC *)arg0, (GdkBitmap *)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1clip_1origin
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1clip_1origin
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gdk_1gc_1set_1clip_1origin\n")

	gdk_gc_set_clip_origin((GdkGC *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gdk_1gc_1set_1clip_1rectangle
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1clip_1rectangle
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1gc_1set_1clip_1rectangle\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gdk_gc_set_clip_rectangle((GdkGC *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1clip_1region
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1clip_1region
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1clip_1region\n")

	gdk_gc_set_clip_region((GdkGC *)arg0, (GdkRegion *)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1dashes
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1dashes
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jbyteArray arg2, jint arg3)
{
	jbyte *lparg2=NULL;

	DEBUG_CALL("gdk_1gc_1set_1dashes\n")

	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gdk_gc_set_dashes((GdkGC *)arg0, (gint)arg1, (gint8 *)lparg2, (gint)arg3);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gdk_1gc_1set_1exposures
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1exposures
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1exposures\n")

	gdk_gc_set_exposures((GdkGC *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1fill
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1fill
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1fill\n")

	gdk_gc_set_fill((GdkGC *)arg0, (GdkFill)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1foreground
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1foreground
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkColor _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1gc_1set_1foreground\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	gdk_gc_set_foreground((GdkGC *)arg0, (GdkColor *)lparg1);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1function
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1function
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1function\n")

	gdk_gc_set_function((GdkGC *)arg0, (GdkFunction)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1line_1attributes
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1line_1attributes
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gdk_1gc_1set_1line_1attributes\n")

	gdk_gc_set_line_attributes((GdkGC *)arg0, (gint)arg1, (GdkLineStyle)arg2, (GdkCapStyle)arg3, (GdkJoinStyle)arg4);
}
#endif

#ifndef NO_gdk_1gc_1set_1stipple
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1stipple
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1stipple\n")

	gdk_gc_set_stipple((GdkGC *)arg0, (GdkPixmap *)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1subwindow
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1subwindow
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1gc_1set_1subwindow\n")

	gdk_gc_set_subwindow((GdkGC *)arg0, (GdkSubwindowMode)arg1);
}
#endif

#ifndef NO_gdk_1gc_1set_1values
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1gc_1set_1values
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jint arg2)
{
	GdkGCValues _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1gc_1set_1values\n")

	if (arg1) lparg1 = getGdkGCValuesFields(env, arg1, &_arg1);
	gdk_gc_set_values((GdkGC *)arg0, (GdkGCValues *)lparg1, (GdkGCValuesMask)arg2);
	if (arg1) setGdkGCValuesFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1set_1program_1class
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1set_1program_1class
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;

	DEBUG_CALL("gdk_1set_1program_1class\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	gdk_set_program_class((char *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
}
#endif

#ifndef NO_gdk_1image_1get
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1image_1get
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gdk_1image_1get\n")

	return (jint)gdk_image_get((GdkDrawable *)arg0, (gint)arg1, (gint)arg2, (gint)arg3, (gint)arg4);
}
#endif

#ifndef NO_gdk_1image_1get_1pixel
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1image_1get_1pixel
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gdk_1image_1get_1pixel\n")

	return (jint)gdk_image_get_pixel((GdkImage *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gdk_1keyboard_1ungrab
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1keyboard_1ungrab
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1keyboard_1ungrab\n")

	gdk_keyboard_ungrab(arg0);
}
#endif

#ifndef NO_gdk_1keyval_1to_1unicode
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1keyval_1to_1unicode
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1keyval_1to_1unicode\n")

	return (jint)gdk_keyval_to_unicode(arg0);
}
#endif

#ifndef NO_gdk_1pango_1context_1get
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pango_1context_1get
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1pango_1context_1get\n")

	return (jint)gdk_pango_context_get();
}
#endif

#ifndef NO_gdk_1pixbuf_1get_1from_1drawable
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1get_1from_1drawable
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8)
{
	DEBUG_CALL("gdk_1pixbuf_1get_1from_1drawable\n")

	return (jint)gdk_pixbuf_get_from_drawable((GdkPixbuf *)arg0, (GdkDrawable *)arg1, (GdkColormap *)arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
#endif

#ifndef NO_gdk_1pixbuf_1get_1pixels
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1get_1pixels
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1pixbuf_1get_1pixels\n")

	return (jint)gdk_pixbuf_get_pixels((const GdkPixbuf *)arg0);
}
#endif

#ifndef NO_gdk_1pixbuf_1get_1rowstride
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1get_1rowstride
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1pixbuf_1get_1rowstride\n")

	return (jint)gdk_pixbuf_get_rowstride((const GdkPixbuf *)arg0);
}
#endif

#ifndef NO_gdk_1pixbuf_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1new
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gdk_1pixbuf_1new\n")

	return (jint)gdk_pixbuf_new((GdkColorspace)arg0, (gboolean)arg1, arg2, arg3, arg4);
}
#endif

#ifndef NO_gdk_1pixbuf_1render_1to_1drawable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1render_1to_1drawable
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11)
{
	DEBUG_CALL("gdk_1pixbuf_1render_1to_1drawable\n")

	gdk_pixbuf_render_to_drawable((GdkPixbuf *)arg0, (GdkDrawable *)arg1, (GdkGC *)arg2, arg3, arg4, arg5, arg6, arg7, arg8, (GdkRgbDither)arg9, arg10, arg11);
}
#endif

#ifndef NO_gdk_1pixbuf_1render_1to_1drawable_1alpha
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1render_1to_1drawable_1alpha
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12)
{
	DEBUG_CALL("gdk_1pixbuf_1render_1to_1drawable_1alpha\n")

	gdk_pixbuf_render_to_drawable_alpha((GdkPixbuf *)arg0, (GdkDrawable *)arg1, arg2, arg3, arg4, arg5, arg6, arg7, (GdkPixbufAlphaMode)arg8, arg9, (GdkRgbDither)arg10, arg11, arg12);
}
#endif

#ifndef NO_gdk_1pixbuf_1scale
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1scale
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jdouble arg6, jdouble arg7, jdouble arg8, jdouble arg9, jint arg10)
{
	DEBUG_CALL("gdk_1pixbuf_1scale\n")

	gdk_pixbuf_scale((const GdkPixbuf *)arg0, (GdkPixbuf *)arg1, arg2, arg3, arg4, arg5, (double)arg6, (double)arg7, (double)arg8, (double)arg9, arg10);
}
#endif

#ifndef NO_gdk_1pixbuf_1scale_1simple
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixbuf_1scale_1simple
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gdk_1pixbuf_1scale_1simple\n")

	return (jint)gdk_pixbuf_scale_simple((const GdkPixbuf *)arg0, arg1, arg2, (GdkInterpType)arg3);
}
#endif

#ifndef NO_gdk_1pixmap_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pixmap_1new
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gdk_1pixmap_1new\n")

	return (jint)gdk_pixmap_new((GdkWindow *)arg0, (gint)arg1, (gint)arg2, (gint)arg3);
}
#endif

#ifndef NO_gdk_1pointer_1grab
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pointer_1grab
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	DEBUG_CALL("gdk_1pointer_1grab\n")

	return (jint)gdk_pointer_grab((GdkWindow *)arg0, (gboolean)arg1, (GdkEventMask)arg2, (GdkWindow *)arg3, (GdkCursor *)arg4, (guint32)arg5);
}
#endif

#ifndef NO_gdk_1pointer_1is_1grabbed
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pointer_1is_1grabbed
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1pointer_1is_1grabbed\n")

	return (jboolean)gdk_pointer_is_grabbed();
}
#endif

#ifndef NO_gdk_1pointer_1ungrab
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1pointer_1ungrab
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1pointer_1ungrab\n")

	gdk_pointer_ungrab((guint32)arg0);
}
#endif

#ifndef NO_gdk_1region_1destroy
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1destroy
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1region_1destroy\n")

	gdk_region_destroy((GdkRegion *)arg0);
}
#endif

#ifndef NO_gdk_1region_1empty
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1empty
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1region_1empty\n")

	return (jboolean)gdk_region_empty((GdkRegion *)arg0);
}
#endif

#ifndef NO_gdk_1region_1get_1clipbox
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1get_1clipbox
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1region_1get_1clipbox\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gdk_region_get_clipbox((GdkRegion *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1region_1get_1rectangles
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1get_1rectangles
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gdk_1region_1get_1rectangles\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gdk_region_get_rectangles((GdkRegion *)arg0, (GdkRectangle **)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gdk_1region_1intersect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1intersect
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1region_1intersect\n")

	gdk_region_intersect((GdkRegion *)arg0, (GdkRegion *)arg1);
}
#endif

#ifndef NO_gdk_1region_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1region_1new\n")

	return (jint)gdk_region_new();
}
#endif

#ifndef NO_gdk_1region_1offset
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1offset
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gdk_1region_1offset\n")

	gdk_region_offset((GdkRegion *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gdk_1region_1point_1in
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1point_1in
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gdk_1region_1point_1in\n")

	return (jboolean)gdk_region_point_in((GdkRegion *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gdk_1region_1rect_1in
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1rect_1in
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gdk_1region_1rect_1in\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	rc = (jint)gdk_region_rect_in((GdkRegion *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
	return rc;
}
#endif

#ifndef NO_gdk_1region_1subtract
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1subtract
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1region_1subtract\n")

	gdk_region_subtract((GdkRegion *)arg0, (GdkRegion *)arg1);
}
#endif

#ifndef NO_gdk_1region_1union
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1union
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1region_1union\n")

	gdk_region_union((GdkRegion *)arg0, (GdkRegion *)arg1);
}
#endif

#ifndef NO_gdk_1region_1union_1with_1rect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1region_1union_1with_1rect
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1region_1union_1with_1rect\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gdk_region_union_with_rect((GdkRegion *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1rgb_1init
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1rgb_1init
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1rgb_1init\n")

	gdk_rgb_init();
}
#endif

#ifndef NO_gdk_1screen_1height
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1screen_1height
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1screen_1height\n")

	return (jint)gdk_screen_height();
}
#endif

#ifndef NO_gdk_1screen_1width
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1screen_1width
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1screen_1width\n")

	return (jint)gdk_screen_width();
}
#endif

#ifndef NO_gdk_1screen_1width_1mm
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1screen_1width_1mm
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1screen_1width_1mm\n")

	return (jint)gdk_screen_width_mm();
}
#endif

#ifndef NO_gdk_1utf8_1to_1compound_1text
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1utf8_1to_1compound_1text
	(JNIEnv *env, jclass that, jbyteArray arg1, jintArray arg2, jintArray arg3, jintArray arg4, jintArray arg5)
{
	jbyte *lparg1=NULL;
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint *lparg5=NULL;
	jboolean rc;
	
	DEBUG_CALL("gdk_1utf8_1to_1compound_1text\n")
	
	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	if (arg5) lparg5 = (*env)->GetIntArrayElements(env, arg5, NULL);

	rc = (jboolean)gdk_utf8_to_compound_text((const gchar *)lparg1, (GdkAtom *)lparg2, (gint *)lparg3, (guchar **)lparg4, (gint *)lparg5);

	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	if (arg5) (*env)->ReleaseIntArrayElements(env, arg5, lparg5, 0);
	
	return rc;
}
#endif

#ifndef NO_gdk_1text_1property_1to_1utf8_1list
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1text_1property_1to_1utf8_1list
	(JNIEnv *env, jclass that, jint arg1, jint arg2, jint arg3, jint arg4, jintArray arg5)
{
	jint *lparg5=NULL;
	jint rc;
	
	DEBUG_CALL("gdk_1text_1property_1to_1utf8_1list\n")
	
	if (arg5) lparg5 = (*env)->GetIntArrayElements(env, arg5, NULL);

	rc = (jint)gdk_text_property_to_utf8_list((GdkAtom)arg1, arg2, (guchar *)arg3, arg4, (gchar ***)lparg5);
	
	if (arg5) (*env)->ReleaseIntArrayElements(env, arg5, lparg5, 0);
	
	return rc;
}
#endif

#ifndef NO_gdk_1threads_1enter
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1threads_1enter
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1threads_1enter\n")

	gdk_threads_enter();
}
#endif

#ifndef NO_gdk_1threads_1init
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1threads_1init
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1threads_1init\n")

	gdk_threads_init();
}
#endif

#ifndef NO_gdk_1threads_1leave
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1threads_1leave
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1threads_1leave\n")

	gdk_threads_leave();
}
#endif

#ifndef NO_gdk_1visual_1get_1system
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1visual_1get_1system
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gdk_1visual_1get_1system\n")

	return (jint)gdk_visual_get_system();
}
#endif

#ifndef NO_gdk_1window_1at_1pointer
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1at_1pointer
	(JNIEnv *env, jclass that, jintArray arg0, jintArray arg1)
{
	jint *lparg0=NULL;
	jint *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gdk_1window_1at_1pointer\n")

	if (arg0) lparg0 = (*env)->GetIntArrayElements(env, arg0, NULL);
	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jint)gdk_window_at_pointer((gint *)lparg0, (gint *)lparg1);
	if (arg0) (*env)->ReleaseIntArrayElements(env, arg0, lparg0, 0);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1window_1get_1frame_1extents
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1get_1frame_1extents
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1window_1get_1frame_1extents\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gdk_window_get_frame_extents((GdkWindow *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1window_1get_1origin
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1get_1origin
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;
	jint rc;

	DEBUG_CALL("gdk_1window_1get_1origin\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	rc = (jint)gdk_window_get_origin((GdkWindow *)arg0, (gint *)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1window_1get_1pointer
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1get_1pointer
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2, jintArray arg3)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;
	jint *lparg3=NULL;
	jint rc;

	DEBUG_CALL("gdk_1window_1get_1pointer\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	rc = (jint)gdk_window_get_pointer((GdkWindow *)arg0, (gint *)lparg1, (gint *)lparg2, (GdkModifierType *)lparg3);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	return rc;
}
#endif

#ifndef NO_gdk_1window_1get_1user_1data
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1get_1user_1data
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1)
{
	jint *lparg1=NULL;

	DEBUG_CALL("gdk_1window_1get_1user_1data\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	gdk_window_get_user_data((GdkWindow *)arg0, (gpointer *)lparg1);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gdk_1window_1invalidate_1rect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1invalidate_1rect
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jboolean arg2)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gdk_1window_1invalidate_1rect\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gdk_window_invalidate_rect((GdkWindow *)arg0, (GdkRectangle *)lparg1, (gboolean)arg2);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gdk_1window_1invalidate_1region
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1invalidate_1region
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jboolean arg2)
{
	DEBUG_CALL("gdk_1window_1invalidate_1region\n")

	gdk_window_invalidate_region((GdkWindow *)arg0, (GdkRegion *)arg1, (gboolean)arg2);
}
#endif

#ifndef NO_gdk_1window_1lower
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1lower
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1window_1lower\n")

	gdk_window_lower((GdkWindow *)arg0);
}
#endif

#ifndef NO_gdk_1window_1process_1updates
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1process_1updates
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gdk_1window_1process_1updates\n")

	gdk_window_process_updates((GdkWindow *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gdk_1window_1raise
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1raise
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gdk_1window_1raise\n")

	gdk_window_raise((GdkWindow *)arg0);
}
#endif

#ifndef NO_gdk_1window_1set_1back_1pixmap
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1set_1back_1pixmap
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jboolean arg2)
{
	DEBUG_CALL("gdk_1window_1set_1back_1pixmap\n")

	gdk_window_set_back_pixmap((GdkWindow *)arg0, (GdkPixmap *)arg1, arg2);
}
#endif

#ifndef NO_gdk_1window_1set_1cursor
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1set_1cursor
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1window_1set_1cursor\n")

	gdk_window_set_cursor((GdkWindow *)arg0, (GdkCursor *)arg1);
}
#endif

#ifndef NO_gdk_1window_1set_1decorations
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1set_1decorations
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gdk_1window_1set_1decorations\n")

	gdk_window_set_decorations((GdkWindow *)arg0, (GdkWMDecoration)arg1);
}
#endif

#ifndef NO_gdk_1window_1set_1icon
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1set_1icon
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gdk_1window_1set_1icon\n")

	gdk_window_set_icon((GdkWindow *)arg0, (GdkWindow *)arg1, (GdkPixmap *)arg2, (GdkBitmap *)arg3);
}
#endif

#ifndef NO_gdk_1window_1set_1override_1redirect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gdk_1window_1set_1override_1redirect
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gdk_1window_1set_1override_1redirect\n")

	gdk_window_set_override_redirect((GdkWindow *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1accel_1group_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1accel_1group_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1accel_1group_1new\n")

	return (jint)gtk_accel_group_new();
}
#endif

#ifndef NO_gtk_1accel_1groups_1activate
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1accel_1groups_1activate
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1accel_1groups_1activate\n")

	return (jboolean)gtk_accel_groups_activate((GObject *)arg0, (guint)arg1, (GdkModifierType)arg2);
}
#endif

#ifndef NO_gtk_1accel_1label_1set_1accel_1widget
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1accel_1label_1set_1accel_1widget
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1accel_1label_1set_1accel_1widget\n")

	gtk_accel_label_set_accel_widget((GtkAccelLabel *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1adjustment_1changed
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1adjustment_1changed
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1adjustment_1changed\n")

	gtk_adjustment_changed((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1adjustment_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1adjustment_1new
	(JNIEnv *env, jclass that, jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jdouble arg4, jdouble arg5)
{
	DEBUG_CALL("gtk_1adjustment_1new\n")

	return (jint)gtk_adjustment_new((gdouble)arg0, (gdouble)arg1, (gdouble)arg2, (gdouble)arg3, (gdouble)arg4, arg5);
}
#endif

#ifndef NO_gtk_1adjustment_1set_1value
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1adjustment_1set_1value
	(JNIEnv *env, jclass that, jint arg0, jdouble arg1)
{
	DEBUG_CALL("gtk_1adjustment_1set_1value\n")

	gtk_adjustment_set_value((GtkAdjustment *)arg0, (gdouble)arg1);
}
#endif

#ifndef NO_gtk_1adjustment_1value_1changed
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1adjustment_1value_1changed
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1adjustment_1value_1changed\n")

	gtk_adjustment_value_changed((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1arrow_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1arrow_1new
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1arrow_1new\n")

	return (jint)gtk_arrow_new((GtkArrowType)arg0, (GtkArrowType)arg1);
}
#endif

#ifndef NO_gtk_1arrow_1set
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1arrow_1set
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1arrow_1set\n")

	gtk_arrow_set((GtkArrow *)arg0, (GtkArrowType)arg1, (GtkArrowType)arg2);
}
#endif

#ifndef NO_gtk_1bin_1get_1child
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1bin_1get_1child
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1bin_1get_1child\n")

	return (jint)gtk_bin_get_child((GtkBin *)arg0);
}
#endif

#ifndef NO_gtk_1button_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1button_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1button_1new\n")

	return (jint)gtk_button_new();
}
#endif

#ifndef NO_gtk_1button_1set_1relief
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1button_1set_1relief
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1button_1set_1relief\n")

	gtk_button_set_relief((GtkButton *)arg0, (GtkReliefStyle)arg1);
}
#endif

#ifndef NO_gtk_1cell_1renderer_1get_1size
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1cell_1renderer_1get_1size
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2, jintArray arg3, jintArray arg4, jintArray arg5, jintArray arg6)
{
	GdkRectangle _arg2, *lparg2=NULL;
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint *lparg5=NULL;
	jint *lparg6=NULL;

	DEBUG_CALL("gtk_1cell_1renderer_1get_1size\n")

	if (arg2) lparg2 = getGdkRectangleFields(env, arg2, &_arg2);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	if (arg5) lparg5 = (*env)->GetIntArrayElements(env, arg5, NULL);
	if (arg6) lparg6 = (*env)->GetIntArrayElements(env, arg6, NULL);
	gtk_cell_renderer_get_size((GtkCellRenderer *)arg0, (GtkWidget *)arg1, (GdkRectangle *)lparg2, (gint *)lparg3, (gint *)lparg4, (gint *)lparg5, (gint *)lparg6);
	if (arg2) setGdkRectangleFields(env, arg2, lparg2);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	if (arg5) (*env)->ReleaseIntArrayElements(env, arg5, lparg5, 0);
	if (arg6) (*env)->ReleaseIntArrayElements(env, arg6, lparg6, 0);
}
#endif

#ifndef NO_gtk_1cell_1renderer_1pixbuf_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1cell_1renderer_1pixbuf_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1cell_1renderer_1pixbuf_1new\n")

	return (jint)gtk_cell_renderer_pixbuf_new();
}
#endif

#ifndef NO_gtk_1cell_1renderer_1text_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1cell_1renderer_1text_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1cell_1renderer_1text_1new\n")

	return (jint)gtk_cell_renderer_text_new();
}
#endif

#ifndef NO_gtk_1cell_1renderer_1toggle_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1cell_1renderer_1toggle_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1cell_1renderer_1toggle_1new\n")

	return (jint)gtk_cell_renderer_toggle_new();
}
#endif

#ifndef NO_gtk_1check_1button_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1check_1button_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1check_1button_1new\n")

	return (jint)gtk_check_button_new();
}
#endif

#ifndef NO_gtk_1check_1menu_1item_1get_1active
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1check_1menu_1item_1get_1active
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1check_1menu_1item_1get_1active\n")

	return (jboolean)gtk_check_menu_item_get_active((GtkCheckMenuItem *)arg0);
}
#endif

#ifndef NO_gtk_1check_1menu_1item_1new_1with_1label
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1check_1menu_1item_1new_1with_1label
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1check_1menu_1item_1new_1with_1label\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_check_menu_item_new_with_label((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1check_1menu_1item_1set_1active
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1check_1menu_1item_1set_1active
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1check_1menu_1item_1set_1active\n")

	gtk_check_menu_item_set_active((GtkCheckMenuItem *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1check_1version
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1check_1version
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1check_1version\n")

	return (jint)gtk_check_version(arg0, arg1, arg2);
}
#endif

#ifndef NO_gtk_1clipboard_1clear
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1clipboard_1clear
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1clipboard_1clear\n")

	gtk_clipboard_clear((GtkClipboard *)arg0);
}
#endif

#ifndef NO_gtk_1clipboard_1get
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1clipboard_1get
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1clipboard_1get\n")

	return (jint)gtk_clipboard_get((GdkAtom)arg0);
}
#endif

#ifndef NO_gtk_1clipboard_1set_1with_1data
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1clipboard_1set_1with_1data
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	DEBUG_CALL("gtk_1clipboard_1set_1with_1data\n")

	return (jboolean)gtk_clipboard_set_with_data((GtkClipboard *)arg0, (const GtkTargetEntry *)arg1, (guint)arg2, (GtkClipboardGetFunc)arg3, (GtkClipboardClearFunc)arg4, (GObject *)arg5);
}
#endif

#ifndef NO_gtk_1clipboard_1wait_1for_1contents
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1clipboard_1wait_1for_1contents
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1clipboard_1wait_1for_1contents\n")

	return (jint)gtk_clipboard_wait_for_contents((GtkClipboard *)arg0, (GdkAtom)arg1);
}
#endif

#ifndef NO_gtk_1color_1selection_1dialog_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1color_1selection_1dialog_1new
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1color_1selection_1dialog_1new\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_color_selection_dialog_new((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1color_1selection_1get_1current_1color
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1color_1selection_1get_1current_1color
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkColor _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1color_1selection_1get_1current_1color\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	gtk_color_selection_get_current_color((GtkColorSelection *)arg0, (GdkColor *)lparg1);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1color_1selection_1set_1current_1color
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1color_1selection_1set_1current_1color
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkColor _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1color_1selection_1set_1current_1color\n")

	if (arg1) lparg1 = getGdkColorFields(env, arg1, &_arg1);
	gtk_color_selection_set_current_color((GtkColorSelection *)arg0, (GdkColor *)lparg1);
	if (arg1) setGdkColorFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1combo_1disable_1activate
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1combo_1disable_1activate
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1combo_1disable_1activate\n")

	gtk_combo_disable_activate((GtkCombo *)arg0);
}
#endif

#ifndef NO_gtk_1combo_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1combo_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1combo_1new\n")

	return (jint)gtk_combo_new();
}
#endif

#ifndef NO_gtk_1combo_1set_1case_1sensitive
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1combo_1set_1case_1sensitive
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1combo_1set_1case_1sensitive\n")

	gtk_combo_set_case_sensitive((GtkCombo *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1combo_1set_1popdown_1strings
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1combo_1set_1popdown_1strings
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1combo_1set_1popdown_1strings\n")

	gtk_combo_set_popdown_strings((GtkCombo *)arg0, (GList *)arg1);
}
#endif

#ifndef NO_gtk_1container_1add
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1add
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1container_1add\n")

	gtk_container_add((GtkContainer *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1container_1get_1border_1width
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1get_1border_1width
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1container_1get_1border_1width\n")

	return (jint)gtk_container_get_border_width((GtkContainer *)arg0);
}
#endif

#ifndef NO_gtk_1container_1get_1children
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1get_1children
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1container_1get_1children\n")

	return (jint)gtk_container_get_children((GtkContainer *)arg0);
}
#endif

#ifndef NO_gtk_1container_1remove
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1remove
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1container_1remove\n")

	gtk_container_remove((GtkContainer *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1container_1resize_1children
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1resize_1children
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1container_1resize_1children\n")

	gtk_container_resize_children((GtkContainer *)arg0);
}
#endif

#ifndef NO_gtk_1container_1set_1border_1width
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1container_1set_1border_1width
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1container_1set_1border_1width\n")

	gtk_container_set_border_width((GtkContainer *)arg0, (guint)arg1);
}
#endif

#ifndef NO_gtk_1dialog_1add_1button
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1dialog_1add_1button
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jint arg2)
{
	const jbyte *lparg1= NULL;
	jint rc;

	DEBUG_CALL("gtk_1dialog_1add_1button\n")

	if (arg1) lparg1 = (*env)->GetStringUTFChars(env, arg1, NULL);
	rc = (jint)gtk_dialog_add_button((GtkDialog *)arg0, (const gchar *)lparg1, (gint)arg2);
	if (arg1) (*env)->ReleaseStringUTFChars(env, arg1, lparg1);
	return rc;
}
#endif

#ifndef NO_gtk_1dialog_1run
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1dialog_1run
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1dialog_1run\n")

	return (jint)gtk_dialog_run((GtkDialog *)arg0);
}
#endif

#ifndef NO_gtk_1drag_1begin
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1begin
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1drag_1begin\n")

	return (jint)gtk_drag_begin((GtkWidget *)arg0, (GtkTargetList *)arg1, (GdkDragAction)arg2, (gint)arg3, (GdkEvent *)arg4);
}
#endif

#ifndef NO_gtk_1drag_1check_1threshold
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1check_1threshold
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1drag_1check_1threshold\n")

	return (jboolean)gtk_drag_check_threshold((GtkWidget *)arg0, (gint)arg1, (gint)arg2, (gint)arg3, (gint)arg4);
}
#endif

#ifndef NO_gtk_1drag_1dest_1find_1target
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1dest_1find_1target
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1drag_1dest_1find_1target\n")

	return (jint)gtk_drag_dest_find_target((GtkWidget *)arg0, (GdkDragContext *)arg1, (GtkTargetList *)arg2);
}
#endif

#ifndef NO_gtk_1drag_1dest_1set
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1dest_1set
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1drag_1dest_1set\n")

	gtk_drag_dest_set((GtkWidget *)arg0, (GtkDestDefaults)arg1, (const GtkTargetEntry *)arg2, (gint)arg3, (GdkDragAction)arg4);
}
#endif

#ifndef NO_gtk_1drag_1dest_1unset
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1dest_1unset
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1drag_1dest_1unset\n")

	gtk_drag_dest_unset((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1drag_1finish
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1finish
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1, jboolean arg2, jint arg3)
{
	DEBUG_CALL("gtk_1drag_1finish\n")

	gtk_drag_finish((GdkDragContext *)arg0, (gboolean)arg1, (gboolean)arg2, (guint32)arg3);
}
#endif

#ifndef NO_gtk_1drag_1get_1data
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drag_1get_1data
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1drag_1get_1data\n")

	gtk_drag_get_data((GtkWidget *)arg0, (GdkDragContext *)arg1, (GdkAtom)arg2, (guint32)arg3);
}
#endif

#ifndef NO_gtk_1drawing_1area_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1drawing_1area_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1drawing_1area_1new\n")

	return (jint)gtk_drawing_area_new();
}
#endif

#ifndef NO_gtk_1editable_1copy_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1copy_1clipboard
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1copy_1clipboard\n")

	gtk_editable_copy_clipboard((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1cut_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1cut_1clipboard
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1cut_1clipboard\n")

	gtk_editable_cut_clipboard((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1delete_1selection
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1delete_1selection
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1delete_1selection\n")

	gtk_editable_delete_selection((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1delete_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1delete_1text
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1editable_1delete_1text\n")

	gtk_editable_delete_text((GtkEditable *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1editable_1get_1chars
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1get_1chars
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1editable_1get_1chars\n")

	return (jint)gtk_editable_get_chars((GtkEditable *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1editable_1get_1editable
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1get_1editable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1get_1editable\n")

	return (jboolean)gtk_editable_get_editable((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1get_1position
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1get_1position
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1get_1position\n")

	return (jint)gtk_editable_get_position((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1get_1selection_1bounds
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1get_1selection_1bounds
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1editable_1get_1selection_1bounds\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	rc = (jboolean)gtk_editable_get_selection_bounds((GtkEditable *)arg0, (gint *)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1editable_1insert_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1insert_1text
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jintArray arg3)
{
	jbyte *lparg1=NULL;
	jint *lparg3=NULL;

	DEBUG_CALL("gtk_1editable_1insert_1text\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	gtk_editable_insert_text((GtkEditable *)arg0, (gchar *)lparg1, (gint)arg2, (gint *)lparg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1editable_1paste_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1paste_1clipboard
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1editable_1paste_1clipboard\n")

	gtk_editable_paste_clipboard((GtkEditable *)arg0);
}
#endif

#ifndef NO_gtk_1editable_1select_1region
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1select_1region
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1editable_1select_1region\n")

	gtk_editable_select_region((GtkEditable *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1editable_1set_1editable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1set_1editable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1editable_1set_1editable\n")

	gtk_editable_set_editable((GtkEditable *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1editable_1set_1position
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1editable_1set_1position
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1editable_1set_1position\n")

	gtk_editable_set_position((GtkEditable *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1entry_1get_1invisible_1char
JNIEXPORT jchar JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1get_1invisible_1char
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1entry_1get_1invisible_1char\n")

	return (jchar)gtk_entry_get_invisible_char((GtkEntry *)arg0);
}
#endif

#ifndef NO_gtk_1entry_1get_1max_1length
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1get_1max_1length
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1entry_1get_1max_1length\n")

	return (jint)gtk_entry_get_max_length((GtkEntry *)arg0);
}
#endif

#ifndef NO_gtk_1entry_1get_1text
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1get_1text
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1entry_1get_1text\n")

	return (jint)gtk_entry_get_text((GtkEntry *)arg0);
}
#endif

#ifndef NO_gtk_1entry_1get_1visibility
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1get_1visibility
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1entry_1get_1visibility\n")

	return (jboolean)gtk_entry_get_visibility((GtkEntry *)arg0);
}
#endif

#ifndef NO_gtk_1entry_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1entry_1new\n")

	return (jint)gtk_entry_new();
}
#endif

#ifndef NO_gtk_1entry_1set_1activates_1default
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1activates_1default
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1entry_1set_1activates_1default\n")

	gtk_entry_set_activates_default((GtkEntry *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1entry_1set_1has_1frame
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1has_1frame
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1entry_1set_1has_1frame\n")

	gtk_entry_set_has_frame((GtkEntry *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1entry_1set_1invisible_1char
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1invisible_1char
	(JNIEnv *env, jclass that, jint arg0, jchar arg1)
{
	DEBUG_CALL("gtk_1entry_1set_1invisible_1char\n")

	gtk_entry_set_invisible_char((GtkEntry *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1entry_1set_1max_1length
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1max_1length
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1entry_1set_1max_1length\n")

	gtk_entry_set_max_length((GtkEntry *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1entry_1set_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1text
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1entry_1set_1text\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_entry_set_text((GtkEntry *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1entry_1set_1visibility
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1entry_1set_1visibility
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1entry_1set_1visibility\n")

	gtk_entry_set_visibility((GtkEntry *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1events_1pending
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1events_1pending
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1events_1pending\n")

	return (jint)gtk_events_pending();
}
#endif

#ifndef NO_gtk_1file_1selection_1complete
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1complete
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1file_1selection_1complete\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_file_selection_complete((GtkFileSelection *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1file_1selection_1get_1filename
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1get_1filename
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1file_1selection_1get_1filename\n")

	return (jint)gtk_file_selection_get_filename((GtkFileSelection *)arg0);
}
#endif

#ifndef NO_gtk_1file_1selection_1get_1selections
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1get_1selections
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1file_1selection_1get_1selections\n")

	return (jint)gtk_file_selection_get_selections((GtkFileSelection *)arg0);
}
#endif

#ifndef NO_gtk_1file_1selection_1hide_1fileop_1buttons
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1hide_1fileop_1buttons
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1file_1selection_1hide_1fileop_1buttons\n")

	gtk_file_selection_hide_fileop_buttons((GtkFileSelection *)arg0);
}
#endif

#ifndef NO_gtk_1file_1selection_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1new
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1file_1selection_1new\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_file_selection_new((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1file_1selection_1set_1filename
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1set_1filename
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1file_1selection_1set_1filename\n")

	gtk_file_selection_set_filename((GtkFileSelection *)arg0, (const gchar *)arg1);
}
#endif

#ifndef NO_gtk_1file_1selection_1set_1select_1multiple
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1file_1selection_1set_1select_1multiple
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1file_1selection_1set_1select_1multiple\n")

	gtk_file_selection_set_select_multiple((GtkFileSelection *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1fixed_1move
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1fixed_1move
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1fixed_1move\n")

	gtk_fixed_move((GtkFixed *)arg0, (GtkWidget *)arg1, (gint)arg2, (gint)arg3);
}
#endif

#ifndef NO_gtk_1fixed_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1fixed_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1fixed_1new\n")

	return (jint)gtk_fixed_new();
}
#endif

#ifndef NO_gtk_1fixed_1set_1has_1window
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1fixed_1set_1has_1window
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1fixed_1set_1has_1window\n")

	gtk_fixed_set_has_window((GtkFixed *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1font_1selection_1dialog_1get_1font_1name
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1font_1selection_1dialog_1get_1font_1name
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1font_1selection_1dialog_1get_1font_1name\n")

	return (jint)gtk_font_selection_dialog_get_font_name((GtkFontSelectionDialog *)arg0);
}
#endif

#ifndef NO_gtk_1font_1selection_1dialog_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1font_1selection_1dialog_1new
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1font_1selection_1dialog_1new\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_font_selection_dialog_new((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1font_1selection_1dialog_1set_1font_1name
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1font_1selection_1dialog_1set_1font_1name
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1font_1selection_1dialog_1set_1font_1name\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jboolean)gtk_font_selection_dialog_set_font_name((GtkFontSelectionDialog *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1frame_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1frame_1new
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1frame_1new\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_frame_new((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1frame_1set_1label
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1frame_1set_1label
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1frame_1set_1label\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_frame_set_label((GtkFrame *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1frame_1set_1label_1widget
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1frame_1set_1label_1widget
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1frame_1set_1label_1widget\n")

	gtk_frame_set_label_widget((GtkFrame *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1frame_1set_1shadow_1type
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1frame_1set_1shadow_1type
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1frame_1set_1shadow_1type\n")

	gtk_frame_set_shadow_type((GtkFrame *)arg0, (GtkShadowType)arg1);
}
#endif

#ifndef NO_gtk_1get_1current_1event
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1get_1current_1event
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1get_1current_1event\n")

	return (jint)gtk_get_current_event();
}
#endif

#ifndef NO_gtk_1get_1current_1event_1time
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1get_1current_1event_1time
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1get_1current_1event_1time\n")

	return (jint)gtk_get_current_event_time();
}
#endif

#ifndef NO_gtk_1get_1default_1language
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1get_1default_1language
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1get_1default_1language\n")

	return (jint)gtk_get_default_language();
}
#endif

#ifndef NO_gtk_1grab_1get_1current
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1grab_1get_1current
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1grab_1get_1current\n")

	return (jint)gtk_grab_get_current();
}
#endif

#ifndef NO_gtk_1grab_1remove
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1grab_1remove
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1grab_1remove\n")

	gtk_grab_remove((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1hbox_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1hbox_1new
	(JNIEnv *env, jclass that, jboolean arg0, jint arg1)
{
	DEBUG_CALL("gtk_1hbox_1new\n")

	return (jint)gtk_hbox_new((gboolean)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1hscale_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1hscale_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1hscale_1new\n")

	return (jint)gtk_hscale_new((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1hscrollbar_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1hscrollbar_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1hscrollbar_1new\n")

	return (jint)gtk_hscrollbar_new((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1hseparator_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1hseparator_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1hseparator_1new\n")

	return (jint)gtk_hseparator_new();
}
#endif

#ifndef NO_gtk_1im_1context_1filter_1keypress
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1filter_1keypress
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1im_1context_1filter_1keypress\n")

	return (jboolean)gtk_im_context_filter_keypress((GtkIMContext *)arg0, (GdkEventKey *)arg1);
}
#endif

#ifndef NO_gtk_1im_1context_1focus_1in
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1focus_1in
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1im_1context_1focus_1in\n")

	gtk_im_context_focus_in((GtkIMContext *)arg0);
}
#endif

#ifndef NO_gtk_1im_1context_1focus_1out
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1focus_1out
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1im_1context_1focus_1out\n")

	gtk_im_context_focus_out((GtkIMContext *)arg0);
}
#endif

#ifndef NO_gtk_1im_1context_1get_1preedit_1string
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1get_1preedit_1string
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2, jintArray arg3)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;
	jint *lparg3=NULL;

	DEBUG_CALL("gtk_1im_1context_1get_1preedit_1string\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	gtk_im_context_get_preedit_string((GtkIMContext *)arg0, (gchar **)lparg1, (PangoAttrList **)lparg2, (gint *)lparg3);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1im_1context_1reset
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1reset
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1im_1context_1reset\n")

	gtk_im_context_reset((GtkIMContext *)arg0);
}
#endif

#ifndef NO_gtk_1im_1context_1set_1client_1window
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1set_1client_1window
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1im_1context_1set_1client_1window\n")

	gtk_im_context_set_client_window((GtkIMContext *)arg0, (GdkWindow *)arg1);
}
#endif

#ifndef NO_gtk_1im_1context_1set_1cursor_1location
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1context_1set_1cursor_1location
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1im_1context_1set_1cursor_1location\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gtk_im_context_set_cursor_location((GtkIMContext *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1im_1multicontext_1append_1menuitems
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1multicontext_1append_1menuitems
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1im_1multicontext_1append_1menuitems\n")

	gtk_im_multicontext_append_menuitems((GtkIMMulticontext *)arg0, (GtkMenuShell *)arg1);
}
#endif

#ifndef NO_gtk_1im_1multicontext_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1im_1multicontext_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1im_1multicontext_1new\n")

	return (jint)gtk_im_multicontext_new();
}
#endif

#ifndef NO_gtk_1image_1menu_1item_1new_1with_1label
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1image_1menu_1item_1new_1with_1label
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1image_1menu_1item_1new_1with_1label\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_image_menu_item_new_with_label(lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1image_1menu_1item_1set_1image
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1image_1menu_1item_1set_1image
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1image_1menu_1item_1set_1image\n")

	gtk_image_menu_item_set_image((GtkImageMenuItem *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1image_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1image_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1image_1new\n")

	return (jint)gtk_image_new();
}
#endif

#ifndef NO_gtk_1image_1new_1from_1pixmap
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1image_1new_1from_1pixmap
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1image_1new_1from_1pixmap\n")

	return (jint)gtk_image_new_from_pixmap((GdkPixmap *)arg0, (GdkBitmap *)arg1);
}
#endif

#ifndef NO_gtk_1image_1set_1from_1pixmap
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1image_1set_1from_1pixmap
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1image_1set_1from_1pixmap\n")

	gtk_image_set_from_pixmap((GtkImage *)arg0, (GdkBitmap *)arg1, (GdkBitmap *)arg2);
}
#endif

#ifndef NO_gtk_1init_1check
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1init_1check
	(JNIEnv *env, jclass that, jintArray arg0, jintArray arg1)
{
	jint *lparg0=NULL;
	jint *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1init_1check\n")

	if (arg0) lparg0 = (*env)->GetIntArrayElements(env, arg0, NULL);
	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jboolean)gtk_init_check((int *)lparg0, (char ***)lparg1);
	if (arg0) (*env)->ReleaseIntArrayElements(env, arg0, lparg0, 0);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1label_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1new
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0= NULL;
	jint rc;

	DEBUG_CALL("gtk_1label_1new\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_label_new((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1label_1new_1with_1mnemonic
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1new_1with_1mnemonic
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1label_1new_1with_1mnemonic\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_label_new_with_mnemonic((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1label_1set_1attributes
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1set_1attributes
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1label_1set_1attributes\n")

	gtk_label_set_attributes((GtkLabel *)arg0, (PangoAttrList *)arg1);
}
#endif

#ifndef NO_gtk_1label_1set_1justify
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1set_1justify
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1label_1set_1justify\n")

	gtk_label_set_justify((GtkLabel *)arg0, (GtkJustification)arg1);
}
#endif

#ifndef NO_gtk_1label_1set_1line_1wrap
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1set_1line_1wrap
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1label_1set_1line_1wrap\n")

	gtk_label_set_line_wrap((GtkLabel *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1label_1set_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1set_1text
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1label_1set_1text\n")

	gtk_label_set_text((GtkLabel *)arg0, (const gchar *)arg1);
}
#endif

#ifndef NO_gtk_1label_1set_1text_1with_1mnemonic
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1label_1set_1text_1with_1mnemonic
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1label_1set_1text_1with_1mnemonic\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_label_set_text_with_mnemonic((GtkLabel *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1list_1store_1append
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1append
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1list_1store_1append\n")

	gtk_list_store_append((GtkListStore *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1list_1store_1clear
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1clear
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1list_1store_1clear\n")

	gtk_list_store_clear((GtkListStore *)arg0);
}
#endif

#ifndef NO_gtk_1list_1store_1insert
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1insert
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1list_1store_1insert\n")

	gtk_list_store_insert((GtkListStore *)arg0, (GtkTreeIter *)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1list_1store_1newv
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1newv
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1)
{
	jint *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gtk_1list_1store_1newv\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jint)gtk_list_store_newv((gint)arg0, (GType *)lparg1);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1list_1store_1remove
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1remove
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1list_1store_1remove\n")

	gtk_list_store_remove((GtkListStore *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1list_1store_1set__III_3BI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1set__III_3BI
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
{
	jbyte *lparg3=NULL;

	DEBUG_CALL("gtk_1list_1store_1set__III_3BI\n")

	if (arg3) lparg3 = (*env)->GetByteArrayElements(env, arg3, NULL);
	gtk_list_store_set((GtkListStore *)arg0, (GtkTreeIter *)arg1, arg2, lparg3, arg4);
	if (arg3) (*env)->ReleaseByteArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1list_1store_1set__IIIII
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1set__IIIII
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1list_1store_1set__IIIII\n")

	gtk_list_store_set((GtkListStore *)arg0, (GtkTreeIter *)arg1, arg2, arg3, arg4);
}
#endif

#ifndef NO_gtk_1list_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jobject arg3, jint arg4)
{
	GdkColor _arg3, *lparg3=NULL;

	DEBUG_CALL("gtk_1list_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I\n")

	if (arg3) lparg3 = getGdkColorFields(env, arg3, &_arg3);
	gtk_list_store_set((GtkListStore *)arg0, (GtkTreeIter *)arg1, arg2, lparg3, arg4);
	if (arg3) setGdkColorFields(env, arg3, lparg3);
}
#endif

#ifndef NO_gtk_1list_1store_1set__IIIZI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1list_1store_1set__IIIZI
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4)
{
	DEBUG_CALL("gtk_1list_1store_1set__IIIZI\n")

	gtk_list_store_set((GtkListStore *)arg0, (GtkTreeIter *)arg1, arg2, arg3, arg4);
}
#endif

#ifndef NO_gtk_1main
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1main
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1main\n")

	gtk_main();
}
#endif

#ifndef NO_gtk_1major_1version
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1major_1version
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1major_1version\n")

	return (jint)gtk_major_version;
}
#endif

#ifndef NO_gtk_1minor_1version
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1minor_1version
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1minor_1version\n")

	return (jint)gtk_minor_version;
}
#endif

#ifndef NO_gtk_1micro_1version
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1micro_1version
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1micro_1version\n")

	return (jint)gtk_micro_version;
}
#endif

#ifndef NO_gtk_1main_1iteration
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1main_1iteration
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1main_1iteration\n")

	return (jint)gtk_main_iteration();
}
#endif

#ifndef NO_gtk_1menu_1bar_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1bar_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1menu_1bar_1new\n")

	return (jint)gtk_menu_bar_new();
}
#endif

#ifndef NO_gtk_1menu_1item_1remove_1submenu
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1item_1remove_1submenu
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1menu_1item_1remove_1submenu\n")

	gtk_menu_item_remove_submenu((GtkMenuItem *)arg0);
}
#endif

#ifndef NO_gtk_1menu_1item_1set_1submenu
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1item_1set_1submenu
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1menu_1item_1set_1submenu\n")

	gtk_menu_item_set_submenu((GtkMenuItem *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1menu_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1menu_1new\n")

	return (jint)gtk_menu_new();
}
#endif

#ifndef NO_gtk_1menu_1popdown
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1popdown
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1menu_1popdown\n")

	gtk_menu_popdown((GtkMenu *)arg0);
}
#endif

#ifndef NO_gtk_1menu_1popup
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1popup
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
{
	DEBUG_CALL("gtk_1menu_1popup\n")

	gtk_menu_popup((GtkMenu *)arg0, (GtkWidget *)arg1, (GtkWidget *)arg2, (GtkMenuPositionFunc)arg3, (gpointer)arg4, (guint)arg5, (guint32)arg6);
}
#endif

#ifndef NO_gtk_1menu_1shell_1deactivate
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1shell_1deactivate
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1menu_1shell_1deactivate\n")

	gtk_menu_shell_deactivate((GtkMenuShell *)arg0);
}
#endif

#ifndef NO_gtk_1menu_1shell_1insert
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1shell_1insert
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1menu_1shell_1insert\n")

	gtk_menu_shell_insert((GtkMenuShell *)arg0, (GtkWidget *)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1menu_1shell_1select_1item
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1menu_1shell_1select_1item
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1menu_1shell_1select_1item\n")

	gtk_menu_shell_select_item((GtkMenuShell *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1message_1dialog_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1message_1dialog_1new
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
{
	const jbyte *lparg4= NULL;
	jint rc;

	DEBUG_CALL("gtk_1message_1dialog_1new\n")

	if (arg4) lparg4 = (*env)->GetStringUTFChars(env, arg4, NULL);
	rc = (jint)gtk_message_dialog_new((GtkWindow *)arg0, (GtkDialogFlags)arg1, (GtkMessageType)arg2, (GtkButtonsType)arg3, (const gchar *)lparg4);
	if (arg4) (*env)->ReleaseStringUTFChars(env, arg4, lparg4);
	return rc;
}
#endif

#ifndef NO_gtk_1misc_1set_1alignment
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1misc_1set_1alignment
	(JNIEnv *env, jclass that, jint arg0, jfloat arg1, jfloat arg2)
{
	DEBUG_CALL("gtk_1misc_1set_1alignment\n")

	gtk_misc_set_alignment((GtkMisc *)arg0, (gfloat)arg1, (gfloat)arg2);
}
#endif

#ifndef NO_gtk_1notebook_1get_1current_1page
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1get_1current_1page
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1notebook_1get_1current_1page\n")

	return (jint)gtk_notebook_get_current_page((GtkNotebook *)arg0);
}
#endif

#ifndef NO_gtk_1notebook_1get_1scrollable
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1get_1scrollable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1notebook_1get_1scrollable\n")

	return (jboolean)gtk_notebook_get_scrollable((GtkNotebook *)arg0);
}
#endif

#ifndef NO_gtk_1notebook_1insert_1page
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1insert_1page
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1notebook_1insert_1page\n")

	gtk_notebook_insert_page((GtkNotebook *)arg0, (GtkWidget *)arg1, (GtkWidget *)arg2, (gint)arg3);
}
#endif

#ifndef NO_gtk_1notebook_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1notebook_1new\n")

	return (jint)gtk_notebook_new();
}
#endif

#ifndef NO_gtk_1notebook_1remove_1page
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1remove_1page
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1notebook_1remove_1page\n")

	gtk_notebook_remove_page((GtkNotebook *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1notebook_1set_1current_1page
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1set_1current_1page
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1notebook_1set_1current_1page\n")

	gtk_notebook_set_current_page((GtkNotebook *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1notebook_1set_1scrollable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1set_1scrollable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1notebook_1set_1scrollable\n")

	gtk_notebook_set_scrollable((GtkNotebook *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1notebook_1set_1show_1tabs
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1notebook_1set_1show_1tabs
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1notebook_1set_1show_1tabs\n")

	gtk_notebook_set_show_tabs((GtkNotebook *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1object_1sink
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1object_1sink
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1object_1sink\n")

	gtk_object_sink((GtkObject *)arg0);
}
#endif

#ifndef NO_gtk_1progress_1bar_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1progress_1bar_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1progress_1bar_1new\n")

	return (jint)gtk_progress_bar_new();
}
#endif

#ifndef NO_gtk_1progress_1bar_1pulse
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1progress_1bar_1pulse
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1progress_1bar_1pulse\n")

	gtk_progress_bar_pulse((GtkProgressBar *)arg0);
}
#endif

#ifndef NO_gtk_1progress_1bar_1set_1bar_1style
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1progress_1bar_1set_1bar_1style
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1progress_1bar_1set_1bar_1style\n")

	gtk_progress_bar_set_bar_style((GtkProgressBar *)arg0, (GtkProgressBarStyle)arg1);
}
#endif

#ifndef NO_gtk_1progress_1bar_1set_1fraction
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1progress_1bar_1set_1fraction
	(JNIEnv *env, jclass that, jint arg0, jdouble arg1)
{
	DEBUG_CALL("gtk_1progress_1bar_1set_1fraction\n")

	gtk_progress_bar_set_fraction((GtkProgressBar *)arg0, (gdouble)arg1);
}
#endif

#ifndef NO_gtk_1progress_1bar_1set_1orientation
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1progress_1bar_1set_1orientation
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1progress_1bar_1set_1orientation\n")

	gtk_progress_bar_set_orientation((GtkProgressBar *)arg0, (GtkProgressBarOrientation)arg1);
}
#endif

#ifndef NO_gtk_1radio_1button_1get_1group
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1radio_1button_1get_1group
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1radio_1button_1get_1group\n")

	return (jint)gtk_radio_button_get_group((GtkRadioButton *)arg0);
}
#endif

#ifndef NO_gtk_1radio_1button_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1radio_1button_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1radio_1button_1new\n")

	return (jint)gtk_radio_button_new((GSList *)arg0);
}
#endif

#ifndef NO_gtk_1radio_1menu_1item_1new_1with_1label
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1radio_1menu_1item_1new_1with_1label
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gtk_1radio_1menu_1item_1new_1with_1label\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jint)gtk_radio_menu_item_new_with_label((GSList *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1range_1get_1adjustment
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1range_1get_1adjustment
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1range_1get_1adjustment\n")

	return (jint)gtk_range_get_adjustment((GtkRange *)arg0);
}
#endif

#ifndef NO_gtk_1rc_1style_1set_1xthickness
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1rc_1style_1set_1xthickness
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1rc_1style_1set_1xthickness\n")

	((GtkRcStyle *)arg0)->xthickness = arg1;
}
#endif

#ifndef NO_gtk_1rc_1style_1set_1ythickness
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1rc_1style_1set_1ythickness
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1rc_1style_1set_1ythickness\n")

	((GtkRcStyle *)arg0)->ythickness = arg1;
}
#endif

#ifndef NO_gtk_1scale_1set_1digits
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scale_1set_1digits
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1scale_1set_1digits\n")

	gtk_scale_set_digits((GtkScale *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1scale_1set_1draw_1value
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scale_1set_1draw_1value
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1scale_1set_1draw_1value\n")

	gtk_scale_set_draw_value((GtkScale *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1get_1hadjustment
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1get_1hadjustment
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1scrolled_1window_1get_1hadjustment\n")

	return (jint)gtk_scrolled_window_get_hadjustment((GtkScrolledWindow *)arg0);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1get_1policy
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1get_1policy
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gtk_1scrolled_1window_1get_1policy\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gtk_scrolled_window_get_policy((GtkScrolledWindow *)arg0, (GtkPolicyType *)lparg1, (GtkPolicyType *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1get_1shadow_1type
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1get_1shadow_1type
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1scrolled_1window_1get_1shadow_1type\n")

	return (jint)gtk_scrolled_window_get_shadow_type((GtkScrolledWindow *)arg0);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1get_1vadjustment
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1get_1vadjustment
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1scrolled_1window_1get_1vadjustment\n")

	return (jint)gtk_scrolled_window_get_vadjustment((GtkScrolledWindow *)arg0);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1new
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1scrolled_1window_1new\n")

	return (jint)gtk_scrolled_window_new((GtkAdjustment *)arg0, (GtkAdjustment *)arg1);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1set_1policy
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1set_1policy
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1scrolled_1window_1set_1policy\n")

	gtk_scrolled_window_set_policy((GtkScrolledWindow *)arg0, (GtkPolicyType)arg1, (GtkPolicyType)arg2);
}
#endif

#ifndef NO_gtk_1scrolled_1window_1set_1shadow_1type
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1scrolled_1window_1set_1shadow_1type
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1scrolled_1window_1set_1shadow_1type\n")

	gtk_scrolled_window_set_shadow_type((GtkScrolledWindow *)arg0, (GtkShadowType)arg1);
}
#endif

#ifndef NO_gtk_1selection_1data_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1selection_1data_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1selection_1data_1free\n")

	gtk_selection_data_free((GtkSelectionData *)arg0);
}
#endif

#ifndef NO_gtk_1selection_1data_1set
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1selection_1data_1set
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1selection_1data_1set\n")

	gtk_selection_data_set((GtkSelectionData *)arg0, (GdkAtom)arg1, (gint)arg2, (const guchar *)arg3, (gint)arg4);
}
#endif

#ifndef NO_gtk_1separator_1menu_1item_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1separator_1menu_1item_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1separator_1menu_1item_1new\n")

	return (jint)gtk_separator_menu_item_new();
}
#endif

#ifndef NO_gtk_1set_1locale
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1set_1locale
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1set_1locale\n")

	return (jint)gtk_set_locale();
}
#endif

#ifndef NO_gtk_1target_1list_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1target_1list_1new
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1target_1list_1new\n")

	return (jint)gtk_target_list_new((const GtkTargetEntry *)arg0, (guint)arg1);
}
#endif

#ifndef NO_gtk_1target_1list_1unref
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1target_1list_1unref
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1target_1list_1unref\n")

	gtk_target_list_unref((GtkTargetList *)arg0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1copy_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1copy_1clipboard
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1text_1buffer_1copy_1clipboard\n")

	gtk_text_buffer_copy_clipboard((GtkTextBuffer *)arg0, (GtkClipboard *)arg1);
}
#endif

#ifndef NO_gtk_1text_1buffer_1cut_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1cut_1clipboard
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jboolean arg2)
{
	DEBUG_CALL("gtk_1text_1buffer_1cut_1clipboard\n")

	gtk_text_buffer_cut_clipboard((GtkTextBuffer *)arg0, (GtkClipboard *)arg1, (gboolean)arg2);
}
#endif

#ifndef NO_gtk_1text_1buffer_1delete
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1delete
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jbyteArray arg2)
{
	jbyte *lparg1=NULL;
	jbyte *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1delete\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gtk_text_buffer_delete((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (GtkTextIter *)lparg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1bounds
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1bounds
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jbyteArray arg2)
{
	jbyte *lparg1=NULL;
	jbyte *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1get_1bounds\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gtk_text_buffer_get_bounds((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (GtkTextIter *)lparg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1char_1count
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1char_1count
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1buffer_1get_1char_1count\n")

	return (jint)gtk_text_buffer_get_char_count((GtkTextBuffer *)arg0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1end_1iter
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1end_1iter
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1get_1end_1iter\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_get_end_iter((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1insert
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1insert
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1buffer_1get_1insert\n")

	return (jint)gtk_text_buffer_get_insert((GtkTextBuffer *)arg0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1iter_1at_1line
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1iter_1at_1line
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1get_1iter_1at_1line\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_get_iter_at_line((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (gint)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1iter_1at_1mark
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1iter_1at_1mark
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1get_1iter_1at_1mark\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_get_iter_at_mark((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (GtkTextMark *)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1iter_1at_1offset
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1iter_1at_1offset
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1get_1iter_1at_1offset\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_get_iter_at_offset((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (gint)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1line_1count
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1line_1count
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1buffer_1get_1line_1count\n")

	return (jint)gtk_text_buffer_get_line_count((GtkTextBuffer *)arg0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1selection_1bound
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1selection_1bound
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1buffer_1get_1selection_1bound\n")

	return (jint)gtk_text_buffer_get_selection_bound((GtkTextBuffer *)arg0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1selection_1bounds
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1selection_1bounds
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jbyteArray arg2)
{
	jbyte *lparg1=NULL;
	jbyte *lparg2=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1text_1buffer_1get_1selection_1bounds\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	rc = (jboolean)gtk_text_buffer_get_selection_bounds((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (GtkTextIter *)lparg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1text_1buffer_1get_1text
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1get_1text
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jbyteArray arg2, jboolean arg3)
{
	jbyte *lparg1=NULL;
	jbyte *lparg2=NULL;
	jint rc;

	DEBUG_CALL("gtk_1text_1buffer_1get_1text\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	rc = (jint)gtk_text_buffer_get_text((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (GtkTextIter *)lparg2, (gboolean)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1text_1buffer_1insert
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1insert
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jbyteArray arg2, jint arg3)
{
	jbyte *lparg1=NULL;
	jbyte *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1insert\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gtk_text_buffer_insert((GtkTextBuffer *)arg0, (GtkTextIter *)lparg1, (const gchar *)lparg2, (gint)arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1move_1mark
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1move_1mark
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jbyteArray arg2)
{
	jbyte *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1move_1mark\n")

	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gtk_text_buffer_move_mark((GtkTextBuffer *)arg0, (GtkTextMark *)arg1, (const GtkTextIter *)lparg2);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1paste_1clipboard
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1paste_1clipboard
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jbyteArray arg2, jboolean arg3)
{
	jbyte *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1paste_1clipboard\n")

	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	gtk_text_buffer_paste_clipboard((GtkTextBuffer *)arg0, (GtkClipboard *)arg1, (GtkTextIter *)lparg2, (gboolean)arg3);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1place_1cursor
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1place_1cursor
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1place_1cursor\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_place_cursor((GtkTextBuffer *)arg0, (const GtkTextIter *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1buffer_1set_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1buffer_1set_1text
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1buffer_1set_1text\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_text_buffer_set_text((GtkTextBuffer *)arg0, (const gchar *)lparg1, (gint)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1text_1iter_1get_1line
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1iter_1get_1line
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1text_1iter_1get_1line\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_text_iter_get_line((const GtkTextIter *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1text_1iter_1get_1offset
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1iter_1get_1offset
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1text_1iter_1get_1offset\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_text_iter_get_offset((const GtkTextIter *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1text_1view_1buffer_1to_1window_1coords
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1buffer_1to_1window_1coords
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4, jintArray arg5)
{
	jint *lparg4=NULL;
	jint *lparg5=NULL;

	DEBUG_CALL("gtk_1text_1view_1buffer_1to_1window_1coords\n")

	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	if (arg5) lparg5 = (*env)->GetIntArrayElements(env, arg5, NULL);
	gtk_text_view_buffer_to_window_coords((GtkTextView *)arg0, (GtkTextWindowType)arg1, (gint)arg2, (gint)arg3, (gint *)lparg4, (gint *)lparg5);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	if (arg5) (*env)->ReleaseIntArrayElements(env, arg5, lparg5, 0);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1buffer
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1buffer
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1view_1get_1buffer\n")

	return (jint)gtk_text_view_get_buffer((GtkTextView *)arg0);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1editable
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1editable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1text_1view_1get_1editable\n")

	return (jboolean)gtk_text_view_get_editable((GtkTextView *)arg0);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1iter_1location
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1iter_1location
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jobject arg2)
{
	jbyte *lparg1=NULL;
	GdkRectangle _arg2, *lparg2=NULL;

	DEBUG_CALL("gtk_1text_1view_1get_1iter_1location\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = getGdkRectangleFields(env, arg2, &_arg2);
	gtk_text_view_get_iter_location((GtkTextView *)arg0, (const GtkTextIter *)lparg1, (GdkRectangle *)lparg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) setGdkRectangleFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1line_1at_1y
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1line_1at_1y
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jintArray arg3)
{
	jbyte *lparg1=NULL;
	jint *lparg3=NULL;

	DEBUG_CALL("gtk_1text_1view_1get_1line_1at_1y\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	gtk_text_view_get_line_at_y((GtkTextView *)arg0, (GtkTextIter *)lparg1, (gint)arg2, (gint *)lparg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1visible_1rect
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1visible_1rect
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GdkRectangle _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1text_1view_1get_1visible_1rect\n")

	if (arg1) lparg1 = getGdkRectangleFields(env, arg1, &_arg1);
	gtk_text_view_get_visible_rect((GtkTextView *)arg0, (GdkRectangle *)lparg1);
	if (arg1) setGdkRectangleFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1text_1view_1get_1window
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1get_1window
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1text_1view_1get_1window\n")

	return (jint)gtk_text_view_get_window((GtkTextView *)arg0, (GtkTextWindowType)arg1);
}
#endif

#ifndef NO_gtk_1text_1view_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1text_1view_1new\n")

	return (jint)gtk_text_view_new();
}
#endif

#ifndef NO_gtk_1text_1view_1scroll_1mark_1onscreen
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1scroll_1mark_1onscreen
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1text_1view_1scroll_1mark_1onscreen\n")

	gtk_text_view_scroll_mark_onscreen((GtkTextView *)arg0, (GtkTextMark *)arg1);
}
#endif

#ifndef NO_gtk_1text_1view_1scroll_1to_1iter
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1scroll_1to_1iter
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jdouble arg2, jboolean arg3, jdouble arg4, jdouble arg5)
{
	jbyte *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1text_1view_1scroll_1to_1iter\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jboolean)gtk_text_view_scroll_to_iter((GtkTextView *)arg0, (GtkTextIter *)lparg1, (gdouble)arg2, (gboolean)arg3, (gdouble)arg4, (gdouble)arg5);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1text_1view_1set_1editable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1set_1editable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1text_1view_1set_1editable\n")

	gtk_text_view_set_editable((GtkTextView *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1text_1view_1set_1tabs
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1set_1tabs
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1text_1view_1set_1tabs\n")

	gtk_text_view_set_tabs((GtkTextView *)arg0, (PangoTabArray *)arg1);
}
#endif

#ifndef NO_gtk_1text_1view_1set_1wrap_1mode
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1text_1view_1set_1wrap_1mode
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1text_1view_1set_1wrap_1mode\n")

	gtk_text_view_set_wrap_mode((GtkTextView *)arg0, arg1);
}
#endif

#ifndef NO_gtk_1timeout_1add
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1timeout_1add
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1timeout_1add\n")

	return (jint)gtk_timeout_add((guint32)arg0, (GtkFunction)arg1, (gpointer)arg2);
}
#endif

#ifndef NO_gtk_1timeout_1remove
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1timeout_1remove
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1timeout_1remove\n")

	gtk_timeout_remove((guint)arg0);
}
#endif

#ifndef NO_gtk_1toggle_1button_1get_1active
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toggle_1button_1get_1active
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1toggle_1button_1get_1active\n")

	return (jboolean)gtk_toggle_button_get_active((GtkToggleButton *)arg0);
}
#endif

#ifndef NO_gtk_1toggle_1button_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toggle_1button_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1toggle_1button_1new\n")

	return (jint)gtk_toggle_button_new();
}
#endif

#ifndef NO_gtk_1toggle_1button_1set_1active
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toggle_1button_1set_1active
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1toggle_1button_1set_1active\n")

	gtk_toggle_button_set_active((GtkToggleButton *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1toggle_1button_1set_1mode
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toggle_1button_1set_1mode
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1toggle_1button_1set_1mode\n")

	gtk_toggle_button_set_mode((GtkToggleButton *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1toolbar_1insert_1widget
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toolbar_1insert_1widget
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jbyteArray arg2, jbyteArray arg3, jint arg4)
{
	jbyte *lparg2=NULL;
	jbyte *lparg3=NULL;

	DEBUG_CALL("gtk_1toolbar_1insert_1widget\n")

	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetByteArrayElements(env, arg3, NULL);
	gtk_toolbar_insert_widget((GtkToolbar *)arg0, (GtkWidget *)arg1, (const char *)lparg2, (const char *)lparg3, (gint)arg4);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseByteArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1toolbar_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toolbar_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1toolbar_1new\n")

	return (jint)gtk_toolbar_new();
}
#endif

#ifndef NO_gtk_1toolbar_1set_1orientation
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1toolbar_1set_1orientation
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1toolbar_1set_1orientation\n")

	gtk_toolbar_set_orientation((GtkToolbar *)arg0, (GtkOrientation)arg1);
}
#endif

#ifndef NO_gtk_1tooltips_1disable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tooltips_1disable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tooltips_1disable\n")

	gtk_tooltips_disable((GtkTooltips *)arg0);
}
#endif

#ifndef NO_gtk_1tooltips_1enable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tooltips_1enable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tooltips_1enable\n")

	gtk_tooltips_enable((GtkTooltips *)arg0);
}
#endif

#ifndef NO_gtk_1tooltips_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tooltips_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1tooltips_1new\n")

	return (jint)gtk_tooltips_new();
}
#endif

#ifndef NO_gtk_1tooltips_1set_1tip
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tooltips_1set_1tip
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jbyteArray arg2, jbyteArray arg3)
{
	jbyte *lparg2=NULL;
	jbyte *lparg3=NULL;

	DEBUG_CALL("gtk_1tooltips_1set_1tip\n")

	if (arg2) lparg2 = (*env)->GetByteArrayElements(env, arg2, NULL);
	if (arg3) lparg3 = (*env)->GetByteArrayElements(env, arg3, NULL);
	gtk_tooltips_set_tip((GtkTooltips *)arg0, (GtkWidget *)arg1, (const gchar *)lparg2, (const gchar *)lparg3);
	if (arg2) (*env)->ReleaseByteArrayElements(env, arg2, lparg2, 0);
	if (arg3) (*env)->ReleaseByteArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1tree_1model_1get
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1get
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jintArray arg3, jint arg4)
{
	jint *lparg3=NULL;

	DEBUG_CALL("gtk_1tree_1model_1get\n")

	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	gtk_tree_model_get((GtkTreeModel *)arg0, (GtkTreeIter *)arg1, arg2, lparg3, arg4);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1tree_1model_1get_1iter
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1get_1iter
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1tree_1model_1get_1iter\n")

	return (jboolean)gtk_tree_model_get_iter((GtkTreeModel *)arg0, (GtkTreeIter *)arg1, (GtkTreePath *)arg2);
}
#endif

#ifndef NO_gtk_1tree_1model_1get_1n_1columns
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1get_1n_1columns
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1model_1get_1n_1columns\n")

	return (jint)gtk_tree_model_get_n_columns((GtkTreeModel *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1model_1get_1path
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1get_1path
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1model_1get_1path\n")

	return (jint)gtk_tree_model_get_path((GtkTreeModel *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1model_1iter_1children
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1iter_1children
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1tree_1model_1iter_1children\n")

	return (jboolean)gtk_tree_model_iter_children((GtkTreeModel *)arg0, (GtkTreeIter *)arg1, (GtkTreeIter *)arg2);
}
#endif

#ifndef NO_gtk_1tree_1model_1iter_1n_1children
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1iter_1n_1children
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1model_1iter_1n_1children\n")

	return (jint)gtk_tree_model_iter_n_children((GtkTreeModel *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1model_1iter_1next
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1iter_1next
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1model_1iter_1next\n")

	return (jboolean)gtk_tree_model_iter_next((GtkTreeModel *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1model_1iter_1nth_1child
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1model_1iter_1nth_1child
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1tree_1model_1iter_1nth_1child\n")

	return (jboolean)gtk_tree_model_iter_nth_child((GtkTreeModel *)arg0, (GtkTreeIter *)arg1, (GtkTreeIter *)arg2, arg3);
}
#endif

#ifndef NO_gtk_1tree_1path_1append_1index
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1append_1index
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1path_1append_1index\n")

	gtk_tree_path_append_index((GtkTreePath *)arg0, arg1);
}
#endif

#ifndef NO_gtk_1tree_1path_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1path_1free\n")

	gtk_tree_path_free((GtkTreePath *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1path_1get_1depth
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1get_1depth
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1path_1get_1depth\n")

	return (jint)gtk_tree_path_get_depth((GtkTreePath *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1path_1get_1indices
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1get_1indices
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1path_1get_1indices\n")

	return (jint)gtk_tree_path_get_indices((GtkTreePath *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1path_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1tree_1path_1new\n")

	return (jint)gtk_tree_path_new();
}
#endif

#ifndef NO_gtk_1tree_1path_1new_1first
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1new_1first
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1tree_1path_1new_1first\n")

	return (jint)gtk_tree_path_new_first();
}
#endif

#ifndef NO_gtk_1tree_1path_1new_1from_1string___3B
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1new_1from_1string___3B
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("gtk_1tree_1path_1new_1from_1string___3B\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)gtk_tree_path_new_from_string((const gchar *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1tree_1path_1new_1from_1string__I
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1new_1from_1string__I
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1path_1new_1from_1string__I\n")

	return (jint)gtk_tree_path_new_from_string((const gchar *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1path_1up
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1path_1up
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1path_1up\n")

	return (jboolean)gtk_tree_path_up((GtkTreePath *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1selection_1get_1selected
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1get_1selected
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jint arg2)
{
	jint *lparg1=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1tree_1selection_1get_1selected\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jboolean)gtk_tree_selection_get_selected((GtkTreeSelection *)arg0, (GtkTreeModel **)lparg1, (GtkTreeIter *)arg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1tree_1selection_1path_1is_1selected
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1path_1is_1selected
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1selection_1path_1is_1selected\n")

	return (jboolean)gtk_tree_selection_path_is_selected((GtkTreeSelection *)arg0, (GtkTreePath *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1selection_1select_1all
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1select_1all
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1selection_1select_1all\n")

	gtk_tree_selection_select_all((GtkTreeSelection *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1selection_1select_1iter
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1select_1iter
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1selection_1select_1iter\n")

	gtk_tree_selection_select_iter((GtkTreeSelection *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1selection_1selected_1foreach
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1selected_1foreach
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1tree_1selection_1selected_1foreach\n")

	gtk_tree_selection_selected_foreach((GtkTreeSelection *)arg0, (GtkTreeSelectionForeachFunc)arg1, (gpointer)arg2);
}
#endif

#ifndef NO_gtk_1tree_1selection_1set_1mode
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1set_1mode
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1selection_1set_1mode\n")

	gtk_tree_selection_set_mode((GtkTreeSelection *)arg0, (GtkSelectionMode)arg1);
}
#endif

#ifndef NO_gtk_1tree_1selection_1unselect_1all
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1unselect_1all
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1selection_1unselect_1all\n")

	gtk_tree_selection_unselect_all((GtkTreeSelection *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1selection_1unselect_1iter
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1selection_1unselect_1iter
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1selection_1unselect_1iter\n")

	gtk_tree_selection_unselect_iter((GtkTreeSelection *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1store_1append
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1append
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1tree_1store_1append\n")

	gtk_tree_store_append((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, (GtkTreeIter *)arg2);
}
#endif

#ifndef NO_gtk_1tree_1store_1clear
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1clear
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1store_1clear\n")

	gtk_tree_store_clear((GtkTreeStore *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1store_1insert
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1insert
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1tree_1store_1insert\n")

	gtk_tree_store_insert((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, (GtkTreeIter *)arg2, (gint)arg3);
}
#endif

#ifndef NO_gtk_1tree_1store_1newv
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1newv
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1)
{
	jint *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gtk_1tree_1store_1newv\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	rc = (jint)gtk_tree_store_newv(arg0, (GType *)lparg1);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1tree_1store_1remove
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1remove
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1store_1remove\n")

	gtk_tree_store_remove((GtkTreeStore *)arg0, (GtkTreeIter *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1store_1set__III_3BI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1set__III_3BI
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
{
	jbyte *lparg3=NULL;

	DEBUG_CALL("gtk_1tree_1store_1set__III_3BI\n")

	if (arg3) lparg3 = (*env)->GetByteArrayElements(env, arg3, NULL);
	gtk_tree_store_set((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, arg2, lparg3, arg4);
	if (arg3) (*env)->ReleaseByteArrayElements(env, arg3, lparg3, 0);
}
#endif

#ifndef NO_gtk_1tree_1store_1set__IIIII
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1set__IIIII
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
{
	DEBUG_CALL("gtk_1tree_1store_1set__IIIII\n")

	gtk_tree_store_set((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, arg2, arg3, arg4);
}
#endif

#ifndef NO_gtk_1tree_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jobject arg3, jint arg4)
{
	GdkColor _arg3, *lparg3=NULL;

	DEBUG_CALL("gtk_1tree_1store_1set__IIILorg_eclipse_swt_internal_gtk_GdkColor_2I\n")

	if (arg3) lparg3 = getGdkColorFields(env, arg3, &_arg3);
	gtk_tree_store_set((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, arg2, lparg3, arg4);
	if (arg3) setGdkColorFields(env, arg3, lparg3);
}
#endif

#ifndef NO_gtk_1tree_1store_1set__IIIZI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1store_1set__IIIZI
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jboolean arg3, jint arg4)
{
	DEBUG_CALL("gtk_1tree_1store_1set__IIIZI\n")

	gtk_tree_store_set((GtkTreeStore *)arg0, (GtkTreeIter *)arg1, arg2, arg3, arg4);
}
#endif

#ifndef NO_gtk_1tree_1view_1collapse_1row
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1collapse_1row
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1collapse_1row\n")

	return (jboolean)gtk_tree_view_collapse_row((GtkTreeView *)arg0, (GtkTreePath *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1add_1attribute
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1add_1attribute
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2, jint arg3)
{
	const jbyte *lparg2= NULL;

	DEBUG_CALL("gtk_1tree_1view_1column_1add_1attribute\n")

	if (arg2) lparg2 = (*env)->GetStringUTFChars(env, arg2, NULL);
	gtk_tree_view_column_add_attribute((GtkTreeViewColumn *)arg0, (GtkCellRenderer *)arg1, (const gchar *)lparg2, (gint)arg3);
	if (arg2) (*env)->ReleaseStringUTFChars(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1clear
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1clear
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1clear\n")

	gtk_tree_view_column_clear((GtkTreeViewColumn *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1get_1cell_1renderers
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1get_1cell_1renderers
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1get_1cell_1renderers\n")

	return (jint)gtk_tree_view_column_get_cell_renderers((GtkTreeViewColumn *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1get_1resizable
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1get_1resizable
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1get_1resizable\n")

	return (jboolean)gtk_tree_view_column_get_resizable((GtkTreeViewColumn *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1get_1spacing
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1get_1spacing
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1get_1spacing\n")

	return (jint)gtk_tree_view_column_get_spacing((GtkTreeViewColumn *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1get_1width
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1get_1width
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1get_1width\n")

	return (jint)gtk_tree_view_column_get_width((GtkTreeViewColumn *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1new\n")

	return (jint)gtk_tree_view_column_new();
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1pack_1start
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1pack_1start
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jboolean arg2)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1pack_1start\n")

	gtk_tree_view_column_pack_start((GtkTreeViewColumn *)arg0, (GtkCellRenderer *)arg1, (gboolean)arg2);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1set_1clickable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1set_1clickable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1set_1clickable\n")

	gtk_tree_view_column_set_clickable((GtkTreeViewColumn *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1set_1fixed_1width
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1set_1fixed_1width
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1set_1fixed_1width\n")

	gtk_tree_view_column_set_fixed_width((GtkTreeViewColumn *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1set_1resizable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1set_1resizable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1set_1resizable\n")

	gtk_tree_view_column_set_resizable((GtkTreeViewColumn *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1set_1sizing
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1set_1sizing
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1column_1set_1sizing\n")

	gtk_tree_view_column_set_sizing((GtkTreeViewColumn *)arg0, (GtkTreeViewColumnSizing)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1column_1set_1title
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1column_1set_1title
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1tree_1view_1column_1set_1title\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_tree_view_column_set_title((GtkTreeViewColumn *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1tree_1view_1expand_1row
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1expand_1row
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jboolean arg2)
{
	DEBUG_CALL("gtk_1tree_1view_1expand_1row\n")

	return (jboolean)gtk_tree_view_expand_row((GtkTreeView *)arg0, (GtkTreePath *)arg1, (gboolean)arg2);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1bin_1window
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1bin_1window
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1get_1bin_1window\n")

	return (jint)gtk_tree_view_get_bin_window((GtkTreeView *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1cell_1area
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1cell_1area
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jobject arg3)
{
	GdkRectangle _arg3, *lparg3=NULL;

	DEBUG_CALL("gtk_1tree_1view_1get_1cell_1area\n")

	if (arg3) lparg3 = getGdkRectangleFields(env, arg3, &_arg3);
	gtk_tree_view_get_cell_area((GtkTreeView *)arg0, (GtkTreePath *)arg1, (GtkTreeViewColumn *)arg2, (GdkRectangle *)lparg3);
	if (arg3) setGdkRectangleFields(env, arg3, lparg3);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1column
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1column
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1get_1column\n")

	return (jint)gtk_tree_view_get_column((GtkTreeView *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1cursor
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1cursor
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gtk_1tree_1view_1get_1cursor\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gtk_tree_view_get_cursor((GtkTreeView *)arg0, (GtkTreePath **)lparg1, (GtkTreeViewColumn **)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1headers_1visible
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1headers_1visible
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1get_1headers_1visible\n")

	return (jboolean)gtk_tree_view_get_headers_visible((GtkTreeView *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1path_1at_1pos
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1path_1at_1pos
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jintArray arg3, jintArray arg4, jintArray arg5, jintArray arg6)
{
	jint *lparg3=NULL;
	jint *lparg4=NULL;
	jint *lparg5=NULL;
	jint *lparg6=NULL;
	jboolean rc;

	DEBUG_CALL("gtk_1tree_1view_1get_1path_1at_1pos\n")

	if (arg3) lparg3 = (*env)->GetIntArrayElements(env, arg3, NULL);
	if (arg4) lparg4 = (*env)->GetIntArrayElements(env, arg4, NULL);
	if (arg5) lparg5 = (*env)->GetIntArrayElements(env, arg5, NULL);
	if (arg6) lparg6 = (*env)->GetIntArrayElements(env, arg6, NULL);
	rc = (jboolean)gtk_tree_view_get_path_at_pos((GtkTreeView *)arg0, (gint)arg1, (gint)arg2, (GtkTreePath **)lparg3, (GtkTreeViewColumn **)lparg4, (gint *)lparg5, (gint *)lparg6);
	if (arg3) (*env)->ReleaseIntArrayElements(env, arg3, lparg3, 0);
	if (arg4) (*env)->ReleaseIntArrayElements(env, arg4, lparg4, 0);
	if (arg5) (*env)->ReleaseIntArrayElements(env, arg5, lparg5, 0);
	if (arg6) (*env)->ReleaseIntArrayElements(env, arg6, lparg6, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1tree_1view_1get_1selection
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1get_1selection
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1get_1selection\n")

	return (jint)gtk_tree_view_get_selection((GtkTreeView *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1insert_1column
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1insert_1column
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1tree_1view_1insert_1column\n")

	return (jint)gtk_tree_view_insert_column((GtkTreeView *)arg0, (GtkTreeViewColumn *)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1tree_1view_1new_1with_1model
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1new_1with_1model
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1tree_1view_1new_1with_1model\n")

	return (jint)gtk_tree_view_new_with_model((GtkTreeModel *)arg0);
}
#endif

#ifndef NO_gtk_1tree_1view_1remove_1column
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1remove_1column
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1remove_1column\n")

	gtk_tree_view_remove_column((GtkTreeView *)arg0, (GtkTreeViewColumn *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1row_1expanded
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1row_1expanded
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1row_1expanded\n")

	return (jboolean)gtk_tree_view_row_expanded((GtkTreeView *)arg0, (GtkTreePath *)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1scroll_1to_1cell
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1scroll_1to_1cell
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jboolean arg3, jfloat arg4, jfloat arg5)
{
	DEBUG_CALL("gtk_1tree_1view_1scroll_1to_1cell\n")

	gtk_tree_view_scroll_to_cell((GtkTreeView *)arg0, (GtkTreePath *)arg1, (GtkTreeViewColumn *)arg2, (gboolean)arg3, (gfloat)arg4, (gfloat)arg5);
}
#endif

#ifndef NO_gtk_1tree_1view_1set_1cursor
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1set_1cursor
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jboolean arg3)
{
	DEBUG_CALL("gtk_1tree_1view_1set_1cursor\n")

	gtk_tree_view_set_cursor((GtkTreeView *)arg0, (GtkTreePath *)arg1, (GtkTreeViewColumn *)arg2, (gboolean)arg3);
}
#endif

#ifndef NO_gtk_1tree_1view_1set_1headers_1visible
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1set_1headers_1visible
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1set_1headers_1visible\n")

	gtk_tree_view_set_headers_visible((GtkTreeView *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1tree_1view_1set_1model
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1tree_1view_1set_1model
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1tree_1view_1set_1model\n")

	gtk_tree_view_set_model((GtkTreeView *)arg0, (GtkTreeModel *)arg1);
}
#endif

#ifndef NO_gtk_1vbox_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1vbox_1new
	(JNIEnv *env, jclass that, jboolean arg0, jint arg1)
{
	DEBUG_CALL("gtk_1vbox_1new\n")

	return (jint)gtk_vbox_new((gboolean)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1vscale_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1vscale_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1vscale_1new\n")

	return (jint)gtk_vscale_new((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1vscrollbar_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1vscrollbar_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1vscrollbar_1new\n")

	return (jint)gtk_vscrollbar_new((GtkAdjustment *)arg0);
}
#endif

#ifndef NO_gtk_1vseparator_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1vseparator_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1vseparator_1new\n")

	return (jint)gtk_vseparator_new();
}
#endif

#ifndef NO_gtk_1widget_1add_1accelerator
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1add_1accelerator
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4, jint arg5)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1widget_1add_1accelerator\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_widget_add_accelerator((GtkWidget *)arg0, (const gchar *)lparg1, (GtkAccelGroup *)arg2, (guint)arg3, (GdkModifierType)arg4, arg5);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1widget_1add_1events
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1add_1events
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1widget_1add_1events\n")

	gtk_widget_add_events((GtkWidget *)arg0, (gint)arg1);
}
#endif

#ifndef NO_gtk_1widget_1create_1pango_1layout
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1create_1pango_1layout
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;
	jint rc;

	DEBUG_CALL("gtk_1widget_1create_1pango_1layout\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	rc = (jint)gtk_widget_create_pango_layout((GtkWidget *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	return rc;
}
#endif

#ifndef NO_gtk_1widget_1destroy
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1destroy
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1destroy\n")

	gtk_widget_destroy((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1get_1default_1style
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1get_1default_1style
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("gtk_1widget_1get_1default_1style\n")

	return (jint)gtk_widget_get_default_style();
}
#endif

#ifndef NO_gtk_1widget_1get_1modifier_1style
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1get_1modifier_1style
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1get_1modifier_1style\n")

	return (jint)gtk_widget_get_modifier_style((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1get_1pango_1context
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1get_1pango_1context
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1get_1pango_1context\n")

	return (jint)gtk_widget_get_pango_context((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1get_1parent
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1get_1parent
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1get_1parent\n")

	return (jint)gtk_widget_get_parent((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1get_1style
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1get_1style
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1get_1style\n")

	return (jint)gtk_widget_get_style((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1grab_1focus
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1grab_1focus
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1grab_1focus\n")

	gtk_widget_grab_focus((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1hide
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1hide
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1hide\n")

	gtk_widget_hide((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1is_1focus
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1is_1focus
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1is_1focus\n")

	return (jboolean)gtk_widget_is_focus((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1modify_1base
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1base
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2)
{
	GdkColor _arg2, *lparg2=NULL;

	DEBUG_CALL("gtk_1widget_1modify_1base\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	gtk_widget_modify_base((GtkWidget *)arg0, (GtkStateType)arg1, (GdkColor *)lparg2);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1widget_1modify_1bg
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1bg
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2)
{
	GdkColor _arg2, *lparg2=NULL;

	DEBUG_CALL("gtk_1widget_1modify_1bg\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	gtk_widget_modify_bg((GtkWidget *)arg0, (GtkStateType)arg1, (GdkColor *)lparg2);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1widget_1modify_1fg
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1fg
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2)
{
	GdkColor _arg2, *lparg2=NULL;

	DEBUG_CALL("gtk_1widget_1modify_1fg\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	gtk_widget_modify_fg((GtkWidget *)arg0, (GtkStateType)arg1, (GdkColor *)lparg2);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1widget_1modify_1font
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1font
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1widget_1modify_1font\n")

	gtk_widget_modify_font((GtkWidget *)arg0, (PangoFontDescription *)arg1);
}
#endif

#ifndef NO_gtk_1widget_1modify_1style
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1style
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1widget_1modify_1style\n")

	gtk_widget_modify_style((GtkWidget *)arg0, (GtkRcStyle *)arg1);
}
#endif

#ifndef NO_gtk_1widget_1modify_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1modify_1text
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jobject arg2)
{
	GdkColor _arg2, *lparg2=NULL;

	DEBUG_CALL("gtk_1widget_1modify_1text\n")

	if (arg2) lparg2 = getGdkColorFields(env, arg2, &_arg2);
	gtk_widget_modify_text((GtkWidget *)arg0, (GtkStateType)arg1, (GdkColor *)lparg2);
	if (arg2) setGdkColorFields(env, arg2, lparg2);
}
#endif

#ifndef NO_gtk_1widget_1realize
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1realize
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1realize\n")

	gtk_widget_realize((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1remove_1accelerator
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1remove_1accelerator
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("gtk_1widget_1remove_1accelerator\n")

	gtk_widget_remove_accelerator((GtkWidget *)arg0, (GtkAccelGroup *)arg1, (guint)arg2, (GdkModifierType)arg3);
}
#endif

#ifndef NO_gtk_1widget_1reparent
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1reparent
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1widget_1reparent\n")

	gtk_widget_reparent((GtkWidget *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1widget_1set_1double_1buffered
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1double_1buffered
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1widget_1set_1double_1buffered\n")

	gtk_widget_set_double_buffered((GtkWidget *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1widget_1set_1name
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1name
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1widget_1set_1name\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_widget_set_name((GtkWidget *)arg0, (const char *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1widget_1set_1redraw_1on_1allocate
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1redraw_1on_1allocate
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1widget_1set_1redraw_1on_1allocate\n")

	gtk_widget_set_redraw_on_allocate((GtkWidget *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1widget_1set_1sensitive
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1sensitive
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1widget_1set_1sensitive\n")

	gtk_widget_set_sensitive((GtkWidget *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1widget_1set_1size_1request
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1size_1request
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1widget_1set_1size_1request\n")

	gtk_widget_set_size_request((GtkWidget *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1widget_1set_1state
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1set_1state
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1widget_1set_1state\n")

	gtk_widget_set_state((GtkWidget *)arg0, (GtkStateType)arg1);
}
#endif

#ifndef NO_gtk_1widget_1show
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1show
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1show\n")

	gtk_widget_show((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1show_1now
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1show_1now
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1widget_1show_1now\n")

	gtk_widget_show_now((GtkWidget *)arg0);
}
#endif

#ifndef NO_gtk_1widget_1size_1allocate
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1size_1allocate
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GtkAllocation _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1widget_1size_1allocate\n")

	if (arg1) lparg1 = getGtkAllocationFields(env, arg1, &_arg1);
	gtk_widget_size_allocate((GtkWidget *)arg0, (GtkAllocation *)lparg1);
	if (arg1) setGtkAllocationFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1widget_1size_1request
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1size_1request
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	GtkRequisition _arg1, *lparg1=NULL;

	DEBUG_CALL("gtk_1widget_1size_1request\n")

	if (arg1) lparg1 = getGtkRequisitionFields(env, arg1, &_arg1);
	gtk_widget_size_request((GtkWidget *)arg0, (GtkRequisition *)lparg1);
	if (arg1) setGtkRequisitionFields(env, arg1, lparg1);
}
#endif

#ifndef NO_gtk_1widget_1style_1get
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1widget_1style_1get
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jintArray arg2, jint arg3)
{
	jbyte *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gtk_1widget_1style_1get\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gtk_widget_style_get((GtkWidget *)arg0, (const gchar *)lparg1, lparg2, arg3);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1window_1activate_1default
JNIEXPORT jboolean JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1activate_1default
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1activate_1default\n")

	return (jboolean)gtk_window_activate_default((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1add_1accel_1group
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1add_1accel_1group
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1window_1add_1accel_1group\n")

	gtk_window_add_accel_group((GtkWindow *)arg0, (GtkAccelGroup *)arg1);
}
#endif

#ifndef NO_gtk_1window_1deiconify
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1deiconify
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1deiconify\n")

	gtk_window_deiconify((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1get_1focus
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1get_1focus
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1get_1focus\n")

	return (jint)gtk_window_get_focus((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1get_1position
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1get_1position
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gtk_1window_1get_1position\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gtk_window_get_position((GtkWindow *)arg0, (gint *)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1window_1get_1size
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1get_1size
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("gtk_1window_1get_1size\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	gtk_window_get_size((GtkWindow *)arg0, (gint *)lparg1, (gint *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_gtk_1window_1iconify
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1iconify
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1iconify\n")

	gtk_window_iconify((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1maximize
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1maximize
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1maximize\n")

	gtk_window_maximize((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1move
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1move
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1window_1move\n")

	gtk_window_move((GtkWindow *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1window_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1new\n")

	return (jint)gtk_window_new((GtkWindowType)arg0);
}
#endif

#ifndef NO_gtk_1window_1present
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1present
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1present\n")

	gtk_window_present((GtkWindow *)arg0);
}
#endif

#ifndef NO_gtk_1window_1remove_1accel_1group
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1remove_1accel_1group
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1window_1remove_1accel_1group\n")

	gtk_window_remove_accel_group((GtkWindow *)arg0, (GtkAccelGroup *)arg1);
}
#endif

#ifndef NO_gtk_1window_1resize
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1resize
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("gtk_1window_1resize\n")

	gtk_window_resize((GtkWindow *)arg0, (gint)arg1, (gint)arg2);
}
#endif

#ifndef NO_gtk_1window_1set_1default
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1default
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1window_1set_1default\n")

	gtk_window_set_default((GtkWindow *)arg0, (GtkWidget *)arg1);
}
#endif

#ifndef NO_gtk_1window_1set_1destroy_1with_1parent
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1destroy_1with_1parent
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1window_1set_1destroy_1with_1parent\n")

	gtk_window_set_destroy_with_parent((GtkWindow *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1window_1set_1modal
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1modal
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1window_1set_1modal\n")

	gtk_window_set_modal((GtkWindow *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1window_1set_1resizable
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1resizable
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("gtk_1window_1set_1resizable\n")

	gtk_window_set_resizable((GtkWindow *)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_gtk_1window_1set_1title
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1title
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("gtk_1window_1set_1title\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	gtk_window_set_title((GtkWindow *)arg0, (const gchar *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_gtk_1window_1set_1transient_1for
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1set_1transient_1for
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("gtk_1window_1set_1transient_1for\n")

	gtk_window_set_transient_for((GtkWindow *)arg0, (GtkWindow *)arg1);
}
#endif

#ifndef NO_gtk_1window_1unmaximize
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_gtk_1window_1unmaximize
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("gtk_1window_1unmaximize\n")

	gtk_window_unmaximize((GtkWindow *)arg0);
}
#endif


#ifndef NO_memmove__ILorg_eclipse_swt_internal_gtk_GtkTargetEntry_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__ILorg_eclipse_swt_internal_gtk_GtkTargetEntry_2I
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jint arg2)
{
	GtkTargetEntry _arg1, *lparg1=NULL;

	DEBUG_CALL("memmove__ILorg_eclipse_swt_internal_gtk_GtkTargetEntry_2I\n")

	if (arg1) lparg1 = getGtkTargetEntryFields(env, arg1, &_arg1);
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_gtk_GtkAdjustment_2
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__ILorg_eclipse_swt_internal_gtk_GtkAdjustment_2
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	DEBUG_CALL("memmove__ILorg_eclipse_swt_internal_gtk_GtkAdjustment_2\n")

	if (arg1) getGtkAdjustmentFields(env, arg1, (GtkAdjustment *)arg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkFileSelection_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkFileSelection_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkFileSelection_2I\n")

	if (arg0) setGtkFileSelectionFields(env, arg0, (GtkFileSelection *)arg1);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_gtk_GtkStyle_2
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__ILorg_eclipse_swt_internal_gtk_GtkStyle_2
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	DEBUG_CALL("memmove__ILorg_eclipse_swt_internal_gtk_GtkStyle_2\n")

	if (arg1) getGtkStyleFields(env, arg1, (GtkStyle *)arg0);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_gtk_GdkEventButton_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__ILorg_eclipse_swt_internal_gtk_GdkEventButton_2I
	(JNIEnv *env, jclass that, jint arg0, jobject arg1, jint arg2)
{
	GdkEventButton _arg1, *lparg1=NULL;

	DEBUG_CALL("memmove__ILorg_eclipse_swt_internal_gtk_GdkEventButton_2I\n")

	if (arg1) lparg1 = getGdkEventButtonFields(env, arg1, &_arg1);
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkColorSelectionDialog_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkColorSelectionDialog_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkColorSelectionDialog_2I\n")

	if (arg0) setGtkColorSelectionDialogFields(env, arg0, (GtkColorSelectionDialog *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkDragContext_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkDragContext_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkDragContext _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkDragContext_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkDragContextFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkSelectionData_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkSelectionData_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GtkSelectionData _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkSelectionData_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGtkSelectionDataFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkTargetPair_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkTargetPair_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GtkTargetPair _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkTargetPair_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGtkTargetPairFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkStyle_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkStyle_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkStyle_2I\n")

	if (arg0) setGtkStyleFields(env, arg0, (GtkStyle *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkCombo_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkCombo_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkCombo_2I\n")

	if (arg0) setGtkComboFields(env, arg0, (GtkCombo *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkAdjustment_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkAdjustment_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkAdjustment_2I\n")

	if (arg0) setGtkAdjustmentFields(env, arg0, (GtkAdjustment *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkColor_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkColor_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkColor _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkColor_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkColorFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEvent_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEvent_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEvent _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEvent_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventButton_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventButton_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEventButton _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEventButton_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventButtonFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventCrossing_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventCrossing_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEventCrossing _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEventCrossing_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventCrossingFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventExpose_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventExpose_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEventExpose _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEventExpose_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventExposeFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventFocus_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventFocus_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEventFocus _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEventFocus_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventFocusFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventKey_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkEventKey_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkEventKey _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkEventKey_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkEventKeyFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GtkFixed_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GtkFixed_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GtkFixed_2I\n")

	if (arg0) setGtkFixedFields(env, arg0, (GtkFixed *)arg1);
}
#endif

#ifndef NO_memmove__ILorg_eclipse_swt_internal_gtk_GtkFixed_2
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__ILorg_eclipse_swt_internal_gtk_GtkFixed_2
	(JNIEnv *env, jclass that, jint arg0, jobject arg1)
{
	DEBUG_CALL("memmove__ILorg_eclipse_swt_internal_gtk_GtkFixed_2\n")

	if (arg1) getGtkFixedFields(env, arg1, (GtkFixed *)arg0);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkVisual_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkVisual_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkVisual_2I\n")

	if (arg0) setGdkVisualFields(env, arg0, (GdkVisual *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkImage_2I
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkImage_2I
	(JNIEnv *env, jclass that, jobject arg0, jint arg1)
{
	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkImage_2I\n")

	if (arg0) setGdkImageFields(env, arg0, (GdkImage *)arg1);
}
#endif

#ifndef NO_memmove__Lorg_eclipse_swt_internal_gtk_GdkRectangle_2II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__Lorg_eclipse_swt_internal_gtk_GdkRectangle_2II
	(JNIEnv *env, jclass that, jobject arg0, jint arg1, jint arg2)
{
	GdkRectangle _arg0, *lparg0=NULL;

	DEBUG_CALL("memmove__Lorg_eclipse_swt_internal_gtk_GdkRectangle_2II\n")

	if (arg0) lparg0 = &_arg0;
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) setGdkRectangleFields(env, arg0, lparg0);
}
#endif

#ifndef NO_memmove__I_3II
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__I_3II
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jint arg2)
{
	jint *lparg1=NULL;

	DEBUG_CALL("memmove__I_3II\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_memmove__I_3BI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove__I_3BI
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("memmove__I_3BI\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	memmove((void *)arg0, (const void *)lparg1, (size_t)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_memmove___3I_3BI
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove___3I_3BI
	(JNIEnv *env, jclass that, jintArray arg0, jbyteArray arg1, jint arg2)
{
	jint *lparg0=NULL;
	jbyte *lparg1=NULL;

	DEBUG_CALL("memmove___3I_3BI\n")

	if (arg0) lparg0 = (*env)->GetIntArrayElements(env, arg0, NULL);
	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	memmove((void *)lparg0, (const void *)lparg1, (size_t)arg2);
	if (arg0) (*env)->ReleaseIntArrayElements(env, arg0, lparg0, 0);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_memmove___3BII
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove___3BII
	(JNIEnv *env, jclass that, jbyteArray arg0, jint arg1, jint arg2)
{
	jbyte *lparg0=NULL;

	DEBUG_CALL("memmove___3BII\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
}
#endif

#ifndef NO_memmove___3CII
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove___3CII
	(JNIEnv *env, jclass that, jcharArray arg0, jint arg1, jint arg2)
{
	jchar *lparg0=NULL;

	DEBUG_CALL("memmove___3CII\n")

	if (arg0) lparg0 = (*env)->GetCharArrayElements(env, arg0, NULL);
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) (*env)->ReleaseCharArrayElements(env, arg0, lparg0, 0);
}
#endif

#ifndef NO_memmove___3III
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_memmove___3III
	(JNIEnv *env, jclass that, jintArray arg0, jint arg1, jint arg2)
{
	jint *lparg0=NULL;

	DEBUG_CALL("memmove___3III\n")

	if (arg0) lparg0 = (*env)->GetIntArrayElements(env, arg0, NULL);
	memmove((void *)lparg0, (const void *)arg1, (size_t)arg2);
	if (arg0) (*env)->ReleaseIntArrayElements(env, arg0, lparg0, 0);
}
#endif

#ifndef NO_pango_1attr_1list_1unref
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1attr_1list_1unref
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1attr_1list_1unref\n")

	pango_attr_list_unref((PangoAttrList *)arg0);
}
#endif

#ifndef NO_pango_1context_1get_1language
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1context_1get_1language
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1context_1get_1language\n")

	return (jint)pango_context_get_language((PangoContext *)arg0);
}
#endif

#ifndef NO_pango_1context_1get_1metrics
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1context_1get_1metrics
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2)
{
	DEBUG_CALL("pango_1context_1get_1metrics\n")

	return (jint)pango_context_get_metrics((PangoContext *)arg0, (const PangoFontDescription *)arg1, (PangoLanguage *)arg2);
}
#endif

#ifndef NO_pango_1context_1list_1families
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1context_1list_1families
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("pango_1context_1list_1families\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	pango_context_list_families((PangoContext *)arg0, (PangoFontFamily ***)lparg1, (int *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_pango_1context_1set_1language
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1context_1set_1language
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1context_1set_1language\n")

	pango_context_set_language((PangoContext *)arg0, (PangoLanguage *)arg1);
}
#endif

#ifndef NO_pango_1font_1description_1copy
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1copy
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1copy\n")

	return (jint)pango_font_description_copy((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1free\n")

	pango_font_description_free((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1from_1string
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1from_1string
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("pango_1font_1description_1from_1string\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)pango_font_description_from_string((const char *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_pango_1font_1description_1get_1family
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1get_1family
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1get_1family\n")

	return (jint)pango_font_description_get_family((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1get_1size
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1get_1size
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1get_1size\n")

	return (jint)pango_font_description_get_size((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1get_1style
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1get_1style
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1get_1style\n")

	return (jint)pango_font_description_get_style((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1get_1weight
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1get_1weight
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1get_1weight\n")

	return (jint)pango_font_description_get_weight((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1description_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1new
	(JNIEnv *env, jclass that)
{
	DEBUG_CALL("pango_1font_1description_1new\n")

	return (jint)pango_font_description_new();
}
#endif

#ifndef NO_pango_1font_1description_1set_1family
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1set_1family
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("pango_1font_1description_1set_1family\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	pango_font_description_set_family((PangoFontDescription *)arg0, (const char *)lparg1);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_pango_1font_1description_1set_1size
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1set_1size
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1font_1description_1set_1size\n")

	pango_font_description_set_size((PangoFontDescription *)arg0, (gint)arg1);
}
#endif

#ifndef NO_pango_1font_1description_1set_1stretch
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1set_1stretch
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1font_1description_1set_1stretch\n")

	pango_font_description_set_stretch((PangoFontDescription *)arg0, (PangoStretch)arg1);
}
#endif

#ifndef NO_pango_1font_1description_1set_1style
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1set_1style
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1font_1description_1set_1style\n")

	pango_font_description_set_style((PangoFontDescription *)arg0, (PangoStyle)arg1);
}
#endif

#ifndef NO_pango_1font_1description_1set_1weight
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1set_1weight
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1font_1description_1set_1weight\n")

	pango_font_description_set_weight((PangoFontDescription *)arg0, (PangoWeight)arg1);
}
#endif

#ifndef NO_pango_1font_1description_1to_1string
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1description_1to_1string
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1description_1to_1string\n")

	return (jint)pango_font_description_to_string((PangoFontDescription *)arg0);
}
#endif

#ifndef NO_pango_1font_1face_1describe
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1face_1describe
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1face_1describe\n")

	return (jint)pango_font_face_describe((PangoFontFace *)arg0);
}
#endif

#ifndef NO_pango_1font_1family_1list_1faces
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1family_1list_1faces
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("pango_1font_1family_1list_1faces\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	pango_font_family_list_faces((PangoFontFamily *)arg0, (PangoFontFace ***)lparg1, (int *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_pango_1font_1metrics_1get_1approximate_1char_1width
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1metrics_1get_1approximate_1char_1width
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1metrics_1get_1approximate_1char_1width\n")

	return (jint)pango_font_metrics_get_approximate_char_width((PangoFontMetrics *)arg0);
}
#endif

#ifndef NO_pango_1font_1metrics_1get_1ascent
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1metrics_1get_1ascent
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1metrics_1get_1ascent\n")

	return (jint)pango_font_metrics_get_ascent((PangoFontMetrics *)arg0);
}
#endif

#ifndef NO_pango_1font_1metrics_1get_1descent
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1metrics_1get_1descent
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1metrics_1get_1descent\n")

	return (jint)pango_font_metrics_get_descent((PangoFontMetrics *)arg0);
}
#endif

#ifndef NO_pango_1font_1metrics_1unref
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1font_1metrics_1unref
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1font_1metrics_1unref\n")

	pango_font_metrics_unref((PangoFontMetrics *)arg0);
}
#endif

#ifndef NO_pango_1language_1from_1string
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1language_1from_1string
	(JNIEnv *env, jclass that, jbyteArray arg0)
{
	jbyte *lparg0=NULL;
	jint rc;

	DEBUG_CALL("pango_1language_1from_1string\n")

	if (arg0) lparg0 = (*env)->GetByteArrayElements(env, arg0, NULL);
	rc = (jint)pango_language_from_string((const char *)lparg0);
	if (arg0) (*env)->ReleaseByteArrayElements(env, arg0, lparg0, 0);
	return rc;
}
#endif

#ifndef NO_pango_1layout_1get_1size
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1layout_1get_1size
	(JNIEnv *env, jclass that, jint arg0, jintArray arg1, jintArray arg2)
{
	jint *lparg1=NULL;
	jint *lparg2=NULL;

	DEBUG_CALL("pango_1layout_1get_1size\n")

	if (arg1) lparg1 = (*env)->GetIntArrayElements(env, arg1, NULL);
	if (arg2) lparg2 = (*env)->GetIntArrayElements(env, arg2, NULL);
	pango_layout_get_size((PangoLayout *)arg0, (int *)lparg1, (int *)lparg2);
	if (arg1) (*env)->ReleaseIntArrayElements(env, arg1, lparg1, 0);
	if (arg2) (*env)->ReleaseIntArrayElements(env, arg2, lparg2, 0);
}
#endif

#ifndef NO_pango_1layout_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1layout_1new
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1layout_1new\n")

	return (jint)pango_layout_new((PangoContext *)arg0);
}
#endif

#ifndef NO_pango_1layout_1set_1font_1description
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1layout_1set_1font_1description
	(JNIEnv *env, jclass that, jint arg0, jint arg1)
{
	DEBUG_CALL("pango_1layout_1set_1font_1description\n")

	pango_layout_set_font_description((PangoLayout *)arg0, (PangoFontDescription *)arg1);
}
#endif

#ifndef NO_pango_1layout_1set_1text
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1layout_1set_1text
	(JNIEnv *env, jclass that, jint arg0, jbyteArray arg1, jint arg2)
{
	jbyte *lparg1=NULL;

	DEBUG_CALL("pango_1layout_1set_1text\n")

	if (arg1) lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL);
	pango_layout_set_text((PangoLayout *)arg0, (const char *)lparg1, (int)arg2);
	if (arg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
}
#endif

#ifndef NO_pango_1tab_1array_1free
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1tab_1array_1free
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("pango_1tab_1array_1free\n")

	pango_tab_array_free((PangoTabArray *)arg0);
}
#endif

#ifndef NO_pango_1tab_1array_1new
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1tab_1array_1new
	(JNIEnv *env, jclass that, jint arg0, jboolean arg1)
{
	DEBUG_CALL("pango_1tab_1array_1new\n")

	return (jint)pango_tab_array_new((gint)arg0, (gboolean)arg1);
}
#endif

#ifndef NO_pango_1tab_1array_1set_1tab
JNIEXPORT void JNICALL Java_org_eclipse_swt_internal_gtk_OS_pango_1tab_1array_1set_1tab
	(JNIEnv *env, jclass that, jint arg0, jint arg1, jint arg2, jint arg3)
{
	DEBUG_CALL("pango_1tab_1array_1set_1tab\n")

	pango_tab_array_set_tab((PangoTabArray *)arg0, (gint)arg1, (PangoTabAlign)arg2, (gint)arg3);
}
#endif

#ifndef NO_strlen
JNIEXPORT jint JNICALL Java_org_eclipse_swt_internal_gtk_OS_strlen
	(JNIEnv *env, jclass that, jint arg0)
{
	DEBUG_CALL("strlen\n")

	return (jint)strlen((const char *)arg0);
}
#endif

