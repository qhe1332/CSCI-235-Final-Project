//I took this code fode from assignment 1 and modified it to store person
#pragma once

#include <string>
#include "Node.h"

class List{
	private:
		Node *head;
		int len;
	public:
		List();
		~List();
		Node operator[](int i);
		void pushback(person *p);      
		void remove(int i); 
		void RemoveP(person *p); //remove person  
		person *search(std::string f, std::string l); //search person        
		void insert(person *p);
		std::string getDebugString();
		int length();
};
