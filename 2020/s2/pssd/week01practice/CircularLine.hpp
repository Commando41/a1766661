using namespace std;

class CircularLine{
	public:
		int longestTravel(int t[]){
			
			int m, high, left, right, len = sizeof(t)/sizeof(t[0]);
			int curhigh = 0;
			for(int i = 0; i < len; i++){
				for(int d = i; d < len; d++){
					left = right = 0;
					if(i != d){
						m = i;
						while(m != d){
							left += t[m];
							m--;
							if(m<0){
								m+=len;
							}
						}
						m = i;
						while(m !=d){
							right += t[m];
							m++;
							if(m=len){
								m-=len;
							}
						}
						if(left < right){
							high = left;
						}else{
							high = right;
						}
						if(high > curhigh){
							curhigh = high;
						}
					}
				}
			}

			return curhigh;
		}
};