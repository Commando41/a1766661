#include <iostream>
#include <sstream>
#include <vector>
#include "Heap.h"
#include "BinarySearchTree.h"
using namespace std;

int main(int argc, char** args) {
string input, command;
getline(cin, input);
stringstream str_strm;
str_strm << input;
string temp_str;

str_strm >> command;


int temp_int;
vector<int> recs;
while(!str_strm.eof()) {
	str_strm >> temp_str;
	if(stringstream(temp_str) >> temp_int) {
		recs.push_back(temp_int);
	}
	temp_str = "";
}

if(command == "HS"){
	Heap * root = new Heap(recs, recs.size());
}else{
	BinarySearchTree * root = new BinarySearchTree(recs[0]);
	for(int i = 1; i < recs.size(); i++){
		root->insert(recs[i]);
	}
	if(command == "BIN"){
		root->print_inorder();
	}
}
}