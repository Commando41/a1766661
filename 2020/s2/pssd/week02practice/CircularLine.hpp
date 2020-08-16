using namespace std;
#include <vector>

class CircularLine{
	public:
		int longestTravel(vector<int> t){
		int len = t.size();
		int i, length = 0;
		for (i = 0; i < len; i++){
			length += t[i];
		}
		int left, high, highestmin = 0;
		for (i = 0; i < len; i++) {
			for (int j = 1; j < len; j++) {
				left = 0;
				for (int k = i; k < j; k++)
					left += t[k];
				if(left < length - left){
					high = left;
				}
				else{
					high = length - left;
				}
				highestmin = max(highestmin, high);
			}
		}
	return highestmin;
		}
};
