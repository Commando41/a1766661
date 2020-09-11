#include <string>
#include <algorithm>
using namespace std;

class BlackAndWhiteSolitaire{
	public:
		int minimumTurns(string cardFront){
			string tru, opp;
			int diff = 0, lols = 0;
			if(cardFront[0] == 'B'){
				tru = 'B';
				opp = 'W';
			}else{
				tru = 'W';
				opp = 'B';
			}
			for(int i = 1; i < cardFront.size(); i++){
				if(tru[i-1] == 'B'){
					tru = tru + 'W';
					opp = opp + 'B';
				}else{
					tru = tru + 'B';
					opp = opp + 'W';
				}
			}
			for(int i = 0; i < cardFront.size(); i++){
				if(tru[i] != cardFront[i])
					diff++;
				if(opp[i] != cardFront[i])
					lols++;
			}
			return min(diff,lols);
		}	
};