using namespace std;
#include <vector>
#include <string>
//#include <iostream>
class Regattas{
	public:
		int betResult(vector<string> regattas, string ticket){
			int len = ticket.size();
			if(len > regattas.size())
				return -1;
			//cout << "ticket is less than or equal to regattas elements" << endl;
			for(int i = 0; i < len-1; i++){
				for(int d = i+1; d < len; d++){
					if(ticket[i] == ticket[d])
						return -1;
				}
			}
			//cout << "no letters are the same" << endl;
			int wins = 0, isThere = 0;
			//int lenb = regattas.size();
			//cout << "vars defined" << endl;
			for(int i = 0; i < ticket.size(); i++){
				isThere = 0;
				//cout << "ticket char No. " << i+1 << endl;
				for(int d = 0; d < regattas.size(); d++){
					//cout << "string No. " << d+1 << endl;
					//string temp = regattas[d];
					for(int m = 0; m < regattas[d].size(); m++){
						//cout << "char of string No. " << d+1  << " is " << m+1 << endl;
						if(ticket[i] == regattas[d][m]){
							if(m == 0){
								wins++;
							}
							regattas.erase(regattas.begin()+d);
							d--;
							isThere = 1;
							break;
						}
						if(ticket[i] != regattas[d][m] && isThere == 0)
							return -1;

					}
					if(isThere == 1)
						break;
				}
			}
			return wins;
		}
};
