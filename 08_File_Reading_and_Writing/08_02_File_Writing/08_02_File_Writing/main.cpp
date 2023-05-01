#include <iostream>
#include <fstream>

using namespace std;


int main() {
	//ofstream: output file stream
	ofstream file("C:\\Users\\KEOHDURGUT\\Desktop\\students.txt");

	//In this example, we create the file and delete the data in the file and write the new data. 
	//Information is not added on top of old information.


	int num[9];
	string name[5];
	int department[5];
	for (int i = 0;i < 2;i++) {
		cout << "Enter the " << i + 1 << "th student's informatin" << endl;
		cin >> num[i] >> name[i] >> department[i];
	}
	int counter = 0;
	while (counter < 2) {
		file << num[counter]<< " " << name[counter] << " " << department[counter]<< endl;
		counter++;
	}



	return 0;
}