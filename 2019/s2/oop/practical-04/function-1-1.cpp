#include <iostream>
using namespace std;
void copy_2d_strings(string first[][2], string second[][2], int length){

for (int i = 0; i < length; i++){
for (int j = 0; j < length-1; j++){
second[i][j] = first[i][j];
if (j == length-1){
cout << second[i][j];
}
else
{
cout << second[i][j] << " ";
}
}
cout << endl;
}


return ;
}
