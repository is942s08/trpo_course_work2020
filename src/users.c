#include <gtk/gtk.h>

GtkWindow *change_user_window;

void on_new_user_button_clicked()
{
	// to do
	// create new user dialog
}

void on_change_user_button_clicked()
{
	// to do
	// set selected user to current
	gtk_widget_hide(GTK_WIDGET(change_user_window));
}

void on_change_user_window_delete_event()
{
	// to do
	gtk_widget_hide(GTK_WIDGET(change_user_window));
}