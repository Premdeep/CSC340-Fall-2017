#include "linkedList.h"

int linkedList::getSize(){
		return size;
	}

	void linkedList::appendNode(int data){

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

	void linkedList::printList(){
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

	void linkedList:: insertFront(int data){
		node* first =  new node;
		first->data = data;
		first->next = head;
		head = first;
		size++;
	}

	void linkedList::deleteFront(){
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


	void linkedList::deleteLast(){

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

	void linkedList::deleteList(){
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

void linkedList::deleteNode(int index){

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

linkedList::linkedList(int data){
		// node* first = new node;
		// first->data = data;
		// first->next = null;
		cout<<"In custom constructor"<<endl;
		head = new node;
		head->data = data;
		head->next = NULL;
		size = 1;
	}

	linkedList::~linkedList(){
		cout<<"In destructor"<<endl;
		deleteList();
		//delete this;
		
	}


linkedList::linkedList(){
		head = NULL;
		size = 0;
		cout<<"In default constructor"<<endl;
	}


