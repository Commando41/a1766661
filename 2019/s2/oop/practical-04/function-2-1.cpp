#include <iostream>
using namespace std;
void print_sevens(int *nums, int length){

for (int i = 0; i < length; i++){
if (*nums++ % 7 == 1){
cout << *nums++ << "1" << endl; 
}
}

return ;
}
