#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    data = val;
    next = nullptr;
    prev = nullptr;
  }
};

class DoublyLinkedList
{
private:
  Node *head;
  Node *tail;

public:
  DoublyLinkedList()
  {
    head = nullptr;
    tail = nullptr;
  }

  // Insert at the end
  void displayAll()
  {
  }

  // Insert at the end
  void append(int val)
  {
  }

  // Insert at the front
  void prepend(int val)
  {
  }

  // Insert between first and last, at possition pos
  void insert(int val, int pos)
  {
  }

  // Remove from position pos
  void removeFromPos(int pos)
  {
    // ari
  }

  // Find value val and remove it
  void removeValue(int pos)
  {
  }

  // Find and return the node with given value
  Node *search(int value)
  {
  }

  // Free all memory
  ~DoublyLinkedList()
  {
  }
};

int main()
{

  return 0;
}
