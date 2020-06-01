#ifndef HEAP_H
#define HEAP_H
using namespace std;
#include <vector>

class Heap {
	public:
		Heap(vector<int> vector, int size);
		void buildHeap();
		void siftDown(int i);
		int deleteMin();
		~Heap();
		
		vector<int> vecs;
		int amount;
};

#endif