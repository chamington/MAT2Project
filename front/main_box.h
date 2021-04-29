#ifndef MAT2PROJECT_MAIN_BOX_H
#define MAT2PROJECT_MAIN_BOX_H

#include "settings_window.h"
#include <gtkmm.h>

class MainBox : public Gtk::Box {
	public:
		MainBox(bool homogeneous, int spacing, Gtk::PackOptions, int padding = 0);
		virtual ~MainBox();



	protected:
		Gtk::Button 
			play_button, 
			record_button, 
			//settings_button, 
			new_window_button;
		//PlayButton play_button;
		//Gtk::SettingsWindow* settings_window;
		char padstr[80];
};

#endif
