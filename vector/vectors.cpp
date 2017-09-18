#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct token{
		string token;
		int freq;
	};


int main()
{

	vector<int> ivec;
	vector<int> v(3);
	vector<int> v1(4,2);
	v1.push_back(5);	

	token a;
	a.token = "Hi";
	a.freq = 2;
	

	cout<<"size of ivec: "<<ivec.size()<<endl;
	cout<<"size of v: "<<v.size()<<endl;
	cout<<"size of v1: "<<v1.size()<<endl;
	int s = v1.size();
	
	for( int i = 0; i < s; i++)
		cout<<v1[i]<<endl;

	vector<token> tvec;
	tvec.push_back(a);
	cout<<tvec[0].freq<<endl;
	cout<<a.freq<<endl;


	
	return 0;
}