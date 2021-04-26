#include <iostream>
#include "main_window.h"

MainWindow::MainWindow()
: buttons_box(Gtk::ORIENTATION_HORIZONTAL)
{
	
	this->set_border_width(10);
	
	PackBox *pPackBox1;
	pPackBox1 = Gtk::manage(new PackBox(false, 0, Gtk::PACK_SHRINK));
	buttons_box.pack_start(*pPackBox1, Gtk::PACK_SHRINK);

	this->add(buttons_box);

	this->show_all_children();
	
}


MainWindow::~MainWindow()
{
}
