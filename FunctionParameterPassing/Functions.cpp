// This program mainly illustrates the different ways
// to pass arguments to a function in C++

#include <iostream>
using namespace std;


// Pass by reference
int& bar(int& b){
	b--;
	return b;
}

// Pass by Pointer
int foo(int* a){
	*a = *a+3;
	*a+2;
	return 5;
} 

// Pass by Value
int bazz(int c){
	c = c*2;
	return c;
}

int main(){
	int w  =10;
	int x = foo(&w);
	int& y = bar(x);
	int z = bazz(y);
	x++;
	cout<<"w : "<<w<<endl;
	cout<<"x : "<<x<<endl;
	cout<<"y : "<<y<<endl;
	cout<<"z : "<<z<<endl;

	return 0;
}