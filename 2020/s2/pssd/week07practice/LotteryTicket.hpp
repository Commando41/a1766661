#include <string>
using namespace std;
class LotteryTicket {
	public:
		string buy(int price, int b1, int b2, int b3, int b4){

			if(b1 == price || b2 == price || b3 == price || b4 == price
				|| b1 + b2 == price
				|| b1 + b3 == price
				|| b1 + b4 == price
				|| b2 + b3 == price
				|| b2 + b4 == price
				|| b3 + b4 == price
				|| b1 + b2 + b3 == price
				|| b1 + b2 + b4 == price
				|| b1 + b3 + b4 == price
				|| b2 + b3 + b4 == price
				|| b1 + b2 + b3 + b4 == price)
				return "POSSIBLE";		
			return "IMPOSSIBLE";
		}
};