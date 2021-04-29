#ifndef MAT2PROJECT_MAIN_WINDOW_H
#define MAT2PROJECT_MAIN_WINDOW_H

#include <gtkmm.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include "main_box.h"
#include "settings_window.h"

class MainWindow : public Gtk::Window
{
	public:
		MainWindow();

		virtual ~MainWindow();
	protected:
		Gtk::Box main_box;
		//Gtk::SettingsWindow* settings_window;
};

#endif
