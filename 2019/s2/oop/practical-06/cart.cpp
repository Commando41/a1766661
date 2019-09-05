#include <iostream>
#include "cart.h"

using namespace std;

cart::cart()
{
	cartCap = 0;
}

bool cart::addMeerkat(meerkat cat)
{
	if (cartCap == 5){
		return false;	
	}else{
	cartCap++;
	}
	
}
