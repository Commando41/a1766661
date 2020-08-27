#include <string>
using namespace std;

class MagicSpell{
public:
	string fixTheSpell(string spell){
			string s = spell;
			int len = spell.size();
			int d = len-1;
			for(int i = 0; i < len; i++){
				if(s[i] == 'A' || s[i] == 'Z'){
					while(spell[d] != 'A' && spell[d] != 'Z')
						d--;
					s[i] = spell[d];
					d--;
				}
			}
			return s;
	}
};