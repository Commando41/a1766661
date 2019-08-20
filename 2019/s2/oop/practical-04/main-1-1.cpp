#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

extern void copy_2d_strings(string frist[][2], string second[][2], int n);

int main(){

string first[3][2] = {{"O", "P"},
                      {"J", "H"},
                      {"L", "K"}};

string second[3][2];

copy_2d_strings(first, second, 3);

return 0;
}
