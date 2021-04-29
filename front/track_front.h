#ifndef MAT2PROJECT_TRACK_FRONT_H
#define MAT2PROJECT_TRACK_FRONT_H

#include <gtkmm.h>
//#include "main_box.h"


class TrackFront : public Gtk::Box {
	public:
		TrackFront(bool homogeneous, int spacing, Gtk::PackOptions, unsigned int position, std::string label_, int padding = 0);
		virtual ~TrackFront();
		//MainBox* theBoxItsIn;
		Gtk::Button
			record_button,
			delete_button;
		Gtk::Label
			label;
		unsigned int getPosition();
		void subPos();

		unsigned int visiblePosition;
		unsigned int pos;
	protected:
		char padstr[80];
};

#endif

