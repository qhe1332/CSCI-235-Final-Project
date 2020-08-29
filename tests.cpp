#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "person.h"
#include "hash.h"
#include "List.h"
#include "Node.h"


TEST_CASE("Test hash code")
{
    hash_table* hash1 = new hash_table();
    person p1 = person("John", "Hughes");
    CHECK(hash1->hash(&p1) == 2);
}
TEST_CASE("Test hash_table insert")
{
    hash_table* hash1 = new hash_table();
    person p1 = person("John", "Hughes");
    CHECK(hash1->retrieve("John", "Hughes") == nullptr);
    hash1->insert(&p1);
    CHECK(hash1->retrieve("John", "Hughes") == &p1);
}
TEST_CASE("Test hash_table delete")
{
    hash_table* hash1 = new hash_table();
    person p1 = person("John", "Hughes");
    person p2 = person("Sally", "Wong");
    person p3 = person("saz", "Abee");
    hash1->insert(&p1);
    hash1->insert(&p2);
    hash1->insert(&p3);
    CHECK(hash1->retrieve("Sally", "Wong") == &p2);
    hash1->Delete(&p2);
    CHECK(hash1->retrieve("Sally", "Wong") == nullptr);
}