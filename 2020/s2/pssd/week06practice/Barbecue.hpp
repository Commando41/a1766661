using namespace std;
#include <vector>
#include <iostream>
class Barbecue{
	public:
		int eliminate(int n, vector<int> voter, vector<int> excluded){
			if(voter.size() == 0)
				return 0;
			vector<int> vo(n, 0);
			vector<int> ex(n, 0);
			vector<int> ppl;
			for(int i = 0; i < n; i++)
				ppl.push_back(i);
			for(int i = 0; i < voter.size(); i++){
				vo[voter[i]]++;
				ex[excluded[i]]++;
			}
			//vector<int> even;
			int high = 0;
			for(int i = 0; i < ex.size(); i++){
				if(high > ex[i]){
					ex.erase(ex.begin() + i);
					vo.erase(vo.begin() + i);
					ppl.erase(ppl.begin() + i);
					i--;
				}else if(high < ex[i]){
					high = ex[i];
					ex.erase(ex.begin(), ex.begin() + i - 1);
					vo.erase(vo.begin(), vo.begin() + i - 1);
					ppl.erase(ppl.begin(), ppl.begin() + i - 1);
					i = 0;	
				}
			}
			if(ppl.size() == 1){
				cout << "Chosen the most: " << ppl[0] << endl;
				return ppl[0];
			}
			for(int i = 0; i < ppl.size(); i++){
				cout << ppl[i] << " ";
			}
			cout << endl;
			high = 0;
			for(int i = 0; i < vo.size(); i++){
				//int boom = even[i];
				if(high < vo[i]){
					high = vo[i];
					ex.erase(ex.begin(), ex.begin() + i - 1);
					vo.erase(vo.begin(), vo.begin() + i - 1);
					ppl.erase(ppl.begin(), ppl.begin() + i - 1);
					i = 0;	
				}else if(high > vo[i]){
					ex.erase(ex.begin() + i);
					vo.erase(vo.begin() + i);
					ppl.erase(ppl.begin() + i);
					i--;
				}
			}
			if(ppl.size() == 1){
				cout << "Voted the most: " << ppl[0] << endl;
				return ppl[0];
			}
			for(int i = 0; i < ppl.size(); i++){
				cout << ppl[i] << " ";
			}
			cout << endl;

			cout << "Lowest index: " << ppl[0] << endl;
			return ppl[0];
		}
};