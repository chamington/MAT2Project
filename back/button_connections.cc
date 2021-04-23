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
		record_connection();
	}
	std::cout << "Playing..." << std::endl;
}

void ButtonConnections::record_connection(){
	if (isRecording){
		std::cout << "Stopped recording" << std::endl;
		isRecording=!isRecording;
	}
	else{
		std::cout << "Recording..." << std::endl;
		isRecording=!isRecording;
	}
}
