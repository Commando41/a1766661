#include <string>
using namespace std;

class StrangeComputer{
	public:
		int setMemory(string mem){
			int i, m, d = 0, len = mem.size();
			string s;
			for(i = 0; i < len; i++)
				s = s + '0';
			for(i = 0; i < len; i++){
				if(s[i] != mem[i]){
					d++;
					for(m = i; m < len; m++)
						s[m] = mem[i];
				}	
			}
			return d;
		}	
};