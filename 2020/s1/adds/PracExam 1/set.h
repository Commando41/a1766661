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
		vector<unsigned int> TheSet;
		vector<unsigned int> ThePropSet;
		double average;
		unsigned int SMax;
		unsigned int Min;
		unsigned int FMax;
		unsigned int SetLength;
		unsigned int PropSetLength;

};
#endif