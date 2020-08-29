//I took this code from Assignment 1 and modificed it to store person instead of strings
#include <iostream>
#include "Node.h"

Node::Node()
{
	this->data = nullptr;
	this->next = nullptr;
}

Node::Node(person *p){
	this->data = data;
	this->next = nullptr;
}


Node::Node(person *p, Node *next){
	this->data = data;
	this->next = next;
}


void Node::setData(person *p){
  	this->data = data;
}

void Node::setNext(Node *next){
  	this->next = next;
}

person *Node::getData(){
  	return data;
}

Node* Node::getNext(){
  	return next;
}