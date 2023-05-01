#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string data;
    Node* next;
};
//Node s�n�f�, her bir d���m� temsil eder.
//Bu d���mler, linked list'in her bir eleman�n� depolamak i�in kullan�l�r. 
//Node s�n�f�, data ad�nda bir string veri �yesi ve next ad�nda bir Node i�aret�isi i�erir.


//LinkedList s�n�f�, linked list veri yap�s�n� genel olarak tan�mlar. 
class LinkedList {
private:
    //head pointer�, listenin ba��n� g�sterir. 
    Node* head;

    //insertInOrder fonksiyonu, verilen de�eri alfabetik s�raya uygun bir �ekilde yerle�tirmek i�in kullan�l�r. 
    void insertInOrder(string value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (head == NULL || head->data >= value) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
public:
    LinkedList() {
        head = NULL;
    }

    //add fonksiyonu, yeni bir d���m olu�turmak ve insertInOrder fonksiyonunu �a��rmak i�in kullan�l�r. 
    void add(string value) {
        insertInOrder(value);
    }

    //print fonksiyonu, listenin t�m elemanlar�n� ekrana yazd�rmak i�in kullan�l�r.
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.add("banana");
    list.add("apple");
    list.add("pear");
    list.add("orange");
    list.add("kiwi");
    list.print();
    return 0;
}
