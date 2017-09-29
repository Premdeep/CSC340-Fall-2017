#include "linkedList.h"

int main(){	
	

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