#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
using namespace std;
#include <vector>

class BinarySearchTree {
	public:
		BinarySearchTree(int n);
		void insert(int n);
		void print_inorder();
		void print_preorder();
		void print_postorder();
		~BinarySearchTree();

		int data;
		BinarySearchTree *left, *right, *parent;
};

#endif