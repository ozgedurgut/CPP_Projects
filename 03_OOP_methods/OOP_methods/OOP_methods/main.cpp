#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	string name;
	int age;

	void getNaneAndAge() {
		cout << name << " " << age << endl;

	}
};

int main() {
	Person person1, person2;
	person1.name = "Ozge";
	person2.name = "Hande";
	person1.age = 25;
	person2.age = 22;

	person1.getNaneAndAge();
	person2.getNaneAndAge();
}