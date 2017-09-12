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
	linkedList(){
		head = NULL;
		size = 0;
	}

	linkedList(int data){
		// node* first = new node;
		// first->data = data;
		// first->next = null;

		head = new node;
		head->data = data;
		head->next = NULL;
		size = 1;
	}

	int getSize(){
		return size;
	}

	void appendNode(int data){

		if(head == NULL){
			head = new node;
			head->data = data;
			head->next = NULL;
			//size++;
		}else{
			node* walk = head;
		while(walk->next != NULL)
			walk = walk->next;
		node* last = new node;
		last->data = data;
		last->next = NULL;
		walk->next = last;
			// walk->next = new node;
			// walk->next->data = data;
			// walk->next->next = NULL;
			//size++;
		}

		size++;		
	}

	void printList(){
		if(head == NULL)
			return;
		node* walk = head;
		while(walk != NULL){
			cout<<walk->data<<" -> ";
			walk = walk->next;
		}
		cout<<"NULL"<<endl;
	}

	void insertFront(int data){
		node* first =  new node;
		first->data = data;
		first->next = head;
		head = first;
		size++;
	}

};

int main(){

	linkedList l;
	linkedList l1(4);
	l1.printList();
	cout<<"size : "<<l1.getSize()<<endl;
	l1.appendNode(5);
	l1.appendNode(1);
	l1.appendNode(7);
	l1.appendNode(2);
	l1.insertFront(45);
	l1.insertFront(99);
	l1.printList();
	cout<<"size : "<<l1.getSize()<<endl;

	return 0;
}