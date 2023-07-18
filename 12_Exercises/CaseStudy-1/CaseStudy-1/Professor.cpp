#include "Professor.h"
#include <iostream>

using namespace std;

int Professor::cur_id = 0;

Professor::Professor() {
    id = ++cur_id;
}

void Professor::getdata() {
    cin >> name >> age >> publications;
    if (publications < 1 || publications > 1000) {
        cerr << "Invalid input: publications should be between 1 and 1000" << endl;
        exit(1);
    }
}

void Professor::putdata() {
    cout << name << " " << age << " " << publications << " " << id << endl;
}
