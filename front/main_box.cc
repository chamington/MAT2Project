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

void MainBox::print_tracks(){
	for (unsigned int i=0;i<tracks.size();i++){
		std::cout<<"tracks["<<i<<"] value summary:"<<std::endl;
		if (tracks[i]==nullptr){
			std::cout<<"It's null"<<std::endl;
		}
		else{
			std::cout<<"Position: "<<tracks[i]->getPosition()<<std::endl;
			std::cout<<"Visible position: "<<tracks[i]->visiblePosition<<std::endl;
		}
		std::cout<<std::endl;
	}
}

void MainBox::record_button_clicked(unsigned int* position){
	connections.record_connection(*position);
}

void MainBox::delete_button_clicked(unsigned int* position){
	//std::cout<<"DELETE BUTTON BEFORE CODE:::"<<std::endl;
	//print_tracks();
	std::cout<<"Deleted position: "<<*position<<std::endl;
	delete tracks[*position];
	tracks.erase(tracks.begin()+*position);
	for (unsigned int i=*position;i<tracks.size();i++){
		tracks[i]->subPos();
	}
	connections.delete_connection(*position);
	//std::cout<<"DELETE BUTTON AFTER CODE:::"<<std::endl;
	//print_tracks();
}

void MainBox::add_track_button_clicked(){
	//std::cout<<"ADD TRACK BUTTON BEFORE CODE:::"<<std::endl;
	//print_tracks();
	unsigned int newTrackVisiblePos;
	if (tracks.size()==0){
		newTrackVisiblePos=1;
	}
	else{
		newTrackVisiblePos=tracks[tracks.size()-1]->visiblePosition+1;
	}
	TrackFront* track = new TrackFront(false, 0, Gtk::PACK_SHRINK, tracks.size(),"     Track "+std::to_string(newTrackVisiblePos)+": ");
	track->visiblePosition=newTrackVisiblePos;
	tracks.push_back(track);
	pack_start(*track, Gtk::PACK_SHRINK);
	show_all_children();
	track->record_button.signal_clicked().connect(
		sigc::bind<unsigned int*>(
			sigc::mem_fun(this, &MainBox::record_button_clicked),
			&track->pos
		)
	);
	track->delete_button.signal_clicked().connect(
		sigc::bind<unsigned int*>(
			sigc::mem_fun(this, &MainBox::delete_button_clicked),
			&track->pos
		)
	);
	connections.add_track_connection();
	//std::cout<<"ADD TRACK BUTTON AFTER CODE:::"<<std::endl;
	//print_tracks();
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
	play_button("Play"),
	add_track_button("Add Track"),
	//settings_button("Settings"),
	new_window_button("New Window")
{
	//std::cout<<tracks.size()<<std::endl;
	set_homogeneous(homogeneous);
	pack_start(play_button, options, padding);
	pack_start(add_track_button, options, padding);
	//pack_start(settings_button, options, padding);
	pack_start(new_window_button, options, padding);
	
	play_button.signal_clicked().connect(sigc::ptr_fun(&play_button_clicked));
	add_track_button.signal_clicked().connect(sigc::mem_fun(this, &MainBox::add_track_button_clicked));
	//settings_button.signal_clicked().connect(sigc::ptr_fun(&settings_button_clicked));
	new_window_button.signal_clicked().connect(sigc::ptr_fun(&new_window_button_clicked));
}

MainBox::~MainBox()
{
}
