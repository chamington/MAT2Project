#gcc -o hello-world-gtk hello-world-gtk.c `pkg-config --cflags --libs gtk+-2.0`

# the compiler: gcc for C program, define as g++ for C++
# TODO make this better eventually lol
all:
	g++ -g main.cc front/main_window.cc front/main_box.cc front/settings_window.cc front/settings_box.cc back/portaudio_io.cc back/button_connections.cc /usr/local/lib/libportaudio.a -lrt -lm -lasound -ljack -lportaudio -pthread -o main `pkg-config --cflags --libs gtkmm-3.0` -Wall -Wextra -Wunreachable-code 
