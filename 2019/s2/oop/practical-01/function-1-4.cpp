int sumtwo(int array[], int secondArray[], int n){

if (n < 1){
return 0;
}

int sum = 0;

for (int i = 0; i < n; i++){
sum += array[i];
sum += secondArray[i];
}

return sum;
}
