#include <iostream>
int *readNumbers(){

int *setA = new int[10];
for(int i = 0; i < 10; i++){
std::cin >> setA[i];
}

return setA; 
}

void printNumbers(int *numbers, int length){

for(int i = 0; i < length; i++){
std::cout << i << " " << *(numbers+i) << std::endl;
}
delete [] numbers;
return ;
}
