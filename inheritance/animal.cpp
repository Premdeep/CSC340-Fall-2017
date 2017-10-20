#include <iostream>
using namespace std;

class animal{

private:
	int age;
	string name;

public:
	animal(){
		age = 5;
		name = "animal";
		//cout<<"in animal default constructor"<<endl;
	}

	animal(int newAge, string newName){
		age  = newAge;
		name = newName;
	//	cout<<"in animal custom constructor"<<endl;
	}

	//virtual void run() = 0;
	void run(){
		cout<<"animal is running"<<endl;
	}

	virtual void eat(){
		cout<<"animal is eating"<<endl;
	}

};

class mammal{
private: 
	string species;
public:
	mammal(){
		cout<<"in mammal default constructor"<<endl;
	}
};

class dog : public animal{

public:
	dog():animal(5,"hola"){		
		//cout<<"in dog default constructor"<<endl;
	}

	dog(int newName):animal(5,"hola"){
		//animal(5,"hola");
		//cout<<"in dog custom "<<endl;
	}

	 void run(){
		cout<<"dog is running"<<endl;
	}

	 void sniff(){
		cout<<"dog sniffs"<<endl;
	}

	void eat(){
		cout<<"dog is eating"<<endl;
	}
};

int main(){

	animal* a = new animal();
	// a->eat();
	dog* d = new dog();
	// d->eat();
	animal* b = new dog();
	b->run();

	animal* c = d;

	dog* e = (dog*) b;
	//dog c;
	//dog d(5);

	dog* f  = (dog*) a;

	f->sniff();

	return 0;
}