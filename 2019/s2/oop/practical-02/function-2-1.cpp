#include <iostream>
#include <string.h>


void print_as_binary(std::string decimal_number){

namespace std;

int number = stoi(input);
int binary[number] = {0}; 
int i = 1;
int j = number;

while (number > 0){
if (number % 2 == 1){
binary[j - i] = 1;
number = number / 2 - 0.5;
}else{
binary[j-i] = 0;
number = number / 2;
}

cout << binary << endl;

return ;
}
