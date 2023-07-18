#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    int lenname; 
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    virtual void setname(string s) = 0;
};

#endif // PERSON_H