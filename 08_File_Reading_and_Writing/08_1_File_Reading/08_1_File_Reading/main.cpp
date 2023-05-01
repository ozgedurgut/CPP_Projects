#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream file("C:\\Users\\KEOHDURGUT\\Desktop\\clubs.txt");

	int date[4];
	string clubName[4];
	string stadium[4];

	int i = 0;
	while (file) {
		file >> date[i] >> clubName[i] >> stadium[i];
		i++;
	}
		
	for (int i = 0;i < 3;i++) {
		cout << "Date: " << date[i]<<" ";
		cout << "Club name: " << clubName[i] << " ";
		cout << "Stadium: " << stadium[i] << endl;
	}

	return 0;
}