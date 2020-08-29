#pragma once
#include "person.h"
#include "List.h"

class hash_table 
{
    private:
        List* data[10]; //array of linked list
    public:
        hash_table();
        ~hash_table();
        int hash(person *p); //creates a hash code
        void insert(person *p); //insert the person into the hash table.
        void Delete(person *p); //delete the person into the hash table.
        person *retrieve(std::string f, std::string l); //given an instance of person that only has the key value (first and last names) return the full person (if they're in the table)
};