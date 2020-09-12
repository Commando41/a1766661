using namespace std;
#include <string>
#include <vector>

class NiceOrUgly{
	public:
		string describe(string s){
			int vow = 0, cont = 0;
			cout << s << endl;
			vector<int> lol;
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
					cont = 0;
					vow++;
				}else if(s[i] == '?'){
					lol.push_back(i);
				}else{
					vow = 0;
					cont++;
				}
				if(vow == 3 || cont == 5)
					return "UGLY";
			}
			cont = vow = 0;
			// for(int i = 0; i < lol.size(); i++){

			// 	if(mark == 3)
			// 		return "42";
			// }
			int mark = 0, trollv = 0, trollc = 0, cr = 0;
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
					cont = mark = trollv = 0;
					vow++;
				}else if(s[i] == '?'){
					vow++;
					cont++;
					mark++;
				}else{
					vow = mark = trollc = 0;;
					cont++;
				}
				if(mark == 3)
					return "42";
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