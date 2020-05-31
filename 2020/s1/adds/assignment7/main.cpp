#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

    string input, checks[103], command;
    int recs[100], c1, c2, i = 0;
    getline(cin,input);
    stringstream sstream;
    sstream << input;
    //sstream >> checks;
    while(!sstream.eof()){
        sstream >> checks[i];  
        i++; 
    }

    for(int d = 0; d < i-3; d++){
        recs[d] = stoi(checks[d]);

    }

    command = checks[i-3];

    c1 = stoi(checks[i-2]);

    c2 = stoi(checks[i-1]);

    LinkedList * head = new LinkedList(recs, i-2);

    if(command == "AF"){
        head->addFront(c1);
    }
    if(command == "AE"){
        head->addEnd(c1);
    }
    if(command == "AP"){
        head->addAtPosition(c1,c2);
    }
    if(command == "S"){
        head->search(c1);
    }
    if(command == "DF"){
        head->deleteFront();
    }
    if(command == "DE"){
        head->deleteEnd();
    }
    if(command == "DP"){
        head->deletePosition(c1);
    }
    if(command == "GI"){
        head->getItem(c1);
    }
    
    head->printItems();
    delete head;
    return 0;
}