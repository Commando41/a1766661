#include <iostream>
using namespace std;
void copy_2d_strings(string first[][2], string second[][2], int length){

for (int i = 0; i < length; i++){
for (int j = 0; j < length-1; j++){
second[i][j] = first[i][j];
cout << second[i][j];
if (j == 0){
cout << " ";
}
}
cout << endl;
}


return ;
}
