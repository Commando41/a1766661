#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int data;
    	Node *next;
  		Node();
  		void Setdata(int n);
    	int Getdata();
    	void Setnext(Node *n);
    	Node *Getnext();
    	~Node();
};

#endif