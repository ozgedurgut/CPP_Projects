#include <iostream>
using namespace std;

struct Worker {
    int number;
    string name;
    string surname;
    string department;
    char gender;
};


void changeName(Worker* renamedWorker, string newName) {
    renamedWorker->name = newName;
}

void createWorker(Worker* newWorker, int number, string name) {
    newWorker->number = number;
    newWorker->name = name;
}

int main()
{
    Worker worker1;
    Worker worker2;

    worker1.name = "Ozge";
    worker1.surname = "Durgut";
    worker1.department = "Software";

    cout << worker1.name << endl;
    changeName(&worker1, "Hulya");
    cout << worker1.name << endl;

    createWorker(&worker2, 45885, "Hande");
    cout << worker2.name << " " << worker2.number << endl;

    return 0;
}