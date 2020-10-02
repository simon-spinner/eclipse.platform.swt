package org.eclipse.swt.internal;

import java.lang.reflect.*;

import org.eclipse.swt.internal.gtk.*;
import org.eclipse.swt.widgets.*;

/**
 * This class is an internal use utilities class introduced during the port
 * from GTK3 to GTK4. This class transforms a non-blocking show dialog call
 * to a blocking call.  See bug 567371 for more information and where this
 * is applied.
 */

public class SyncDialogUtil {
	static int responseID;
	static Callback dialogResponseCallback;

	/**
	 * A blocking call that waits for the handling of the signal before returning
	 *
	 * @return the response_id from the dialog presented to the user
	 */
	static public int run(Display display, long handle, boolean isNativeDialog) {
		initializeResponseCallback();
		OS.g_signal_connect(handle, OS.response, dialogResponseCallback.getAddress(), 0);
		if (isNativeDialog) {
			GTK.gtk_native_dialog_show(handle);
		} else {
			GTK.gtk_widget_show(handle);
		}

		while (!display.isDisposed()) {
			boolean eventsDispatched = OS.g_main_context_iteration (0, false);
			if (responseID != -1) {
				break;
			} else if (!eventsDispatched) {
				display.sleep();
			}
		}

		disposeResponseCallback();
		return responseID;
	}

	/**
	 * Initializes the response callback and resets the responseID of the dialog to the default value.
	 * This function should be called before connect the dialog to the "response" signal, as this sets up the callback.
	 */
	static void initializeResponseCallback() {
		dialogResponseCallback = new Callback(SyncDialogUtil.class, "dialogResponseProc", void.class, new Type[] {long.class, int.class, long.class});
		responseID = -1;
	}

	static void disposeResponseCallback() {
		dialogResponseCallback.dispose();
		dialogResponseCallback = null;
	}

	/**
	 * Callback function for the "response" signal in GtkDialog widgets.
	 * Destroys the dialog after a response is given.
	 */
	static void dialogResponseProc(long dialog, int response_id, long user_date) {
		responseID = response_id;
		GTK.gtk_window_destroy(dialog);
	}
}
