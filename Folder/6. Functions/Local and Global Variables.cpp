// To access the global variable with the same name as local.

#include <iostream>
using namespace std;

int global = 12;

int main()
{
	int global = 10; // compiler always gives preference to local variable
	cout<<global<<endl;
	cout<<::global;
}
