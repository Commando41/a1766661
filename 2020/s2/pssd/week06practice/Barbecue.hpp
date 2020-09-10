using namespace std;
#include <vector>
#include <iostream>
class Barbecue{
	public:
		int eliminate(int n, vector<int> voter, vector<int> excluded){
			if(voter.size() == 0)
				return 0;
			vector<int> vo(n, 0);
			vector<int> ex(n, 0);
			for(int i = 0; i < voter.size(); i++){
				int boom = voter[i];
				vo[boom] += 1;
				boom = excluded[i];
				ex[boom] += 1;
			}
			vector<int> even;
			int high = 0;
			for(int i = 0; i < n; i++){
				if(high = ex[i])
					even.push_back(i);
				else if(high < ex[i]){
					high = ex[i];
					even.clear();
					even.push_back(i);
				}
			}
			if(even.size() == 1){
				cout << " Even[0] " << even[0] << endl;
				return even[0];
			}
			for(int i = 0; i < even.size(); i++){
				cout << even[i] << " ";
			}
			cout << endl;
			high = 0;
			vector<int> boomer;
			cout << "Boomers" << endl;
			for(int i = 0; i < even.size(); i++){
				//int boom = even[i];
				if(high < vo[even[i]]){
					high = vo[even[i]];
					cout << "High = " << vo[even[i]] << endl;
					boomer.clear();
					cout << "\nNew start" << endl;
					boomer.push_back(even[i]);
					cout << "Added even[" << i << "]: " << even[i] << " with ex[" << even[i] << "]: " << ex[even[i]] << " and vo[" << even[i] << "]: " << vo[even[i]] << endl;
				}else if(high = vo[even[i]]){
					boomer.push_back(even[i]);
					cout << "Added even[" << i << "]: " << even[i] << " with ex[" << even[i] << "]: " << ex[even[i]] << " and vo[" << even[i] << "]: " << vo[even[i]] << endl;
				}else
					cout << "Skipped even[" << i << "]: " << even[i] << " with ex[" << even[i] << "]: " << ex[even[i]] << " and vo[" << even[i] << "]: " << vo[even[i]] << endl;
			}
			if(boomer.size() == 1){
				cout << "boomer[0] " << boomer[0] << endl;
				return boomer[0];
			}
			for(int i = 0; i < boomer.size(); i++){
				cout << boomer[i] << " ";
			}
			cout << endl;
			int low = n;
			for(int i = 0; i < boomer.size(); i++){
				if(low > boomer[i])
					low = boomer[i];
			}
			cout << "low " << low << endl;
			return low;
		}
};