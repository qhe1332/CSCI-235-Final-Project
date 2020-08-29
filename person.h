#pragma once
#include "string"

class person{
    private:
        std::string last; // last name
        std::string first; // first name
        std::string title; 
        double salary;
    public:
        person(std::string f, std::string l);
        person(std::string f, std::string l, std::string t, double s);
        void setSalary(double s);
        double getSalary();
        std::string getFirst();
        std::string getLast();
        std::string getTitle();
        // you can add public or private members as you need.
        // you can also make the above private if you prefer.
        // you can also change the data items from title and salary
        // if you want. Just make sure to use last and first name
        // as your keys.
  
};