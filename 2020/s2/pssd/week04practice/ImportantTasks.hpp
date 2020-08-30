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
			int d = 0, pos = 0;
			for(int i = 0; i < lencpl; i++){
				if(complexity[i] <= computers[d]){
					pos++;
					d++;
				}else{
					while(d < lencpt){
						d++;
						if(complexity[i] <= computers[d]){
							pos++;
							d++;
							break;
						}
					}
				}
				if(d >= lencpt)
					break;
			}
			return pos;
		}
};