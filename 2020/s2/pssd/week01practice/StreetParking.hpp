using namespace std;
#include <string>


class StreetParking {
	public:
		int freeParks(string street){
			int len = street.size();
			int att = 0;
			int fair;
			for(int i = 0; i < len; i++){
				fair = 1;
				if(street[i] != '-'){
					fair = 0;
				}else{
				if(i != 0){
					if(street[i-1] != '-' && street[i-1] != 'D' && street[i-1] != 'B'){
						fair = 0;
					}
				}
				if(i != len-2 && i != len-1){
					if(street[i+1] != '-' && street[i+1] != 'D' || street[i+2] == 'B'){
						fair = 0;
					}			
				}else if(i == len-2){
						if(street[i+1] != '-' && street[i+1] != 'D'){
						fair = 0;
						}
				}
				}
				if(fair == 1){
					att++;
				}
			}
			return att;
		}
};