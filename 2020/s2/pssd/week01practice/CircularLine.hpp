using namespace std;
#include <vector>

class CircularLine{
	public:
		int longestTravel(vector<int> t){
			
			int m, high, left, right, len = t.size();
			int curhigh = 0;
			for(int i = 0; i < len; i++){
				for(int d = i; d < len; d++){
					left = right = 0;
					for(m = i; m != d; m++){
						if(m=len){
							m-=len;
						}
						left += t[m];
															
					}
					for(m = i-1; m != d; m--){
						if(m=-1){
							m+=len;
						}
						right += t[m];
						
					}
					if(left < right){
						high = left;
					}else{
						high = right;
					}
					if(high > curhigh){
						curhigh = high;
					}
				}
			}

			return curhigh;
		}
};
