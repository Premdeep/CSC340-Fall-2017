#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVec(vector<string>& ivec){

	for(auto i: ivec)
		cout<<"["<<i<<"]"<<" ";
	cout<<endl;	
}

int main(){

vector<string> ivec1(5);
vector<string> ivec2(5);

ivec1 = {"one", "two", "three", "four", "five"};
ivec2 = {"six", "seven", "eight", "nine", "ten"};

cout<<"ivec1 "<<endl;
cout<<"size : "<<ivec1.size()<<endl;
printVec(ivec1);
cout<<"ivec2 "<<endl;
cout<<"size : "<<ivec2.size()<<endl;
printVec(ivec2);

ivec2 = move(ivec1);
//ivec2 = ivec1;

cout<<endl<<endl;
cout<<"ivec1 "<<endl;
cout<<"size : "<<ivec1.size()<<endl;
printVec(ivec1);
cout<<"ivec2 "<<endl;
cout<<"size : "<<ivec2.size()<<endl;
printVec(ivec2);

}