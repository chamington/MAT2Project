// File: main.cc

#include "front/buttons.h"
#include "front/packbox.h"
#include "back/portaudio_io.h"
#include <gtkmm/application.h>
#include <portaudio.h>


int main (int argc, char *argv[])
{

	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
	Pa_Initialize();
	Buttons buttons_box;
	//Shows the window and returns when it is closed.
	//RecordButton record_button;
	//app->run(record_button);
	return app->run(buttons_box);
	//return app->run(record);
}
