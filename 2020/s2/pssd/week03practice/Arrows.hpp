#include <bits/stdc++.h>
using namespace std;

class Arrows{
	public:
		int longestArrow(string s){
			int i, left = 0, right = 0;
			char lef, rig;
			bool la = false;
			int lonr = 0;
			int lonl = 0;
			for(i = 0; i < s.size(); i++){
				if(s[i] == '<'){
					la = true;

					lef = ' ';
					if(left > lonl)
						lonl = left;

					left = 1;
					right = 0;
				}
				if(s[i] == '>'){
					rig = ' ';
					right++;
					if(lonr < right)
						lonr = right;

					left = 0;
					right = 1;
				}
				if(s[i] == '-'){
					if(rig != '-'){
						rig = '-';
						right = 1;
					}else{
						right++;
					}
					if(lef != '-' && la == true){
						if(left = 1){
							lef = '-';
							left = 2;
						}else{
							la = false;
						}
					}else{
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
						if(left = 1){
							lef = '=';
							left++;
						}else{
							la = false;
						}
					}else{
						left++;
					}
				}


			}

			if(lonr == lonl && lonl == 0)
				return -1;

			return max(lonl, lonr);
		}	
};