#include<iostream>
#include <string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;

int main()
{

	Shelf *wooden = new Shelf(50);
	
	Music_box Jazz = new Music_box(20);

	Music_box *music = new Music_box(3);
	
	int boxes = wooden->get_contents();
	
	for(int i = 0; i < boxes; i++)
	{
		

	return 0;
}
