// ConsoleApplication1_c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Worker{
    int number;
    string name;
    string surname;
    string department;
    char gender;
};


void changeName(Worker* renamedWorker, string newName) {
    renamedWorker->name = newName;
}

int main()
{
    Worker worker1;

    worker1.name = "Ozge";
    worker1.surname = "Durgut";
    worker1.department = "Software";

    cout << worker1.name << endl;
    changeName(&worker1, "Hulya");
    cout << worker1.name << endl;
    return 0;
}
