#include <iostream>
extern int sum_if_a_palindrome(int integers[], int length);

int main(){

int setA[3] = {1,2,1};

std::cout << "Sum of palindrome is " << sum_if_a_palindrome(setA, 3) << std::endl;

return 0;
}
