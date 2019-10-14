#include<iostream>
#include "Music_box.h"
#include<string>

using namespace std;

int main()
{

	Music_box *music_box = new Music_box();
	
	music_box->get_song();
	music_box->get_width();

	return 0;
}
