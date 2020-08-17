using namespace std;
#include <vector>
#include <string>

class MooingCows{
	public:
		int dissatisfaction(vector<string> farmland){
			int lenr = farmland.size();
			int lenc = farmland[0].size();
			int cur, dist = -1;

			for(int x = 0; x < lenr; x++){
				for(int y = 0; y < lenc; y++){
					if(farmland[x][y] == 'C'){
						cur = 0;
						for(int i = 0; i < lenr; i++){
							for(int j = 0; j < lenc; j++){
								if(farmland[i][j] == 'C'){
									cur += (x-i)*(x-i) + (y-j)*(y-j);
								}
							}
						}
						if(dist == -1 || cur < dist){
							dist = cur;
						}
					}
				}
			}
		return dist;
		}	
};