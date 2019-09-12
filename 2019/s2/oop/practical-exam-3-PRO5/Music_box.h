#ifndef MUSIC_BOX_H
#define MUSIC_BOX_H

using namespace std;

#include <string>

class Music_box
{
public:
	Music_box();
	Music_box(string songname, int width);
	string get_song();
	string name;
	int w;
	int get_width();
	~Music_box();
};

#endif

