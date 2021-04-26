#include "packbox.h"
#include "main_window.h"
#include "settings.h"
#include "../back/button_connections.h" //connecting backend stuff with frontend stuff
#include <cstdio> //For sprintf().
#include <iostream>

ButtonConnections connections; //the object that connects the frontend and backend
//Settings settingsWindow;
void play_button_clicked(){
	connections.play_connection();
}
void recording_button_clicked(){
	connections.record_connection();
}

void settings_button_clicked(){
	//open a new window
	//settingsWindow.show();
}

PackBox::PackBox(bool homogeneous, int spacing, Gtk::PackOptions options,
		        int padding)
	: Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, spacing),
	  record_button("Record"),
	    play_button("Play"),
	    settings_button("Settings")
{
	  set_homogeneous(homogeneous);
	pack_start(record_button, options, padding);
	pack_start(play_button, options, padding);
	pack_start(settings_button, options, padding);
	record_button.signal_clicked().connect(sigc::ptr_fun(&recording_button_clicked));
	play_button.signal_clicked().connect(sigc::ptr_fun(&play_button_clicked));	
	settings_button.signal_clicked().connect(sigc::ptr_fun(&settings_button_clicked));
}

PackBox::~PackBox()
{
}
