using namespace std;
#include <vector>
#include <algorithm>
#include <iostream>
class ImportantTasks{
	public:
		int maximalCost(vector<int> complexity, vector<int> computers){
			int lencpl = complexity.size();
			int lencpt = computers.size();
			// for(int i = 0; i < lencpl; i++)
			// 	cout << complexity[i] << " ";
			// cout << endl;
			// for(int i = 0; i < lencpt; i++)
			// 	cout << computers[i] << " ";
			// cout << endl;
			sort(complexity.begin(), complexity.end());
			sort(computers.begin(), computers.end());
			int d = 0;
			int pos = 0;
			for(int i = 0; i < lencpl; i++){
				if(complexity[i] <= computers[d]){
					pos = pos + 1;
				}else{
					while(d < lencpt){
						d = d + 1;
						if(complexity[i] <= computers[d]){
							pos = pos + 1;
							break;
						}
					}
				}
				d = i-1;
				if(d >= lencpt)
					break;
			}
			return pos;
		}
};