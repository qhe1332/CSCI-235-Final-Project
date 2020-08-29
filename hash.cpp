#include <iostream>
#include "person.h"
#include "hash.h"
#include "List.h"
#include "Node.h"

hash_table::hash_table()
{
    for(int i = 0; i < 10; i ++)
    {
        data[i] = new List();
    }
}

hash_table::~hash_table()
{
    for(int i = 0; i < 10; i ++)
    {
        delete data[i];
    }
}

int hash_table::hash(person *p)
{
    std::string f = p->getFirst();
    std::string l = p->getLast();
    int num1 = toupper(l[0]); //gets ASCII number for the upper case value of the first letter of the last name
    int num2 = tolower(f[f.length()-1]); //gets ASCII number for the lower case value of the last letter of the first name
    return ((num1 + num2)%10);
}

void hash_table::insert(person *p) //insert the person into the hash table
{
    data[hash(p)]->pushback(p);//push into list based on hash code
}

void hash_table::Delete(person *p) //delete the person into the hash table
{
    data[hash(p)]->RemoveP(p);   //CORE DUMPED
}
person *hash_table::retrieve(std::string f, std::string l) //given an instance of person that only has the key value (first and last names) return the full person (if they're in the table)
{
    person *p = new person(f, l);                      //CORE DUMPED
    person *n = data[hash(p)]->search(f, l);
    return n;
}