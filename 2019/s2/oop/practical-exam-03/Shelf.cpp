#include <iostream>
#include "Music_box.h"
#include "Shelf.h"
#include <string>

using namespace std;

int i = 0;

Shelf::Shelf()
{
	w = 0;
}

Shelf::Shelf(int width)
{
	w = width;
}

int Shelf::get_number_of_music_boxes()
{
	return num_of_music_boxes;
}

Music_box Shelf::*get_contents()
{
	return *music_boxes;
}

bool Shelf::add_music_box(Music_box a_music_box)
{
	int width = a_music_box.get_width();
	if(width < w){
		music_boxes[i] = a_music_box;
		w = w - a_music_box.get_width();
		i++;
		return true;
	}else{
	return false;
	}
}

Shelf::~Shelf()
{
}
