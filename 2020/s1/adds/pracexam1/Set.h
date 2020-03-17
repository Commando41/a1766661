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
		vector<int> TheSet;
		vector<int> ThePropSet;
		double average;
		int SMax;
		int Min;
		int FMax;
		int SetLength;
		int PropSetLength;

};
#endif