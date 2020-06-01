#include <iostream>
#include "BinarySearchTree.h"
#include <vector>

using namespace std;

BinarySearchTree::BinarySearchTree(int n){
	
	data = n;
	left = right = parent = NULL;
}

void BinarySearchTree::insert(int n){
	
	BinarySearchTree *temp = new BinarySearchTree(n);
	if(n<data){
		if(left == NULL){
			left = temp;
			temp->parent = parent;
		}else{
			insert(n);
		}
	}else if(n>data){
		if(right == NULL){
			right = temp;
			temp->parent = parent;
		}else{
			insert(n);
		}
	}
}

void BinarySearchTree::print_inorder(){
	
	if(left != NULL){
		left->print_inorder();
		if(right != NULL){
			right->print_inorder();
		}
		cout << data << endl;	
	
	}else{
		cout << data << endl;
	}
}

void BinarySearchTree::print_preorder(){
	
}

void BinarySearchTree::print_postorder(){
	
}

BinarySearchTree::~BinarySearchTree(){
	
}