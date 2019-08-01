
int count(int array[], int n){
int NoOfEvens = 0;

for (int i = 0; i < n; i++){
if (array[i] % 2 == 0){
NoOfEvens += 1;
}
}
return NoOfEvens;
}
