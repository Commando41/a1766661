int max_integer(int integers[], int length){

if (length < 1){
return -1;
}

int max = integers[0];

for (int i = 0; i < length; i++){
   if (max < integers[i]){
        max = integers[i];
     }
}

return max;
}
