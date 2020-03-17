#ifndef SET_H
#define SET_H
#include <vector>
using namespace std;

class Set{
	public:
		Set();
		void addElement(int n);
		void removeElement(int n);
		double returnAverage();
	        int returnMaximum();
		int returnMinimum();
		~Set();
	private:
		//Keep all atributes private since they should only be used by the object 
		vector<int> TheSet;
		double average;
		int Max;
		int Min;
		int SetLength;

};
#endif
