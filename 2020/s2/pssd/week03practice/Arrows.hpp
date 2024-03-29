using namespace std;
#include <string>
#include <algorithm>
#include <stdbool.h>

class Arrows{
	public:
		int longestArrow(string s){
			int i, left = 0, right = 0, lonr = 0, lonl = 0;
			char lef, rig;
			bool la = false; // This will make sure we passed a < to count all the lines
			for(i = 0; i < s.size(); i++){
				if(s[i] == '<'){
					if(left > lonl && la == true)
						lonl = left;
					la = true;
					lef = ' ';
					left = 1;
					right = 0;
					rig = ' ';
				}
				if(s[i] == '>'){
					if(left > lonl && la == true){
						lonl = left;
						la = false;
					}
					lef = ' ';
					rig = ' ';
					right++;
					if(lonr < right)
						lonr = right;
					left = right = 0;
				}
				if(s[i] == '-'){
					if(rig != '-'){
						rig = '-';
						right = 1;
					}else{
						right++;
					}
					if(lef != '-' && la == true){
						if(left == 1){
							lef = '-';
							left = 2;
						}else{
							la = false;
							if(lonl < left)
								lonl = left;
							left = 0;
						}
					}else if(la == true){
						left++;
					}						
				}
				if(s[i] == '='){
					if(rig != '='){
						rig = '=';
						right = 1;
					}else{
						right++;
					}
					if(lef != '=' && la == true){
						if(left == 1){
							lef = '=';
							left = 2;
						}else{
							la = false;
							if(lonl < left)
								lonl = left;
							left = 0;
						}
					}else if(la == true){
						left++;
					}
				}
			}
			if(lonl < left && la == true)
				lonl = left;
			if(lonr == lonl && lonl == 0)
				return -1;
			return max(lonl, lonr);
		}	
};