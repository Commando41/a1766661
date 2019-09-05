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
	//int i = cartCap;
	Meerkat[cartCap] = cat.getName();
	MeerAge[cartCap] = cat.getAge();
	if (cartCap == 4){
		cout << "Too many meerkats!" << endl;
		return false;	
	}else{
	cartCap++;
	}
	return true;
}

void cart::emptyCart()
{	
	cartCap = 0;
}

void cart::printMeerkats()
{
	for(int i = 0; i< cartCap; i++){
		cout << Meerkat[i] << " " << MeerAge[i] << endl;
	}
}

cart::~cart()
{
}
