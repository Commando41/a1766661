
bool is_a_palindrome(int integers[], int length)
{
if (length < 0){
return false;
}
for (int i = 0; i < length/2; i++){
if (integers[i] != integers[length - i - 1]){
return false;
}
}
return true;
}

int sum_elements(int integers[], int length)
{
if (length < 0){
return -2;
}
int sum = 0;

for (int i = 0; i < length; i++){
sum = sum + integers[i];
}

return sum;
}

int sum_if_a_palindrome(int integers[], int length)
{
if (length < 0){
return -2;
}
int sum;
if (is_a_palinedrome(integers, length) == true){
sum = sum_elements(integers, length);
}else{
sum = -2;
}
return sum;
}
