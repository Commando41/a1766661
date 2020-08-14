#include <string>
#include <vector>
using namespace std;

class SquareOfDigits{
	public:
		int getMax(vector<string> data){
			int rlen = data.size();
			int clen = data[0].size();
			int r, c, maxr, maxc;

			/*if(rlen < clen){
				maxc = clen/2;
				if(rlen < maxc){
					maxr = rlen;
				}else{
					maxr = rlen/2;
				}
			}else if(rlen > clen){
				maxr= rlen/2;
				if(maxr > clen){
					maxc = clen;
				}else{
					maxc = clen/2;
				}
			}*/

			int squareing = clen;
			maxr = maxc = 1;

			while(squareing > 1){
				
			for(r = 0; r < maxr; r++){
				for(c = 0; c < maxc; c++){
					if(data[squareing+r-1][squareing+c-1] == data[r][squareing+c-1]){
						if(data[squareing+r-1][squareing+c-1] == data[r][c]){
							if(data[squareing+r-1][squareing+c-1] == data[squareing+r-1][c])
								return squareing*squareing;
						}
					}
				}
			}
			squareing--;
			maxr++;
			maxc++;
			}
			return 1;
		}	
};