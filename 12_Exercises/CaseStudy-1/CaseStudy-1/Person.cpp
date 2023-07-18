#include "Person.h"

void Person::getdata() {
    cin >> name >> age;
}

void Person::putdata() {
    cout << name << " " << age << " ";
}

void Person::setname(string s) {
    if (s.length() > lenname) {
        throw invalid_argument("Name length exceeds limit");
    }
    name = s;
}