#ifndef MAT2PROJECT_BUTTONS_H
#define MAT2PROJECT_BUTTONS_H

#include <gtkmm.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include "packbox.h"

class Buttons : public Gtk::Window
{
	public:
		Buttons();

		virtual ~Buttons();
	protected:
		Gtk::Box buttons_box;
};

#endif
