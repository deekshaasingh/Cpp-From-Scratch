#include <iostream>
using namespace std;

// parent class
class Parent{
	public:
		int p;
};

// child class that will inherit from parent class

class Child : public Parent {
	public:
		int c;
};

int main(){
	Child obj;
	
	obj.p = 20;
	obj.c = 34;
	
	cout<<"Value of variable of parent class: "<<obj.p<<endl;
	cout<<"Value of variable of child class: "<<obj.c;
}
