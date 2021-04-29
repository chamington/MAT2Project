#include <iostream>
#include "main_window.h"

MainWindow::MainWindow()
: main_box(Gtk::ORIENTATION_HORIZONTAL)
{
	std::cout<<"New window created"<<std::endl;
	
	this->set_border_width(10);
	this->set_title("MAT2Project");	
	MainBox *mainBox;
	mainBox = Gtk::manage(new MainBox(false, 0, Gtk::PACK_SHRINK));
	main_box.pack_start(*mainBox, Gtk::PACK_SHRINK);

	this->add(main_box);

	this->show_all_children();
	
}


MainWindow::~MainWindow()
{
	std::cout<<"Window deleted"<<std::endl;
}
