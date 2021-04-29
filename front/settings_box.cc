#include "settings_box.h"


SettingsBox::SettingsBox(bool homogeneous, int spacing, Gtk::PackOptions options,
		int padding)
	: Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, spacing)
	  //,
	//sample_size_dropdown("Sample Size")
{
	set_homogeneous(homogeneous);
	//pack_start(sample_size_dropdown, options, padding);
}

SettingsBox::~SettingsBox(){
}
