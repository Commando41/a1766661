#include <iostream>
#include <string.h>
using namespace std;

void print_as_binary(std::string decimal_number){

int number = stoi(decimal_number);
int binary[100]; 
int i = 0;
//int j = number;


while (number > 0){
    if (number % 2 == 0){
    number = (number - 1) / 2;
    }else{
    number = number / 2;
    }
    i++;
}
for (int p = 0; p < i; p++){
cout << binary[p];
}
cout << endl;
return ;
}
