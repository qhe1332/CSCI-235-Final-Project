//I took this code from Assignment 1 and modificed it to store person instead of strings
#pragma once
#include "person.h"

class Node{
	private:
		person *data;
		Node *next;
	public:
		Node();
		Node(person *p);
		Node(person *p, Node* next);

		void setData(person *p);
		void setNext(Node *next);
		person *getData();
		Node *getNext();
    
  
};