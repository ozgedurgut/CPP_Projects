#include <iostream>

using namespace std;
 
class Gold{
public:
	int carat;
	int amount;
public:
	void howMuchUsed() {
		cout << amount << endl;
	}

};

class Iron {
public:
	int carat;
	int amount;
public:
	void howMuchUsed() {
		cout << amount << endl;
	}
};


class Motor:public Gold, public Iron {
public:
	int numOfRev;
	int usedGold;
	int usedIron;
	
};
int main() {

	Motor m1;
	m1.numOfRev = 1600;
	m1.usedGold = 5;
	m1.usedIron = 1500;
	m1.Gold::amount = m1.usedGold;
	m1.Iron::amount = m1.usedIron;

	//If we want to access a function or a property under a class, we use ::
	cout << "how much gold was used: ";
	m1.Gold::howMuchUsed();
	cout << "how much iron was used: ";
	m1.Iron::howMuchUsed();
	return 0;
}