#include <iostream>
#include "Node.h"

Node::Node(){

}

void Node::Setdata(int n){
	data = n;
}

int Node::Getdata(){
	return data;
}

void Node::Setnext(Node *n){
	next = n;
}

Node *Node::Getnext(){
	return next;
}

Node::~Node(){
	
}