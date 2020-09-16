#include <vector>
using namespace std;
#include <algorithm>

class OnlineOrder{
	public:
		int numPackets(vector<int> weights, int maxWeight){
			int sum = 0, ret = 0;
			//sort(weights.begin(), weights.end());
			for(int i = 0; i < weights.size(); i++){
				sum += weights[i];
				if(sum > maxWeight){
					ret++;
					sum = weights[i];
				}
				if(i == weights.size()-1)
					ret++;
			}
			return ret;
		}
};
