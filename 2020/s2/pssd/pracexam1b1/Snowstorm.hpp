using namespace std;
#include <vector>

class Snowstorm{
	public:
		int blockedLength(vector<int> startPoints, vector<int> endPoints){
				
		
		int a, m, i, check = 0, len = startPoints.size();
		a = endPoints[0] - startpoints[0];
		while(check = 0){
		check = 1;
		for(i = 1; i < len; i++){
			
			if(startPoints[i] < startPoints[i-1]){
				check = 0;
				m = startPoints[i];
				startPoints[i] = startPoints[i-1];
				startPoints[i-1] = m;
				m = startPoints[i];
				startPoints[i] = startPoints[i-1];
				startPoints[i-1] = m;
			}
		}
			
		int start, end;
		for(i = 0; i<len; i++){
			if(st
		}	

		return a;
	}
};
