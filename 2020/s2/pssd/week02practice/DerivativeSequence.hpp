using namespace std;
#include <vector>

class DerivativeSequence{
	public:
		vector<int> derSeq(vector<int> a, int n){
			//vector< vector<int> > deri;
			//deri.push_back(a);

			int i, check, len = a.size();
			while(n > 0){
				check = 0;
				for(i = 0; i < len-1; i++){
					a[i] = a[i+1] - a[i];
					if(a[i] == 0)
						check++;
				}
				a.pop_back();
				n--;
				len--;
				if(check == len)
					return a;
			} 
			return a;
		}
};