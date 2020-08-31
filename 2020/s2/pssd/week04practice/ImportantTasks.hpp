using namespace std;
#include <vector>
#include <algorithm>
#include <iostream>
class ImportantTasks{
	public:
		int maximalCost(vector<int> complexity, vector<int> computers){
			sort(complexity.begin() ,complexity.end());
			sort(computers.begin(), computers.end());
			int lencpl = complexity.size();
			int lencpt = computers.size();
			for(int i = 0; i < lencpl; i++)
				cout << complexity[i] << " ";
			cout << endl;
			for(int i = 0; i < lencpt; i++)
				cout << computers[i] << " ";
			cout << endl;
			int d = 0, pos = 0;
			for(int i = 0; i < lencpl; i++){
				if(complexity[i] <= computers[d]){
					pos++;
				}else{
					while(d < lencpt){
						d++;
						if(complexity[i] <= computers[d]){
							pos++;
							break;
						}
					}
				}
				d++;
				if(d >= lencpt)
					break;
			}
			return pos;
		}
};