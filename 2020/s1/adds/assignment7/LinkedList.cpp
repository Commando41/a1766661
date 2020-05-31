#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <string>
#include <limits>
using namespace std;

LinkedList::LinkedList(){
	head = NULL;
}

LinkedList::LinkedList(int array[], int size){

	head = new Node();
	head -> Setdata(array[0]);
	Node *temp = head;
	for(int i = 1; i < size; i++){
		Node *tempA = new Node();
		tempA->Setdata(array[i]);

		temp->Setnext(tempA);
		temp = temp->Getnext();
		//cout << "New node made" << endl;
	}
	temp->Setnext(NULL);
}

void LinkedList::addFront(int newItem){
	Node *temp = new Node();
	temp->Setdata(newItem);
	if(head != NULL){
		temp->Setnext(head);	
	}
	head = temp;
}

void LinkedList::addEnd(int newItem){
	Node *temp = head;
	while(temp != NULL){
		temp = temp->Getnext();
	}
	temp = new Node();
	temp->Setdata(newItem);
	temp->Setnext(NULL);
}

void LinkedList::addAtPosition(int position, int newItem){
	Node *temp = head;
	if(position < 2){
		addFront(newItem);
	return;
	}

	Node *newNode = new Node();
	newNode->Setdata(newItem);

	for(int i = 1; i < position-1; i++){
		temp = temp->Getnext();
		if((temp->Getnext()) == NULL){
			newNode->Setnext(NULL);
			temp->Setnext(newNode);
			return;
		}
	}

	newNode->Setnext(temp->Getnext());
	temp->Setnext(newNode);

}

void LinkedList::deleteFront(){
	Node * temp = head;
	head = head->Getnext();
	delete temp;
}

void LinkedList::deleteEnd(){
	Node *temp = head;
	Node *tempA;
	while((temp->Getnext()) != NULL){
		tempA = temp;
		temp->Getnext();
	}
	delete temp;
	temp->Setnext(NULL);
}

void LinkedList::deletePosition(int position){
 
	if(position < 1){
		cout << "outside range" << endl;
		return;
	}
	if(position == 1){
		deleteFront();
		return;
	}
	Node *temp = head;
	Node *tempA;
	for(int i = 0; i < position; i++){
		tempA = temp;
		temp = temp->Getnext();
		if((temp->Getnext()) == NULL){
			cout << "outside range" << endl;
			return;
		} 
	}
	tempA->Setnext(temp->Getnext());
	delete temp;
}

int LinkedList::search(int item){
	Node *temp = head;
	int position = 1;
	while((temp->Getnext()) != NULL){
		if((temp->Getdata()) == item){
			cout << position << " " << position << endl;
			return position;
		}
		position++;
		temp = temp->Getnext();
	}
	cout << 0 << " " << endl;
	return 0;
}

int LinkedList::getItem(int position){

	Node *temp = head;
	for(int i = 0; i < position-1; i++){
		temp = temp->Getnext();
		if((temp->Getnext()) == NULL){
			cout << std::numeric_limits< int >::max() << " " << endl;
			return std::numeric_limits< int >::max();
		}
	}
	cout << temp->Getdata() << " " << endl;
}

void LinkedList::printItems(){

	Node *temp = head;
	if(temp == NULL){
		return;
	}
	while((temp->Getnext()) != NULL){
		cout << temp->Getdata() << endl;
		temp=temp->Getnext();
	}
}

LinkedList::~LinkedList(){
	
	Node *temp = head;
	Node *tempA;
	while(temp->Getnext() == NULL){
		tempA = temp;
		temp = temp->Getnext();
		delete tempA;
	}
	delete temp;
}