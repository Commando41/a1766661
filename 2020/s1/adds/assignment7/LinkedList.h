#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;

class LinkedList {
	public:
		Node * head;

		LinkedList();
		LinkedList(int array[], int size);
		void addFront(int newItem);
		void addEnd(int newItem);
		void addAtPosition(int position, int newItem);
		void deleteFront();
		void deleteEnd();
		void deletePosition(int position);
		int search(int item);
		int getItem(int position);
		void printItems();
		~LinkedList();	
};

#endif