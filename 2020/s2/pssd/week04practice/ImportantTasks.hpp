using namespace std;
#include <vector>
#include <algorithm>
class ImportantTasks{
	public:
		int maximalCost(vector<int> complexity, vector<int> computers){
			sort(complexity.begin() ,complexity.end());
			sort(computers.begin(), computers.end());
			int lencpl = complexity.size();
			int lencpt = computers.size();
			int d = lencpl-1, pos = 0;
			for(int i = lencpt-1; i >= 0; i--){
				if(complexity[d] <= computers[i]){
					pos++;
					d--;
				}else{
					while(d >= 0){
						d--;
						if(complexity[d] <= computers[i]){
							pos++;
							d--;
							break;
						}
					}
				}
				if(d < 0)
					break;
			}
			return pos;
		}
};