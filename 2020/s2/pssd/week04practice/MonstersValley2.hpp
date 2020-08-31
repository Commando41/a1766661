#include <vector>
using namespace std;

class MonstersValley2{
	public:
		int minimumPrice(vector<int> dread, vector<int> price){
			int power = dread[0], cost = price[0];
			price.erase(price.begin());
			dread.erase(dread.begin());
			for(int i = 0; i < dread.size(); i++){
				if(power < dread[i]){
					if(price[i] == 1){
						power += dread[i];
						cost += price[i];
						dread.erase(dread.begin() + i);
						price.erase(price.begin() + i);
						i--;		
					}else{
						for(int d = 0; d < i; d++){
							if(power + dread[d] >= dread[i] && price[d] == 1){
								power += dread[d];
								cost += price[d];
								dread.erase(dread.begin() + d);
								price.erase(price.begin() + d);
								i--;
								break;
							}
						}
						power += dread[i];
						cost += price[i];
						dread.erase(dread.begin() + i);
						price.erase(price.begin() + i);
						i--;
					}
				}
			}
			return cost;
		}	
};