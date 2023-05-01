#include <iostream>
#include <fstream>

using namespace std;


int main() {

	ofstream file("C:\\Users\\KEOHDURGUT\\Desktop\\students.txt",std::ios_base::app);

	//in this example we are making additions to the file with something written in it. previous posts are not deleted
	int num[9];
	string name[5];
	int department[5];
	for (int i = 0;i < 2;i++) {
		cout << "Enter the " << i + 1 << "th student's informatin" << endl;
		cin >> num[i] >> name[i] >> department[i];
	}
	int counter = 0;
	while (counter < 2) {
		file << num[counter] << " " << name[counter] << " " << department[counter] << endl;
		counter++;
	}

	return 0;
}