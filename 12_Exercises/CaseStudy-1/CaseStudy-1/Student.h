#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
#include"Person.h"
using namespace std;

class Student : public Person {
protected:
    int lenname;
    int id;
    vector<int> marks;
    static int cur_id;
public:
    Student();
    void getdata() override;
    void putdata() override;
    void setname(string s) override;
};

#endif // STUDENT_H
