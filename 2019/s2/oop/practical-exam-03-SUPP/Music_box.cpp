#include<iostream>
#include "Music_box.h"
#include<string>
using namespace std;
Music_box::Music_box()
{
	song = "NULL";
	width = 0;
}

Music_box::Music_box(string songname, int Swidth)
{
	song = songname;
	width = Swidth;
}

int Music_box::get_width()
{
	return width;
}

string Music_box::get_song()
{
	return song;
}

Music_box::~Music_box()
{
}
