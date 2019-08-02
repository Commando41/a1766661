int maximum(int array[], int n){

if(n < 1){
return 0;
}

int largestNum = array[0];

for (int i = 0; i < n; i++){
if (largestNum < array[i]){
largestNum = array[i];
}
}

return largestNum;
}
