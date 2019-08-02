int minimum(int array[], int n){

if(n < 1){
return 0;
}

int smallestNum = array[0];

for (int i = 0; i < n; i++){
if (smallestNum > array[i]){
smallestNum = array[i];
}
}

return smallestNum;
}
