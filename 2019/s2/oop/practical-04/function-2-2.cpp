int maximum_sum(int *nums, int length){

int sum, largeSum = 0;
int *ptrs, *ptrS;
ptrs = &sum;
ptrS = &largeSum;
for (int i = 1; i < length+1; i++){
for (int l = 0; l < i; l++){
*ptrs = 0;
for (int k = l; k<i; k++){
*ptrs = *ptrs + *(nums+k);
if (*ptrs > *ptrS) {
*ptrS = *ptrs; 
}
}
}
}

return *ptrS;
}
