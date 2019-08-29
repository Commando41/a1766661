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

void printSubArrays(int *numbers, int length){

	for(int i = 1; i < length + 1; i++){
	for(int l = 0; l < i; l++){
	cout << "{";
	for(int k = l; k < i; k++){
	if(k == l-1){
	cout << *(numbers+k);
	}else{
	cout << *(numbers+k) << ",";
}
	cout << "}" << endl;
}
}
}
