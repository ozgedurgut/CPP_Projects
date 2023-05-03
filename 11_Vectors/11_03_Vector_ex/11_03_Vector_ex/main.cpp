#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


//In this project, the user's name and age information are obtained from the user. 
//The contact information entered is sorted by age from smallest to largest.


class Student {
public:
    Student(string name, int age) : name(name), age(age) {}

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    bool operator < (const Student& student) const {
        return age < student.age;
    }

private:
    string name;
    int age;
};

int main() {
    vector<Student> students;
    string name;
    int age;

    // Collect student information from user
    while (true) {
        cout << "Enter student name (or 'ok' to exit): ";
        getline(cin, name);

        if (name == "ok") {
            break;
        }

        cout << "Enter student age: ";
        cin >> age;

        cin.ignore(); // Ignore newline character in input buffer

        // Add student to vector
        students.push_back(Student(name, age));
    }

    // Sort and print students
    sort(students.begin(), students.end());

    for (const auto& student : students) {
        cout << student.getName() << " - " << student.getAge() << endl;
    }

    return 0;
}
