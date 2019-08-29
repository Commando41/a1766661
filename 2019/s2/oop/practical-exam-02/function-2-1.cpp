#include <iostream>

using namespace std;

int *readNumbers(int n){

	int *array = new int[n];
	for(int i = 0; i < n; i++){
	cin >> *(array+i);	
	}

}

void grades(int *gradespoint, int length){

	for(int i = 0; i < length; i++){
		switch (*(gradespoint+i)){
			case 1: cout << i << *(gradespoint+i) << "Fail" << endl;
			break;
			case 2: cout << i << *(gradespoint+i) << "Pass" << endl;
			break;
			case 3: cout << i << *(gradespoint+i) << "Credit" << endl;
			break;
			case 4: cout << i << *(gradespoint+i) << "Distinction" << endl;
			break;
			case 5: cout << i << *(gradespoint+i) << "Higher distinction" << endl;		
			break;
		}	
	}

return ;
}
