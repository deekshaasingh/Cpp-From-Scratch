#include <iostream>
using namespace std;

int main()
{
	// Arithmetic Operator
	
	int a = 70;
	int b = 7;
	int z;
	z = a/b;
	cout<<z<<endl;
	
	// Assignment Operator
	
	int p = 45;
	p += 7;
	cout<<p<<endl;
	
	// Comparison Operator
	
	cout<<(b>a)<<endl;
	
	// Logical Operator
	
	cout<<(a>b && b>a)<<endl;
	cout<<(a>b || b>a);
}
