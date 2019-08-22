#include <iostream>
void print_sevens(int *nums, int length){

for (int i = 0; i < length; i++){
if (*nums++ % 7 == 1){
std::cout << *nums++ << std::endl; 
}
}

return ;
}
