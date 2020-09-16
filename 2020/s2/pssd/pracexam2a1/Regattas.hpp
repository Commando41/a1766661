using namespace std;
#include <vector>
#include <string>
class Regattas{
	public:
		int betResult(vector<string> regattas, string ticket){
			
			for(int i = 0; i < ticket.size()-1; i++){
				for(int d = i+1; d < ticket.size(); d++){
					if(ticket[i] == ticket[d])
						return -1;
				}
			}
			int wins = 0, isThere;
			for(int i = 0; i < ticket.size(); i++){
				isThere = 0;
				for(int d = 0; d < regattas.size(); d++){
					string temp = regattas[d];
					for(int m = 0; m < temp.size(); m++){
						if(ticket[i] == temp[m]){
							if(m == 0)
								wins++;
							m = 0;
							regattas.erase(regattas.begin()+d);
							d--;
							isThere = 1;
						}
					}
				}
				if(isThere == 0)
					return -1;
			}
			return wins;
		}
};
