#include <string>
#include <vector>
using namespace std;
class NiceOrUgly{
	public:
		string describe(string s){
			int vow = 0, cont = 0;
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
					cont = 0;
					vow++;
				}else if(s[i] != '?'){
					vow = 0;
					cont++;
				}
				if(vow == 3 || cont == 5)
					return "UGLY";
			}
			cont = vow = 0;
			int mark = 0, trollv = 0, trollc = 0, cr = 0;
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
					cont = mark = trollv = 0;
					vow++;
				}else if(s[i] == '?'){
					vow++;
					cont++;
					mark++;
					trollc = trollv = 0;
					if(vow == 3){
						if(s[i-1] == '?' && s[i-2] == '?')
							cr = 1;
						if(s[i-1] == '?')
							vow = 1;
						else if(s[i-2] == '?')
							vow--;
					}else if(cont == 5){
						if(s[i-1] == '?')
							cont = 1;
						else if(s[i-2] == '?')
							cont = 2;
						else if(s[i-3] == '?')
							cont = 3;
						else if(s[i-4] == '?')
							cont--;
					}
				}else{
					vow = mark = trollc = 0;;
					cont++;
				}
				if(vow == 3)
					trollv = 1;
				else if(cont == 5)
					trollc = 1;
				if(trollc == 1 || trollv == 1)
					cr = 1;
				if(vow == 3 && trollc == 1 || cont == 5 && trollv == 1)
					return "UGLY";
			}
			if(cr == 1)
				return "42";

			return "NICE";
		}
};