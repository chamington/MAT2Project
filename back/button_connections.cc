// File: button_connections.cc

#include "button_connections.h"
#include <iostream>

ButtonConnections::ButtonConnections()
{
	isRecording=false;
}
ButtonConnections::~ButtonConnections()
{
}

void ButtonConnections::play_connection(){
	if (isRecording){
		record_connection(0);
	}
	std::cout << "Playing..." << std::endl;
}

void ButtonConnections::record_connection(unsigned int track){
	if (isRecording){
		std::cout << "Stopped recording" << std::endl;
		isRecording=!isRecording;
	}
	else{
		std::cout << "Recording track " << track << "..." << std::endl;
		isRecording=!isRecording;
	}
}

void ButtonConnections::add_track_connection(){
	std::cout << "Track Added!" << std::endl;
}

void ButtonConnections::delete_connection(unsigned int track){
	std::cout<<"Deleted track "<<track<<std::endl;
}


