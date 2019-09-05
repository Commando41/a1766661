#ifndef CART_H
#define CART_H
#include "meerkat.h"
using namespace std;
#include <string>

class cart
{
public:
	int cartCap;
	string Meerkat[5];
	int MeerAge[5]; 
	cart();
	bool addMeerkat(meerkat cat);
	void emptyCart();
	void printMeerkats();
	~cart();
	

};
#endif
