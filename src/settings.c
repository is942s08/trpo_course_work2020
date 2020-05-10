#include <gtk/gtk.h>

GtkWindow *settings_window;

void on_settings_window_show()
{
	// to do
	// get values for all settings and set them
}

void on_difficulty_setting_changed()
{
	// to do
	// set difficulty
}

void on_settings_window_delete_event()
{
	gtk_widget_hide(GTK_WIDGET(settings_window));
}

void on_settings_accept_button_clicked()
{
	// to do
	// save settings
	gtk_widget_hide(GTK_WIDGET(settings_window));
}