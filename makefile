#gcc -o hello-world-gtk hello-world-gtk.c `pkg-config --cflags --libs gtk+-2.0`

# the compiler: gcc for C program, define as g++ for C++
# TODO make this better eventually lol
all:
	g++ main.cc front/buttons.cc front/packbox.cc back/portaudio_io.cc /usr/local/lib/libportaudio.a -lrt -lm -lasound -ljack -pthread -o main `pkg-config --cflags --libs gtkmm-3.0` 
