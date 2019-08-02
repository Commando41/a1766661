double average(int array[], int n){

double average;

if (n < 1){
average = 0.0;
return average;
}


double sum = 0;
for (int i = 0; i < n; i++){
sum += array[i];
}

average = sum/n;

return average;
}
