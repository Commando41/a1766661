#include <iostream>
using namespace std;
int main(){

int b = 42;

int *ptr = &b;

*ptr = *ptr + 5;

cout << *ptr << endl;

*ptr = *ptr - 2;

cout << *ptr << endl;

return 0;
}
