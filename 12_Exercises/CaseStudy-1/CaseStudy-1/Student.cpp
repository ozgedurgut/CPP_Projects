#include "Student.h"
#include <iostream>

using namespace std;

int Student::cur_id = 0;

Student::Student() {
    id = ++cur_id;
}

void Student::getdata() {
    cin >> name >> age;
    if (name.length() > lenname) {
        name = name.substr(0, lenname);
    }
    if (age < 1 || age > 80) {
        cout << "Invalid input! Age must be between 1 and 80." << endl;
        exit(1);
    }
    int num_marks;
    cin >> num_marks;
    for (int i = 0; i < num_marks; i++) {
        int mark;
        cin >> mark;
        if (mark < 0 || mark > 100) {
            cout << "Invalid input! Marks must be between 0 and 100." << endl;
            exit(1);
        }
        marks.push_back(mark);
    }
    id = ++cur_id;
}

void Student::putdata() {
    int sum = 0;
    for (int i = 0; i < marks.size(); i++) {
        sum += marks[i];
    }
    cout << name << " " << age << " " << sum << " " << id << endl;
}

void Student::setname(string s) {
    if (s.length() > lenname) {
        throw invalid_argument("Name length exceeds limit");
    }
    name = s;
}
