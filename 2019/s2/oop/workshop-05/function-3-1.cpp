#include <iostream>

using namespace std;

int *readNumbers(){
	
	int *array = new int [10];
	for (int i = 0; i < 10; i++){
		cin >> *(array+i);
	}
	return array;
}

bool equalsArray(int *array1, int *array2, int length){

	if (length < 1){
		return false;
	}

	for (int i = 0; i < length; i++){
		if (*(array1+i) != *(array2+i)){
			return false;
		}
	}

return true;
}
