#include <iostream>
using namespace std;
#include <string>

int main()
{

	int r,c,i,j;
	r = 2, c = 2;
	int a[r][c];
	int b[2][2];
	b = {{1,0},{0,1}};

	for(i = 0; i < r; i++)
	{
	for(j = 0; j < c; j++)
	{
	a[i][j] = (i+1)*(j+1)+5;
	}
	}
	for(i = 0; i < r; i++)
	{
	for(j = 0; j < c; j++)
	{
	cout << a[i][j] << " ";
	}
	cout << endl;
	} 

	return 0;
}
