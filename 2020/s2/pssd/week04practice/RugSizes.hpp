// Example program
#include <string>
#include <vector>
using namespace std;

class RugSizes{
public:
	int rugCount(int area){

    int i, pos = 0;
    vector<int> r;
	for(i = 1; i <= area; i++){
		if(area % i == 0)
		    r.push_back(i);
	}
	int str, len = r.size();
	if(len == 2)
	    return 1;
	if(len % 2 == 0)
	    str = len/2;
	else
	    str = (len+1)/2;
	for(i = 0; i < str; i++){
	    if(r[i] % 2 != 0 || r[len-1-i] % 2 != 0 || r[i] == r[len-1-i])
	        pos++;
	}
	return pos;	
	}
};