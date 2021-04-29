#ifndef MAT2PROJECT_SETTINGS_WINDOW_H
#define MAT2PROJECT_SETTINGS_WINDOW_H

#include <gtkmm.h>
#include <gtkmm/window.h>
#include "settings_box.h"

class SettingsWindow : public Gtk::Window
{
	public:
		SettingsWindow();
		virtual ~SettingsWindow();

		bool isOpen;
	protected:
		Gtk::Box settings_box;
};
#endif
