extern int min_integer(int integers[], int langth);

extern int max_integer(int integers[], int length);

int sum_min_and_max(int integers[], int length){

int sum;

sum = min_integer(integers, length) + max_integer(integers, length);

return sum;
}
