#include <iostream>
#include <string.h>
#include <stdlib.h>
namespace std;

void print_as_binary(std::string decimal_number);

int main(){

string decimal_number;

cout << "Enter a number: " << endl;
cin >> decimal_number;

print_as_binary(std::string decimal_number);

return 0;
}
