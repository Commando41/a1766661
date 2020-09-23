#include <string>
using namespace std;
class BlackAndRed{
	public:
		int cut(string deck){
			int len = deck.size(),cool, reds, blacks, index;
			char first;
			reds = blacks = cool = index = 0;
			while(cool == 0){
				cool = 1;
				for(int i = 0; i < len; i++){
					if(deck[i] == 'B')
						blacks++;
					else
						reds++;
					if(reds > blacks){
						blacks = reds = cool = 0;
						index++;
						first = deck[0];
						deck.erase(deck.begin() + 0);
						deck = deck + first;
						break;
					}
				}
			}
			return index;
		}
};