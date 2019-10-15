#include<iostream>
#include <string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;
Shelf::Shelf()
{
	Swidth = 0;
}

Shelf::Shelf(int width)
{
	Swidth = width;
}

int Shelf::get_width()
{
	return Awidth;
}

int Shelf::get_number_of_music_boxes()
{
	return count;
}

Music_box *Shelf::get_contents()
{
	for(int i = 0; i < count; i++)
	{
		Box[i];
	}
	return Box;
}

bool Shelf::add_music_box(Music_box a_music_box)
{
	if(currentWidth < a_music_box.width)
	{
		Box[count] = a_music_box;
		currentWidth = currentWidth - a_music_box.width;
		count++
		return true;
	}else{
		return false;
	}
}

Shelf::~Shelf()
{
}
