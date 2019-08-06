#include <iostream>
#include <cmath>
using namespace std;

int main(){

std::string output;
int number;

std::cout << "Enter input" << std::endl;
std::cin >> number;

while (number > 0){
if (number % 2 == 1){
output = "1" + output;
number = round(number / 2) - 1;
}else{
output = "0" + output;
number = number / 2;
}

}

std::cout << output << std::endl;

return 0;
}

