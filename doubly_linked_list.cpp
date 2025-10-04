#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at the end
    void displayAll() {
		if (this->head == nullptr) {
			cout << "No head for this doubly linked list." << endl;
			return;
		}

		Node* current = this->head;
		for (;;) {
			cout << current->data;
			current = current->next;

			if (current == nullptr) {
				break;
			} else {
				cout << " <-> ";
			}
		}

		cout << endl;
    }

    // Insert at the end
    void append(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) { // if list is empty
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }


    // Insert at the front
    void prepend(int val) {

    }

    // Insert between first and last, at possition pos
    void insert(int val, int pos) {

    }

    // Remove from position pos
    void removeFromPos(int pos) {

    }

    // Find value val and remove it
    void removeValue(int pos) {

    }

    // Find and return the node with given value
    Node* search(int value) {

    }

    // Free all memory
    ~DoublyLinkedList() {

    }
}
