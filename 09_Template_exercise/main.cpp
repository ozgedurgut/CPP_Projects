#include <iostream>


using namespace std;

template <class T>

T add(T num1, T num2) {
	return num1 + num2;
}

int main() {
	cout << add<int>(10, 54) << endl;// Define T as an int
	// will now be the T integer that I created as a template above.

	cout << add<double>(1.8, 83.6) << endl;// Define T as an double

	return 0;
}