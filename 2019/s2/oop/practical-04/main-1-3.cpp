#include <iostream>
#include <stdlib.h>

extern void cpyia(int old_array[], int new_array[], int length);

int main(){

int setA[5] = {1,2,3,4,5};

int setB[5];

cpyia(setA, setB, 5);

return 0;
}
