#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector;

    cout << "Initial size of vector: " << myVector.size() << endl;
    cout << "Initial capacity of vector: " << myVector.capacity() << endl;

    for (int i = 0; i < 10; i++) {
        myVector.push_back(i);
        cout << "Size of vector after adding element " << i << ": " << myVector.size() << endl;
        cout << "Capacity of vector after adding element " << i << ": " << myVector.capacity() <<endl;
    }

    return 0;
}
