using namespace std;
#include <vector>

class BootsExchange {
	public:
		int leastAmount(vector<int> left, vector<int> right){
			int len = right.size();
			int check[len] = 0;
			int d, i, miss = 0;
			
			for(d = 0; d < len; d++){
			for(i = 0; i < len; i++){
				if(left[d] == right[i]){
					if(check[i] == 0){
						check[i] = 1;
						d = i = 0;
						miss++;
					}
						
				}

			}
			}			
	}
};
