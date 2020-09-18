using namespace std;
#include <vector>
#include <algorithm>
#include <iostream>
class ImportantTasks{
	public:
		int maximalCost(vector<int> complexity, vector<int> computers){

			int lencpl = complexity.size();
			int lencpt = computers.size();
			if(lencpl < lencpt){
				complexity.insert(complexity.begin(), lencpt-lencpl, -1);
				lencpl = lencpt;
			}else if(lencpl > lencpt){
				computers.insert(computers.begin(), lencpl-lencpt, -1);
				lencpt = lencpl;
			}
			sort(complexity.begin() ,complexity.end());
			sort(computers.begin(), computers.end());

			sort(complexity.begin() ,complexity.end());
			sort(computers.begin(), computers.end());


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
				if(complexity[i] <= computers[d] && complexity[i] != -1 && computers[d] != -1){
					pos = pos + 1;
				}else {
					while(d < lencpt){

						if(complexity[i] == -1)
							break;
						d++;

						d++;

						d = d + 1;

						if(complexity[i] <= computers[d] && computers[d] != -1){
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
