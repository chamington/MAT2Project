#include "settings_window.h"

SettingsWindow::SettingsWindow()
{
	this->set_border_width(10);
	this->set_title("Settings");
	SettingsBox *settingsBox; 
	settingsBox = Gtk::manage(new SettingsBox(false, 0, Gtk::PACK_SHRINK));
	settings_box.pack_start(*settingsBox, Gtk::PACK_SHRINK);

	this->add(settings_box);

	this->show_all_children();
}

SettingsWindow::~SettingsWindow()
{
}
