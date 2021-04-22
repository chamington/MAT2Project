#include "packbox.h"
#include "buttons.h"
#include <cstdio> //For sprintf().
#include <iostream>

bool isRecording=false;

void recording_button_clicked()
{
	if (!isRecording){
	    std::cout << "Recording..." << std::endl;
	    isRecording=!isRecording;
	}
	else{
		std::cout << "Stopped recording" << std::endl;
		isRecording=!isRecording;
	}
}
void play_button_clicked()
{
	if (isRecording){
		std::cout << "Stopped recording" << std::endl;
		isRecording=!isRecording;
	}
	std::cout << "Playing" << std::endl;
}
PackBox::PackBox(bool homogeneous, int spacing, Gtk::PackOptions options,
		        int padding)
	: Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, spacing),
	  record_button("Record"),
	    play_button("Play")
{
	  set_homogeneous(homogeneous);
	pack_start(record_button, options, padding);
	pack_start(play_button, options, padding);
	record_button.signal_clicked().connect(sigc::ptr_fun(&recording_button_clicked));
	play_button.signal_clicked().connect(sigc::ptr_fun(&play_button_clicked));	
}

PackBox::~PackBox()
{
}
