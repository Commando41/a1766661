int count(int array[], int n, int num){

if (n < 1){
return 0;
}

int counter = 0;

for (int i = 0; i < n; i++){
if (array[i] == num){
counter += 1;
}
}

return counter;
}
