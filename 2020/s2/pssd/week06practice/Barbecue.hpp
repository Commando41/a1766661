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
			int high = ex[0];
			for(int i = 1; i < ex.size(); i++){
				if(high < ex[i])
					high = ex[i];
			}
			for(int i = 0; i < ex.size(); i++){
				if(ex[i] != high){
					ex.erase(ex.begin() + i);
					vo.erase(vo.begin() + i);
					ppl.erase(ppl.begin() + i);
					i--;
				}
			}
			if(ppl.size() == 1
				return ppl[0];
			high = vo[0];
			for(int i = 1; i < vo.size(); i++){
				if(high < vo[i])
					high = vo[i];
			}
			for(int i = 0; i < vo.size(); i++){
				if(vo[i] < high){
					ex.erase(ex.begin() + i);
					vo.erase(vo.begin() + i);
					ppl.erase(ppl.begin() + i);
					i--;
				}
			}
			return ppl[0];
		}
};