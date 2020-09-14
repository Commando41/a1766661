using namespace std;
#include <vector>
#include <algorithm>
class ColorfulRabbits{
	public:
		int getMinimum(vector<int> replies){
			sort(replies.begin(), replies.end());
			int rab = 0, sum = 0, count = 0;
			for(int i = 0; i < replies.size(); i++){
				if(replies[i] == rab && count == 0){
					sum  += rab + 1;
					count = rab;
				}else if(replies[i] == rab && count > 0)
					count--;
				else{
					rab = replies[i];
					sum += replies[i] + 1;
					count = replies[i];
				}
			}
			return sum;
		}
};