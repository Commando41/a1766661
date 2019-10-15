#include<iostream>
#include <string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;

int main()
{

	Shelf *wooden = new Shelf(50);
	
	Music_box Jazz("Larry", 20);

	if(wooden->add_music_box(Jazz) == true)
	{
		cout << "It worked!" << endl;
	}else{
		cout << "Error shelf not enough space!" << endl;
	}

	Music_box *music = new Music_box();
	music = wooden->get_contents();
	int boxes = wooden->get_number_of_music_boxes();
	
	cout << "Shelf has" << endl;
	for(int i = 0; i < boxes; i++)
	{
		
	}
	return 0;
}
