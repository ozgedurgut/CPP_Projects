#include <iostream>

using namespace std;

class Book {
public:
	string name;
public:
	void get_info() {
		cout << name << endl;

	}
};

class Novel:public Book {
public:
	string novelType; 

public:
	Novel(string name, string novelType) {

		this->name = name;
		this->novelType = novelType;
	}

public:
	void get_info() {
		cout << "Novel Name: " << name << " Novel Type:" << novelType << endl;
	}

};

int main() {

	Novel n1("Araba Sevdasi","Edebi");

	n1.get_info();

	Book *n1Parent;
	n1Parent = &n1;
	n1Parent->get_info();

	return 0;
}