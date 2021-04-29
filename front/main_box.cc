#include "main_box.h"
#include "main_window.h"
#include "settings_window.h"
#include "../back/button_connections.h" //connecting backend stuff with frontend stuff
#include <cstdio> //For sprintf().
#include <iostream>

ButtonConnections connections; //the object that connects the frontend and backend

//SettingsWindow* settingsWindow = new SettingsWindow;


void play_button_clicked(){
	connections.play_connection();
}
void recording_button_clicked(){
	connections.record_connection();
}

void settings_button_clicked(){
	//open a new window
	/*
	SettingsWindow* settingsWindow = new SettingsWindow;
	if (!settingsWindow->isOpen){
		settingsWindow->show();
	}
	*/
}

void new_window_button_clicked(){
	MainWindow* new_window = new MainWindow;
	new_window->show();
}

MainBox::MainBox(bool homogeneous, int spacing, Gtk::PackOptions options,
		        int padding)
	: Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, spacing),
	record_button("Record"),
	play_button("Play"),
	//settings_button("Settings"),
	new_window_button("New Window")
{
	set_homogeneous(homogeneous);
	pack_start(record_button, options, padding);
	pack_start(play_button, options, padding);
	//pack_start(settings_button, options, padding);
	pack_start(new_window_button, options, padding);
	
	record_button.signal_clicked().connect(sigc::ptr_fun(&recording_button_clicked));
	play_button.signal_clicked().connect(sigc::ptr_fun(&play_button_clicked));	
	//settings_button.signal_clicked().connect(sigc::ptr_fun(&settings_button_clicked));
	new_window_button.signal_clicked().connect(sigc::ptr_fun(&new_window_button_clicked));
}

MainBox::~MainBox()
{
}
