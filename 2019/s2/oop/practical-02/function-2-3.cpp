#include <math.h>
bool is_a_palinedrome(int integers[], int length)
{
for (int i = 0; i < length/2; i++){
if (integers[i] != integers[length - i - 1]){
return false;
}
}
return true;
}

int sum_elements(int integers[], int length)
{

int sum = 0;

for (int i = 0; i < length; i++){
sum = sum + integers[i];
}

return sum;
}

int sum_if_a_palinedrome(int integers[], int length)
{
int sum;
if (is_a_palinedrome(integers, length) == 1){
sum = sum_elements(integers, length);
return sum;
}else{
sum = -2;
}
return sum;
}
