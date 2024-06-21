#include <iostream>
using namespace std;

class A{
	public:
		int a; // public attribute
	private:
		int b; // private attribute
};

int main(){
	A obj;
	obj.a = 12;
	obj.b = 11;
}

// here we will get an error because b is a private attribute and we can not access it
