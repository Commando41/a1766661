#include <string>
#include <vector>
using namespace std;

class SquareOfDigits{
	public:
		int getMax(vector<string> data){
			int rlen = data.size();
			int clen = data[0].size();
			int r, c, squ;

			if(rlen < clen){
				squ = rlen - 1;
				clen = clen - rlen + 1;
				rlen = 1;
			}else if(rlen > clen){
				squ = clen - 1;
				rlen = rlen - clen + 1;
				clen = 1;
			}else{
				squ = clen - 1;
				clen = rlen = 1;
			}

			while(squ > 0){
				for(r = 0; r < rlen; r++){
					for(c = 0; c < clen; c++){
						if(data[squ+r][squ+c] == data[r][squ+c] && data[squ+r][squ+c] == data[r][c] && data[squ+r][squ+c] == data[squ+r][c])
									return (squ + 1)*(squ + 1);
					}
				}
				squ--;
				rlen++;
				clen++;
			}
			return 1;
		}	
};