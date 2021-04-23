#ifndef MAT2PROJECT_BUTTON_CONNECTIONS_H
#define MAT2PROJECT_BUTTON_CONNECTIONS_H

class ButtonConnections{
	public:
		ButtonConnections();
		~ButtonConnections();
		void play_connection();
		void record_connection();
	private:
		bool isRecording;
};


#endif
