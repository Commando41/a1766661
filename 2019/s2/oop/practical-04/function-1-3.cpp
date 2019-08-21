
void cpyia(int old_array[], int new_array[], int length){

int* ptr1 = new int[length];

ptr1 = &old_array[0];

for(int i = 0; i < length; i++){
new_array[i] = *(ptr1 + i);
}
return;
}
