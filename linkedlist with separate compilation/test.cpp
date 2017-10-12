#include "linkedList.h"

int main(){	
	

	
linkedList* l1 = new linkedList();


l1->appendNode(1);
l1->appendNode(2);
l1->appendNode(3);

//(*l1).printList();

//linkedList l2(l1);

// l1.appendNode(9);
// l2.appendNode(10);

// cout<<"========="<<endl;

l1->printList();
//l2.printList();

delete l1;


	return 0;
}