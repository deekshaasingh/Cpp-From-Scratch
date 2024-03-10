#include <iostream>
using namespace std;

int main()
{
	int a = 11;
	int *pointer;
	
	pointer = &a;
	
	cout<<"The value of a is: "<<a<<endl;
	cout<<"The value of *pointer is: "<<*pointer<<endl;
	cout<<"The value of address of &pointer: "<<pointer;
}
