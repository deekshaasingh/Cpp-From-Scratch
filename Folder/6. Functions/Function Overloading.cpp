#include <iostream>
using namespace std;

// first function with two parameters

int sum(int a, int b){
	return(a*b);
}

// second function with three parameters

int sum(int a1, int a2, int a3){
	return (a1+a2+a3);
}
int main()
{
	cout<<sum(5,3)<<endl;
	cout<<sum(1,2,3);
}
