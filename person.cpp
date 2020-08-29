#include <iostream>
#include "string"
#include "person.h"

person::person(std::string f, std::string l)
{
    first = f;
    last = l;
    title = "";
    salary = 0;
}

person::person(std::string f, std::string l, std::string t, double s)
{
    first = f;
    last = l;
    title = t;
    salary = s;
}

void person::setSalary(double s)
{
    salary = s;
}

double person::getSalary()
{
    return salary;
}

std::string person::getFirst()
{
    return first;
}
std::string person::getLast()
{
    return last;
}
std::string person::getTitle()
{
    return title;
}