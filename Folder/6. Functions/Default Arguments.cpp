#include <iostream>
using namespace std;

int sum(int a = 55, int b = 44, int c = 33){
	return (a+b+c);
}

int main()
{   // here, compiler will take a as 1, b as 2 and 33 as c by default
	cout<<sum(1,2);   // it is compulsory to provide value to the right most element
}
