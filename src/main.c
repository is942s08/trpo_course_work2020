#include <gtk/gtk.h>
#include "settings.h"
#include "users.h"

GtkWindow* main_window;

void init()
{
	GtkBuilder* builder = gtk_builder_new();
	gtk_builder_add_from_file(builder, "glade/app.glade", NULL);

	main_window = GTK_WINDOW(gtk_builder_get_object(builder, "main_window"));
	settings_window = GTK_WINDOW(gtk_builder_get_object(builder, "settings_window"));
	change_user_window = GTK_WINDOW(gtk_builder_get_object(builder, "change_user_window"));
	gtk_builder_connect_signals(builder, NULL);

	g_object_unref(builder);
}

int main(int argc, char *argv[])
{
	gtk_init(&argc, &argv);

	init();

	gtk_widget_show(GTK_WIDGET(main_window));
	gtk_main();

	return 0;
}

void on_window_main_destroy()
{
	gtk_main_quit();
}

void on_menu_button_import_activate()
{
	// to do
}

void on_menu_button_export_activate()
{
	// to do
}

void on_menu_button_settings_activate()
{
	// to do
	gtk_widget_show(GTK_WIDGET(settings_window));
}

void on_menu_button_quit_activate()
{
	gtk_widget_destroy(GTK_WIDGET(main_window));
}

void on_menu_button_statistics_activate()
{
	// to do
}

void on_menu_button_change_user_activate()
{
	// to do
	gtk_widget_show(GTK_WIDGET(change_user_window));
}

void on_menu_button_about_activate()
{
	// to do
}