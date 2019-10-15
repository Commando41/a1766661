#ifndef SHELF_H
#define SHELF_H

#include <string>
#include "Music_box.h"

using namespace std;

class Shelf
{
	public:
		Shelf();
		Shelf(int width);
		int get_width();
		int Awidth;
		int get_number_of_music_boxes();
		int count;
		Music_box *get_contents();
		Music_box Box[5];
		int currentWidth;
		bool add_music_box(Music_box a_music_box);
		~Shelf();
};

#endif
