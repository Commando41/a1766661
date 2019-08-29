#include <iostream>

int *readNumbers(){
	
	int *array = new int[10];
	for(int i = 0; i < 10; i++){
	cin>>*(array+i);	
	}

return array;
}

void printNumbers(int *numbers, int n){

	for(int i = 0; i < n; i++){
	cout << i << " " << *(numbers+i) << endl;
	}

return ;
}
