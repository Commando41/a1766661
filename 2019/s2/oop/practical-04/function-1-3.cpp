//#include <iostream>
//using namespace std;
void cpyia(int old_array[], int new_array[], int length){

int* ptr1 = new int[length];

ptr1 = &old_array[0];
//cout << *ptr1 << endl;
for(int i = 0; i < length; i++){
new_array[i] = *(ptr1 + i);
//cout << *(ptr1 + i) << endl;
}
return;
}
