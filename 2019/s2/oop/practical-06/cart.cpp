#include <iostream>
#include "cart.h"
#include "meerkat.h"
using namespace std;

cart::cart()
{
	cartCap = 0;
}

bool cart::addMeerkat(meerkat cat)
{
	int i = cartCap;
	Meerkat[i] = cat.getName();
	MeerAge[i] = cat.getAge();
	if (cartCap == 5){
		cout << "Too many meerkats!" << endl;
		return false;	
	}else{
	cartCap++;
	}
	return true;
}

void cart::emptyCart()
{
	if (cartCap == 5){	
		cartCap = 0;
	}
}

void cart::printMeerkats()
{
	for(int i = 0; i< 5; i++){
		cout << Meerkat[i] << " " << MeerAge[i] << endl;
	}
}

cart::~cart()
{
}
