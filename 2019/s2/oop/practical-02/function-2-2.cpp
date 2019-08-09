#include <iostream>
int binary_to_number(int binary_digits[], int number_of_digits){

int value = 0;

for (int i = 0 ; i < number_of_digits; i++){
if (binary_digits[i] == 1){
value = value + pow(2, number_of_digits - 1 - i);
std::cout << value << std::endl;
}
}

return value;
}
