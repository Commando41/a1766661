#include <string>
#include <cctype>
using namespace std;

class RunLengthEncoding{
	public:
		string decode(string text){
			string display, number;
			int len = text.size();
			int total = 0;
			for(int i = 0; i < len; i++){
				if(isdigit(text[i])){
					if(number.empty())
						number = text[i];
					else
						number += text[i];
					if(number.size() > 2)
						return "TOO LONG";
				}else{
					int num;
					if(number.empty())
						num = 1;
					else
						num = stoi(number);
					total += num;
					if(total > 50)
						return "TOO LONG";
					number.clear();
					for(int m = 0; m < num; m++)
						display = display + text[i];
				}
			}
			return display;	
		}
};