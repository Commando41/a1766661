#include <iostream>

void print_scaled_matrix(int array[3][3], int scale){

for (int i = 0; i < 3; i++){
for (int j = 0; j < 3; j++){
array[i][j] = array[i][j] * scale;
}
}

for (int k = 0; k < 3; k++){
std::cout << array[k][0] << " " << array[k][1] << " " << array[k][2] << std::endl;
}


return;
}
