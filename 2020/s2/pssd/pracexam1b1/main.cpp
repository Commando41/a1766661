#include <bits/stdc++.h>
#include "Snowstorm.hpp"
using namespace std;
int main(){

	Snowstorm css;
	vector<int> a, b;
	int n;
	cin >> n;
	while(n >= 0){
		a.push_back(n);
		cin >> n;
	}

	while(n >= 0){
		b.push_back(n);
		cin >> n;
	}
	cout << css.blockedLength(a,b) << endl;

	return 0;
}
