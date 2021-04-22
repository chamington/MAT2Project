#ifndef MAT2PROJECT_PACKBOX_H
#define MAT2PROJECT_PACKBOX_H

#include <gtkmm.h>

class PackBox : public Gtk::Box
{
	public:
		  PackBox(bool homogeneous, int spacing, Gtk::PackOptions, int padding = 0);
		    virtual ~PackBox();



	protected:
		      Gtk::Button play_button, record_button;
		      //PlayButton play_button;

			  char padstr[80];
};

#endif
