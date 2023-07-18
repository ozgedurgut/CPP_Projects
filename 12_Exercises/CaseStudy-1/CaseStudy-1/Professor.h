#pragma once
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>

#include "Person.h"

class Professor : public Person {
private:
    int publications;
    static int cur_id;
    int id;
public:
    Professor();
    void getdata() override;
    void putdata() override;
    void setname(string s) override;

};

#endif // PROFESSOR_H
