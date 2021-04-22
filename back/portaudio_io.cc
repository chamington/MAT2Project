// File: portaudio_io.cc

#include "portaudio_io.h"
#define SAMPLE_RATE (44100)


PortAudioIO::PortAudioIO()
{
}

PortAudioIO::~PortAudioIO()
{
}

PaErrorCode PortAudioIO::open_blocking_stream(
		int device_input,
		int device_output,
		double sample_rate,
		uint32_t samples_per_period)
{
	//return 0;
}

PaErrorCode PortAudioIO::open_callback_stream(
		int device_input,
		int device_output,
		double sample_rate,
		uint32_t samples_per_period,
		PaStreamCallback* callback,
		void* data)
{
	PaStream *stream;
	PaError err;
	/* Open an audio I/O stream. */
	err = Pa_OpenDefaultStream( &stream,
	                        0,          /* no input channels */
	                         2,          /* stereo output */
	                        paFloat32,  /* 32 bit floating point output */
	                         SAMPLE_RATE,
	                        256,        /* frames per buffer, i.e. the number
	                        of sample frames that PortAudio will
	                   request from the callback. Many apps
	                        may want to use
	                      paFramesPerBufferUnspecified, which
	                          tells PortAudio to pick the best,
	                    possibly changing, buffer size.*/
	                       callback, /* this is your callback function */
	                      &data ); /*This is a pointer that will be passed to
	                                        your callback*/
	       //if( err != paNoError ) goto error;
}

PaErrorCode PortAudioIO::start_stream()
{
	//err = Pa_StartStream( stream );
	//if( err != paNoError ) goto error;

}


PaErrorCode PortAudioIO::close_stream()
{
	//return 0;
}

/*
static int callback( const void *inputBuffer, void *outputBuffer, 
		unsigned long framesPerBuffer,
		const PaStreamCallbackTimeInfo* timeInfo,
		PaStreamCallbackFlags statusFlags,
		void *userData )
{
	paTestData *data = (paTestData*)userData; 
	float *out = (float*)outputBuffer;
	unsigned int i;
	(void) inputBuffer; 

	for( i=0; i<framesPerBuffer; i++ ){
		out++ = data->left_phase;  
		out++ = data->right_phase;  
		data->left_phase += 0.01f;
		if( data->left_phase >= 1.0f ) data->left_phase -= 2.0f;
		data->right_phase += 0.03f;
		if( data->right_phase >= 1.0f ) data->right_phase -= 2.0f;
	}
	return 0;
}
*/
