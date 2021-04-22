#include <iostream>
#include "buttons.h"

Buttons::Buttons()
: buttons_box(Gtk::ORIENTATION_HORIZONTAL)
{
	
	set_border_width(10);
	
	PackBox *pPackBox1;
	pPackBox1 = Gtk::manage(new PackBox(false, 0, Gtk::PACK_SHRINK));
	buttons_box.pack_start(*pPackBox1, Gtk::PACK_SHRINK);

	add(buttons_box);

	show_all_children();
	
}


Buttons::~Buttons()
{
}
