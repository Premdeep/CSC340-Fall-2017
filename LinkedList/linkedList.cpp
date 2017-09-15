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
		cout<<"In default constructor"<<endl;
	}

	linkedList(int data){
		// node* first = new node;
		// first->data = data;
		// first->next = null;
		cout<<"In custom constructor"<<endl;
		head = new node;
		head->data = data;
		head->next = NULL;
		size = 1;
	}

	~linkedList(){
		cout<<"In destructor"<<endl;
		deleteList();
		//delete this;
		
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
		if(head == NULL){
			cout<<"head->NULL"<<endl;
			return;
		}
		node* walk = head;
		while(walk != NULL){
			cout<<walk->data<<" -> ";
			//cout<<walk->data<<"("<<walk<<")"<<" -> ";
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

	void deleteFront(){
		// node* walk = head;
		// if(walk != NULL){
		// 	node* temp = walk;
		// 	walk = walk->next;
		// 	delete temp;
		// }

		if(head != NULL){
			node* temp = head;
			head  = head->next;
			--size;
			delete temp;
		}
	}


	void deleteLast(){

		if(head->next == NULL){
			node* temp = head;
			head = head->next;
			delete temp;
		}else{
			node* prev = NULL;
			node* last = head;
			while(last->next != NULL){
				prev = last;
				last = last->next;				
			}
			
			prev->next = last->next;
			delete last;
			--size;


		}
	}

	void deleteList(){
		if(head == NULL)
			return;
		node* walk = head;
		while(walk != NULL){
			node* temp = walk;
			walk = walk->next;
			delete temp;
		}

		size = 0;
		head = NULL;	

	}

	void deleteNode(int index){

		if(index >= size){
			cout<<"Invalid index"<<endl;
			return;
		}

		if(index == 0)
			deleteFront();
		else if(index == size-1)
			deleteLast();
		else{
			node* prev = NULL;
			node* cur = head;
			while(index-- > 0){
				prev = cur;
				cur = cur->next;
			}
			prev->next = cur->next;
			delete cur;
			--size;
		}

	}


};

int main(){

	// linkedList l;
	// linkedList l1(4);
	// l1.printList();
	// cout<<"size : "<<l1.getSize()<<endl;
	// l1.appendNode(5);
	// l1.appendNode(1);
	// l1.appendNode(7);
	// l1.appendNode(2);
	// l1.insertFront(45);
	// l1.insertFront(99);
	// l1.printList();
	// cout<<"size : "<<l1.getSize()<<endl;

	linkedList* l = new linkedList();
	(*l).appendNode(0);
	l->appendNode(1);
	l->appendNode(2);
	l->appendNode(3);
	l->appendNode(4);
	l->appendNode(5);

	l->printList();	
	// delete l;
	// l = NULL;
	l->deleteNode(3);
	l->printList();
	// l->deleteFront();
	// l->printList();
	
	//l->deleteList();
	



	return 0;
}