#include <vector>
#include <iostream>
using namespace std;

class MonstersValley2{
	public:
		int minimumPrice(vector<int> dread, vector<int> price){
			long long power = (long long)dread[0];
			int cost = price[0];
			price.erase(price.begin());
			dread.erase(dread.begin());
			for(int i = 0; i < dread.size(); i++){
				if(power < dread[i]){
					if(price[i] == 1){
						power += (long long)dread[i];
						cost += price[i];
						dread.erase(dread.begin() + i);
						price.erase(price.begin() + i);
								
					}else{
						int ps = 0;
						vector<int> dr, posi;
						for(int d = 0; d < i; d++){
							if(power + dread[d] > dread[i] && price[d] == 1){
								ps = 1;
								dr.push_back(dread[d]);
								posi.push_back(d);
							}
						}
						int high = 0, ct = 0;
						for(int d = 0; d < dr.size(); d++){
							if(high < dr[d]){
								high = dr[d];
								ct = posi[d];
							}
						}
						
						if(ps == 0){
							power += (long long)dread[i];
							cost += price[i];
							dread.erase(dread.begin() + i);
							price.erase(price.begin() + i);
						}else{
							power += (long long)high;
							cost += 1;
							dread.erase(dread.begin() + ct);
							price.erase(price.begin() + ct);
						}
					}
					i--;
				}
			}
			return cost;
		}	
};

			// for(int i = 0; i < dread.size(); i++)
			// 	cout << dread[i] << " ";
			// cout << endl;
			// for(int i = 0; i < dread.size(); i++)
			// 	cout << price[i] << " ";
			// cout << endl;