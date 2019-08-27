#include <iostream>

extern void hexDigits(int *numbers, int length);

int main(){

int *setA = new int [16] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

hexDigits(setA,16);

delete [] setA;

return 0;
}
