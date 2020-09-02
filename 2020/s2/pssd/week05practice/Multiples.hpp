#include <cstdlib>
using namespace std;

class Multiples{
	public:
		int number(int min, int max, int factor){
			int index, divs = 0;
			index = min + abs(min % factor);
			while(index <= max){
				if(index + factor*100000 <= max){
					index += factor*100000;
					divs += 100000;
				}else if(index + factor*10000 <= max){
					index += factor*10000;
					divs += 10000;
				}else if(index + factor*1000 <= max){
					index += factor*1000;
					divs += 1000;
				}else if(index + factor*100 <= max){
					index += factor*100;
					divs += 100;
				}else if(index + factor*10 <= max){
					index += factor*10;
					divs += 10;
				}else{
					index += factor;
					divs++;
				}
			}
			return divs;
		}
};