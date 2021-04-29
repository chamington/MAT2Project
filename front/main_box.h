#ifndef MAT2PROJECT_MAIN_BOX_H
#define MAT2PROJECT_MAIN_BOX_H

#include "settings_window.h"
#include "track_front.h"
#include <gtkmm.h>

class MainBox : public Gtk::Box {
	public:
		MainBox(bool homogeneous, int spacing, Gtk::PackOptions, int padding = 0);
		virtual ~MainBox();
		//std::vector<TrackFront*> tracks;
		void add_track_button_clicked();

		void record_button_clicked(unsigned int* position);
		void delete_button_clicked(unsigned int* position);

		void print_tracks();

	protected:
		Gtk::Button 
			play_button, 
			record_button, 
			//settings_button, 
			new_window_button,
			add_track_button;
		//PlayButton play_button;
		//Gtk::SettingsWindow* settings_window;
		std::vector<TrackFront*> tracks;
		char padstr[80];
};

#endif
