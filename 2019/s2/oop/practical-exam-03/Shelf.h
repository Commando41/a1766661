#ifndef SHELF_H
#define SHELF_H
#include "Music_box.h"
using namespace std;
#include <string>

class Shelf : public Music_box
{
public:
	Shelf();
	Shelf(int width);
	int get_width();
	int num_of_music_boxes;
	int w;
	Music_box *music_boxes = new Music_box[4];
	int get_number_of_music_boxes();
	Music_box *get_contents();
	bool add_music_box(Music_box a_music_box);
	~Shelf();
};

#endif
