int diagonal(int array[4][4]){

int sum = 0;

for (int i = 0; i < 4; i++){
sum += array[i][i];
}
return sum;
}
