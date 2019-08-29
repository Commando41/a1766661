#include <iostream>

using namespace std;

int *readNumbers( int n){

	int *array = new int[n];
	for(int i = 0; i < n; i++){
	cin >> *(array+i);	
	}

return array;
}

void printNumbers(int *numbers, int length){

	for(int i = 0; i < length; i++){
	cout << i << " " << *(numbers+i) << endl;	
	}

return ;
}

bool equalsArray(int *array1, int *array2, int length){

	if(length < 1){
	return false;
	}

	for(int i = 0; i < length; i++){
	*(array1+i) != *(array2+i);
	return false;	
	}

return true;
}
