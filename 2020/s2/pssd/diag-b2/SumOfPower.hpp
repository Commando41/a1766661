using namespace std;
#include <vector>

class SumOfPower {
	public:
		int findSum(vector<int> array){

		int len = array.size();
		int sum = 0;
		for(int i = 0; i < len; i++){
			for(int d = i +1; d < len + 1; d++){
				for(int m = i; m < d; m++){
					sum += array[m];
				}
			}		
		}
		return sum;
	}
};
