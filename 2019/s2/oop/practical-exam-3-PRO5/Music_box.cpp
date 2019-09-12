#include <iostream>
#include <string>
#include "Music_box.h"
using namespace std;

Music_box::Music_box()
{
	w = 0;
	name = "null";
}

Music_box::Music_box(string songname, int width)
{
	name = songname;
	w = width;
}

string Music_box::get_song()
{
	return name;
}

int Music_box::get_width()
{
	return w;
}

Music_box::~Music_box()
{
}
