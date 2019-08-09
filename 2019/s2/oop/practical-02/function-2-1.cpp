#include <iostream>
#include <string.h>

using namespace std;

void print_as_binary(std::string decimal_number){

int number = stoi(decimal_number);
cout << number << endl;
int binary[100]; 
int i = 0;

while (number > 0){
    if (number % 2 == 1){
    number = (number - 1) / 2;
    binary[i] = 1;
    }else{
    number = number / 2;
    binary[i] = 0;
    }
    cout << number << endl;
    i++;
}
for (int p = 0; p < i; p++){
cout << binary[p];
}
cout << endl;
return ;
}
