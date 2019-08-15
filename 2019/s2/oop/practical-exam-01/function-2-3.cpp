#include <cmath>
bool is_a_palindrome(int integers[], int length){
if(length < 1){
return false;
}
for (int k = 0; k < round(length/2); k++){
if (integers[k] != integers[length - k - 1]){
return false;
}
}
return true;
}

int sum_elements(int integers[], int length){
if (length < 1){
return -1;
}

int sum = 0;
for (int i = 0; i < length; i++){
sum += integers[i];
}
return sum;
}

int sum_if_a_palindrome(int integers[], int length){

if (is_a_palindrome(integers, length) == 1){
int sum = 0; 
sum += sum_elements(integers, length);
return sum;
}

return -2;
}
