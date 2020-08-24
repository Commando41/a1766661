#include <bits/stdc++.h>
using namespace std;

class AlternateColors{
	public:
		string getColor(long r, long g, long b, long k){

			//Declare a vector storing the amount of balls for each color
			vector<long> clr = {};
			clr.push_back(r);
			clr.push_back(g);
			clr.push_back(b);

			//Declare a string vector  
			vector<string>  colours = {"RED", "GREEN", "BLUE"};

			//variable n will be the index in this loop while current will be the current selected colour to be decremented
			long current = 0, n = 0, decrementor = 10000000000;
			while (n <= k){
				//If two colours are no more, then return the name of the colour still available
				if (clr[0] == 0 && clr[1] == 0)
					return "BLUE";
				if (clr[1] == 0 && clr[2] == 0)
					return "RED";
				if (clr[0] == 0 && clr[2] == 0)
					return "GREEN";

				if(clr[0] > decrementor && clr[1] > decrementor && clr[2] > decrementor && n + decrementor*3 < k){
					current += decrementor*3;
					n += decrementor*3;
					clr[0] -= decrementor;
					clr[1] -= decrementor;
					clr[2] -= decrementor;
				}else if(decrementor > 10)
					decrementor /= 10;
				else{

				//At a given current index, decrement the amount of a specific colour ball unless thtere is none left
					if (clr[current%3]>0) {
						clr[current%3] -= 1;
						current++;
						n++;
						//If the index n reaches the k-th position, return the colour of the ball
						if (n==k)
							return colours[(current-1)%3];
					}else 
						current++;
				}
			}
		return "RED";
		}	
};