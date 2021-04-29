#include <string>
#include "track_front.h"

TrackFront::TrackFront(bool homogeneous, int spacing, Gtk::PackOptions options, unsigned int position, std::string label_, int padding)
	: Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, spacing),
	record_button("Record"),
	delete_button("Delete"),
	label(label_)
{
	pos = position;
	pack_start(label, options, padding);
	pack_start(record_button, options, padding);
	pack_start(delete_button, options, padding);
}
TrackFront::~TrackFront(){
}

unsigned int TrackFront::getPosition(){
	return pos;
}

void TrackFront::subPos(){
	--pos;
}
