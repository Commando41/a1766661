using namespace std;
#include <vector>
#include <string>

class MooingCows{
	public:
		int dissatisfaction(vector<string> farmland){
			int lenr = farmland.size();
			int lenc = farmland[0].size();
			int dist = -1;
			int cur;

			for(int x = 0; x < lenr; x++){
				for(int y = 0; y < lenc; y++){
					if(farmland[x][y] == 'C'){
						cur = 0;
						for(int i = 0; i < lenr; i++){
							for(int j = 0; j < lenc; j++){
								if(farmland[x][y] == 'C'){
									cur += ((i+1)-(x+1))*((i+1)-(x+1)) + ((j+1)-(y+1))*((j+1)-(y+1));
								}
							}
						}
						if(dist < 0 || cur < dist){
							dist = cur;
						}
					}
				}
			}

			
			return dist;

		}	
};