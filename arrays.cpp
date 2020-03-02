#include <iostream>
using namespace std;
int main()
{
	int n = 5;
 	int a[n];
	int i;
	for(i = 0; i < n; i++){
	//cout << "Please enter a value" << endl;
	//cin>>a[i];
	a[i] = (i+1)*5+2;
	}
	for(i = 0; i < n; i++)
	{
	cout << i+1 << " ";
	}
	cout << endl;
	for(i = 0; i < n; i++)
	{
	cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
