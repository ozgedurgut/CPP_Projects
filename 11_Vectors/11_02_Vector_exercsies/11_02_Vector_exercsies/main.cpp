#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    students.push_back(Student("Ahmet", 25));
    students.push_back(Student("Mehmet", 20));
    students.push_back(Student("Ayse", 22));
    students.push_back(Student("Fatma", 23));

    sort(students.begin(), students.end());

    /*
    The sort function is a function in the C++ standard library that performs a sorting operation. 
    It takes two parameters: the starting address and ending address of the data to be sorted. 
    In this example, the sort function sorts the Student objects in the students vector by their age.
    By default, the sort function sorts the data in ascending order. 
    In this example, since we overloaded the < operator in the Student class,
    the sort function sorts the Student objects in ascending order of their age.
    */

    for (const auto& student : students) {
        cout << student.getName() << " - " << student.getAge() << endl;
    }

    return 0;
}
