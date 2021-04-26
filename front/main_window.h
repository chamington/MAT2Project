#ifndef MAT2PROJECT_MAIN_WINDOW_H
#define MAT2PROJECT_MAIN_WINDOW_H

#include <gtkmm.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include "packbox.h"
#include "settings.h"

class MainWindow : public Gtk::Window
{
	public:
		MainWindow();

		virtual ~MainWindow();
	protected:
		Gtk::Box buttons_box;
};

#endif
