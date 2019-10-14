#ifndef MUSIC_BOX_H
#define MUSIC_BOX_H
#include <string>
using namespace std;
class Music_box
{
	public:
		Music_box();
		Music_box(string songname, int width);
		string get_song();
		int get_width();
		int width;
		string song;
		~Music_box();
};

#endif
