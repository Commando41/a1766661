#ifndef SET_H
#define SET_H
using namespace std;

class Set{
	public:
		Set();
		void addElement(int n);
		void removeElement(int n);
		double returnAverage();
		unsigned int returnMaximum();
		unsigned int returnMinimum();
		unsigned int TheSet[];
		unsigned int ThePropSet[];
		~Set();
};
#endif