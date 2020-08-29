//I took this code fode from assignment 1 and modified it to store person
#include <iostream>
#include <string>
#include "List.h"
#include "person.h"
#include "Node.h"

List::List()
{
	head = nullptr;
	len=0;
}

List::~List()
{
	std::cout << "In the destructor\n";
	Node *t;
	while (head != nullptr){
		t = head;
		head=head->getNext();
		delete t;
	}
}

Node List::operator[](int i)
{
	Node *t = head;
	for(int j = 0; j < i; j++) //loop till the index of element
	{
		t = (*t).getNext();
	}
	return *t;
}

void List::pushback(person *p)
{
	Node *t = new Node(p);     //new Node
	if(head == nullptr)
	{
		head = t;
	}
	else
	{
		Node *h = head;
		while(h->getNext() != nullptr) //loop to the last element of the list
		{
			h = h->getNext();
		}
		h->setNext(t); //set Next
	}
	len ++; //increase length
}

void List::remove(int i)
{
	if(i >= len) //check whether it's a valid index
	{
		std::cout << "invalid index\n";
		return;
	}

	
	if(i == 0) //if removing first element
	{
		Node *t = head;
		Node *y = t;
		t = (*t).getNext();
		delete y;
		head = t;
	}
	else
	{
		Node *t = head;
		for(int j = 0; j < i-1; j++)
		{
			t = (*t).getNext();
		}
		Node *y = (*t).getNext();
		delete y;
		(*t).setNext((*t).getNext()->getNext());
	}

	len --; //decrease length
}

void List::RemoveP(person *p) //remove person //DOES NOT WORK
{
	if(head == nullptr)
	{
		return;
	}
	Node *h = head;
	for(int i = 0; i < len; i++)
	{
		if(h->getData()->getFirst() == p->getFirst() && h->getData()->getLast() == p->getLast())
		{
			remove(i);
			return;
		}
		h = h->getNext();
	}
}

person *List::search(std::string f, std::string l) //search person //MIGHT BE THE ISSUE FOR RETRIEVE
{
	if(head == nullptr)
	{
		return nullptr;
	}

	Node *h = head;
	std::cout << "hi";
	for(int i = 0; i < length(); i++)
	{
		std::cout << "hi";
		if(h->getData()->getFirst() == f && h->getData()->getLast() == l)
		{
			std::cout << "hi";
			return h->getData();
		}
		h = h->getNext();
	}
	return nullptr;
}

void List::insert(person *p)
{
	// make the new node
	Node *t = new Node(p);
	
	// insert it into the list
	t->setNext(head);
	head = t;
	// update the length
	len++;
}


std::string List::getDebugString()
{
	if(head == nullptr)
	{
		return "";
	}
	Node *t;
	t = head;
	std::string result="";
	while (t != nullptr){
		std::cout << t->getData()->getFirst() << std::endl;
		result = result + t->getData()->getFirst() + "" + t->getData()->getLast() + "-->";
		t = t->getNext();
	}
	result = result + "null";

	return result;
}

int List::length()
{
	return len;
}