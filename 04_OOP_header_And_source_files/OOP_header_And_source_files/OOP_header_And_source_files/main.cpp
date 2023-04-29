#include <iostream>
#include "Student.h"
using namespace std;

int main() {
	Student student1;
	student1.name = "Suna";
	student1.age = 24;

	student1.getNameAndAge();

	return 0;
}