#include <iostream>
#include "person.h"
#include "hash.h"
#include "List.h"
#include "Node.h"


int main()
{
    hash_table* hash1 = new hash_table();
    person p1 = person("John", "Hughes");
    hash1->insert(&p1);
    
    return 0;
}
