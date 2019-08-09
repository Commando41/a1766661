int min_integer(int integers[], int length){

if (length < 1){
return -1;
}

int min = integers[0];

for (int i = 0; i < length; i++){
      if (min > integers[i]){
          min = integers[i];
       }
}

return min;
}
