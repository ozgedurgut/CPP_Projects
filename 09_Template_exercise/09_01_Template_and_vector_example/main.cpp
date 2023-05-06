#include <iostream>
#include <vector>


/*
In this example, a generic vector class for different types is created using template.
This way you can use the same class to store both int and std::string elements.
*/
template <typename T>
class Vector {
private:
    std::vector<T> elements;
public:
    void addElement(T element) {
        elements.push_back(element);
    }
    //The addElement function of the class is used to add an element to the vector.

    void printElements() {
        for (const auto& element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    //The printElements function is used to print the elements in the vector to the screen.
};

int main() {
    Vector<int> intVector;
    intVector.addElement(10);
    intVector.addElement(20);
    intVector.addElement(30);
    intVector.printElements();
    // Vector<int> is defined and values 10, 20 and 30 are added to the vector using the addElement function.
    //The elements in the vector are printed to the screen by calling the printElements function.

    Vector<std::string> stringVector;
    stringVector.addElement("Hello");
    stringVector.addElement("World");
    stringVector.printElements();
    return 0;
    //Vector<std::string> is defined and this time the values "Hello" and "World" are added to the vector using the addElement function.
    //The elements in the vector are printed to the screen by calling the printElements function.
}
