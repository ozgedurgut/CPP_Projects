#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string data;
    Node* next;
};
//Node sýnýfý, her bir düðümü temsil eder.
//Bu düðümler, linked list'in her bir elemanýný depolamak için kullanýlýr. 
//Node sýnýfý, data adýnda bir string veri üyesi ve next adýnda bir Node iþaretçisi içerir.


//LinkedList sýnýfý, linked list veri yapýsýný genel olarak tanýmlar. 
class LinkedList {
private:
    //head pointerý, listenin baþýný gösterir. 
    Node* head;

    //insertInOrder fonksiyonu, verilen deðeri alfabetik sýraya uygun bir þekilde yerleþtirmek için kullanýlýr. 
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

    //add fonksiyonu, yeni bir düðüm oluþturmak ve insertInOrder fonksiyonunu çaðýrmak için kullanýlýr. 
    void add(string value) {
        insertInOrder(value);
    }

    //print fonksiyonu, listenin tüm elemanlarýný ekrana yazdýrmak için kullanýlýr.
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
