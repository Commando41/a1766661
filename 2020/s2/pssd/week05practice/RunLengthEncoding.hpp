#include <string>
#include <cctype>
using namespace std;

class RunLengthEncoding{
	public:
		string decode(string text){
			string display, number = " ";
			int len = text.size();
			int total = 0;
			for(int i = 0; i < len; i++){
				if(isdigit(text[i])){
					number += text[i];
				}else{
					int num;
					if(number == " ")
						num = 1;
					else
						num = stoi(number);
					total += num;
					if(total > 50)
						return "TOO LONG";
					number = " ";
					for(int m = 0; m < num; m++)
						display = display + text[i];
				}
			}
			return display;	
		}
};