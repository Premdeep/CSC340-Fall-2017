// Linked List Implementation in C++
#include <iostream>
using namespace std;

// Node for Linked List
struct node{
	int data;
	node* next;
};

// Linked List Class behaviour.
class linkedList{

private:
	node* head;
	int size;

public:
	linkedList();
	linkedList(int data);
	linkedList(const linkedList& rhs);
	~linkedList();
	int getSize();
	void appendNode(int data);
	void insertFront(int data);
	void deleteLast();
	void deleteFront();
	void deleteNode(int data);
	void printList();
	void deleteList();
	linkedList& operator=(const linkedList& rhs);

	
};
