#include<iostream>
#include<string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;
Shelf::Shelf()
{
	//cout <<"New shelf" << endl;
	Awidth = 0;
	currentWidth = 0;
	//count = 0;
}

Shelf::Shelf(int width)
{
	//count = 0;	
	//cout <<"New shelf" << endl;
	Awidth = width;
	currentWidth = width;
}

int Shelf::get_width()
{
	//cout << "Returned width" << endl;	
	return Awidth;
}

int Shelf::get_number_of_music_boxes()
{
	//cout << "Returned count" << endl;
	return count;
}

Music_box *Shelf::get_contents()
{
	for(int i = 0; i < count; i++)
	{
		//cout << "Returned Box[" << i << "]"<< endl;
		Box[i];
	}
	//cout << "Returned Box" << endl;
	return Box;
}

bool Shelf::add_music_box(Music_box a_music_box)
{
	if(currentWidth > a_music_box.width)
	{
		Box[count] = a_music_box;
		currentWidth = currentWidth - a_music_box.width;
		count++;
		//cout << "Returned true" << endl;
		return true;
	}else{
		//cout << "Returned false" << endl;
		return false;
	}
}

Shelf::~Shelf()
{
}
