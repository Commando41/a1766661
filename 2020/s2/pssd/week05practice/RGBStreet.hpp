#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

class RGBStreet{
	public:
		vector<int> make(string house){
			stringstream ss;
			ss << house;
			vector<int> len{0, 0, 0};
			string numbs = "HA";
			numbs.clear();
			for(int i = 0; i < 3; i++){
				ss >> numbs;
				len[i] = stoi(numbs);
				numbs.clear();
			}	
			return len;		
		}
		int recur(vector<string> houses, int choose, int index, int amount){
			if(houses.size() <= index)
				return amount;

			vector<int> len = make(houses[index]);
			
			if(choose == 0)
				return min(recur(houses, 1, index + 1, amount + len[1]), recur(houses, 2, index + 1, amount + len[2]));
			else if(choose == 1)
				return min(recur(houses, 0, index + 1, amount + len[0]), recur(houses, 2, index + 1, amount + len[2]));
			else
				return min(recur(houses, 0, index + 1, amount + len[0]), recur(houses, 1, index + 1, amount + len[1]));
		}
		int estimateCost(vector<string> houses){
			int index = 1;
			vector<int> len = make(houses[0]);

			return min(recur(houses, 0, index, len[0]), min(recur(houses, 1, index, len[1]), recur(houses, 2, index, len[2])));
		}	
};