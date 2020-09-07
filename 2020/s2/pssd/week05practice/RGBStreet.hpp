#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

class RGBStreet{
	public:
/*		vector<int> make(string house){
			stringstream ss;
			ss << house;
			vector<int> len;
			string numbs = "HA";
			numbs.clear();
			for(int i = 0; i < 3; i++){
				ss >> numbs;
				len[i] = stoi(numbs);
				numbs.clear();
			}	
			return len;		
		}*/
		int recur(vector<int> len, int choose, int index, int amount){
			if(len.size()/3 <= index)
				return amount;
			
			if(choose == 0)
				return min(recur(len, 1, index + 1, amount + len[index*3 + 1]), recur(len, 2, index + 1, amount + len[index*3 + 2]));
			else if(choose == 1)
				return min(recur(len, 0, index + 1, amount + len[index*3 + 0]), recur(len, 2, index + 1, amount + len[index*3 + 2]));
			else
				return min(recur(len, 0, index + 1, amount + len[index*3 + 0]), recur(len, 1, index + 1, amount + len[index*3 + 1]));
		}
		int estimateCost(vector<string> houses){
			int index = 1;
			vector<int> len;
			for(int i = 0; i < houses.size(); i++){
				stringstream ss;
				string numbs1, numbs2, numbs3;
				ss << houses[i];
				ss >> numbs1 >> numbs2 >> numbs3;
				int nun1 = stoi(numbs1), nun2 = stoi(numbs2), nun3 = stoi(numbs3);
				len.push_back(nun1);
				len.push_back(nun2);
				len.push_back(nun3);
			}

			return min(recur(len, 0, index, len[0]), min(recur(len, 1, index, len[1]), recur(len, 2, index, len[2])));
		}	
};