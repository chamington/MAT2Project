#ifndef MAT2PROJECT_PORTAUDIO_IO_H
#define MAT2PROJECT_PORTAUDIO_IO_H

#include <portaudio.h>
#include <stdint.h>

class PortAudioIO {
	public:
		PortAudioIO();
		~PortAudioIO();
		PaErrorCode open_blocking_stream(
				int device_input,
				int device_output,
				double sample_rate,
				uint32_t samples_per_period);

		PaErrorCode open_callback_stream(
				int device_input,
				int device_output,
				double sample_rate,
				uint32_t samples_per_period,
				PaStreamCallback* callback,
				void* data);
		PaErrorCode start_stream();

		PaErrorCode close_stream();
		/*
		typedef struct
		{
			    float left_phase;
			        float right_phase;
		}   
		paTestData;
		static int callback( const void *inputBuffer, void *outputBuffer,
				unsigned long framesPerBuffer,
				const PaStreamCallbackTimeInfo* timeInfo,
				PaStreamCallbackFlags statusFlags,
				void *userData );
				*/
};

#endif
