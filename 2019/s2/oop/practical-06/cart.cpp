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

	if (cartCap == 4){

		return false;	
	}else{
	Meerkat[cartCap] = cat
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
		cout << Meerkat[i].getName() << " " << Meerkat[i].getAge() << endl;
	}
}

cart::~cart()
{
}
