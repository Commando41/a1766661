using namespace std;
#include <string>

class SecondChild(){
	string chooseName(string Father, string Mather, string Child1, string Gender){
		string dad[2];
		string mum[2];
		string elder[2];
		stringstream dd, mm, ee;
		dd << Father;
		mm << Mather;
		ee << Child1;
		for(int i = 0; i < 2; i++){
			dd >> dad[i];
			mm >> mum[i];
			ee >> elder[i];
		}
		if(Child1[0] == 'A' || Child1[0] == 'E' || Child1[0] == 'I' || Child1[0] == 'O' || Child1[0] == 'U' || Child1[0] == 'Y'){
			if(Gender == 'Boy'){
				return dad[1] + " " + dad[0];
			}else{
				return mum[0] + " " + elder[1];
		}else{
			if(Gender == 'Boy'){
				return dad[0] + " " + elder[1];
			}else{
				return mum[1] + " " + mum[0];
			}
		}
	}
};
