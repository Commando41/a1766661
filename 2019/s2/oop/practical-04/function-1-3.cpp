//#include <iostream>
//using namespace std;
void cpyia(int old_array[], int new_array[], int length){

int* ptr1 = new int[length];
int* ptr2 = new int[length];
ptr1 = old_array;
ptr2 = new_array;
//cout << *ptr1 << endl;
for(int i = 0; i < length; i++){
*(ptr2+i) = *(ptr1 + i);
//cout << *(ptr1 + i) << endl;
}
return;
}
