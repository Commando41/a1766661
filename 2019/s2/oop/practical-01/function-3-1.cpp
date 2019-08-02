#include <cmath>
bool fanarray(int array[], int n){

if (n < 1){
return false;
}

for (int i = 1; i < round(n/2); i++){
if (array[i] == array[n-i+1]){
return false;
}
}

return true;
}
