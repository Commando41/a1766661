#include <iostream>

using namespace std;

extern int* readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){

	int *setA = readNumbers();
	int *setB = readNumbers();
        int len1 = sizeof(setA)/sizeof(int);
	int len2 = sizeof(setB)/sizeof(int);
	if (len1 < len2){
		len1 = sizeof(setB)/sizeof(int);
	}
	bool equals;

	equals = equalsArray(setA, setB, len1);
	cout << equals << endl;
	delete[] setA;
	delete[] setB;

return 0;
}
