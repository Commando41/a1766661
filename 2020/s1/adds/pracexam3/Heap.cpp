#include <iostream>
#include "Heap.h"
#include <vector>
using namespace std;

Heap::Heap(vector<int> vector, int size){
	
	for(int i = 0; i < size; i++){
		vecs.push_back(vector[i]);
	}
	amount = size;
	buildHeap();
}

void Heap::buildHeap(){
	
	for(int i = 0; i < amount-1; i++){
		for(int d = 0; d < amount; d++){
			if(vecs[i] > vecs[d]){
				siftDown(i);
			}
		}
	}

}

void Heap::siftDown(int i){
	
	/*if(vecs[i] < vecs[2*(i+1)]){
		
	}*/
}

Heap::~Heap(){
	
}