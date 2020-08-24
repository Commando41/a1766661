#include <bits/stdc++.h>
using namespace std;

class AzimuthMonitoring{
	public:
		int getAzimuth(vector<string> instructions) {
			//This will keep the directions
			int n = 0;
			for (int i = 0; i<instructions.size(); i++) {
				if (instructions[i] == "LEFT")
					n-=90;					
				else if (instructions[i] == "RIGHT")
					n+=90;
				else if (instructions[i] == "TURN AROUND")
					n+=180;
				else if(instructions[i] == "HALT")
					return n;
				else {
					//When the element has a space in it, place them into two seperate elements
					vector<string> result; 
					istringstream iss(instructions[i]); 
					//Checks if there is a string value
					for(string s; iss >> s; ) {
						result.push_back(s); 
					}
					//Changes the value of n depending on direction and value
					int l = stoi(result[1]);
					if (result[0] == "RIGHT"){
						n+= l;
					} else {
						n-= l;
					}
				}
				//If n goes outside the range
				if (n>=360)
					n-=360;
				else if (n<0)
					n+=360;
			}
			return n;
		}	
};