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

void printWorker(Worker worker) {
    cout << "Worker information:\nName: " << worker.name << "\nNo: " << worker.number << endl;
}
//If you are going to make changes to the data,
//we need to use a pointer as follows, if we are not going to change the data, 
//we will only print it on the screen, etc. we will not use pointers
void deleteWorker(Worker* worker) {
    worker->name = "There is no such worker.";
    worker->number = 0;
}




// Comment out the main block below to run this application. !!!!!!!!!!!!!!!!!!!!!!!!!

int main()
{
    Worker worker1;
    Worker worker2;

    cout << worker1.name << endl;
    changeName(&worker1, "Hulya");
    cout << worker1.name << endl;

    createWorker(&worker2, 45885, "Hande");
    cout << worker2.name << " " << worker2.number << endl;

    createWorker(&worker1, 45885, "Hulya");
    printWorker(worker1);
    deleteWorker(&worker1);
    printWorker(worker1);
    return 0;
}
