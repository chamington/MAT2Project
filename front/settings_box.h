#ifndef MAT2PROJECT_SETTINGS_BOX_H
#define MAT2PROJECT_SETTINGS_BOX_H

#include <gtkmm.h>

class SettingsBox : public Gtk::Box {
	public:
		SettingsBox(bool homogeneous, int spacing, Gtk::PackOptions, int padding = 0);
		virtual ~SettingsBox();

	protected:
		// various settings go here
		// Sample rate and buffer size
		//Gtk::DropDown
		//	sample_size_dropdown;
		char padstr[80];
};

#endif
