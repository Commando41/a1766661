int count_even(int n){

if(n < 1){
return 0;
}

int counter = 0;

for (int i = 1; i < n+1; i++){
if (i % 2 == 0){
counter += 1;
}
}

return counter;
}
