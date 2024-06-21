#include <iostream>
using namespace std;

class A{
	public:
		void method_of_A(){
			cout<<"I am a method of A.";
		}
};

int main(){
	A obj;
	obj.method_of_A();
}
