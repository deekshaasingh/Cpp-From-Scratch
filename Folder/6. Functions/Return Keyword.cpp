// You can't use return keyword with void type function!

#include <iostream>
using namespace std;

int sum(int n1, int n2){
	return (n1+n2);
}

int main()
{
	int a, b;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter another number: ";
	cin>>b;
	
	int ans;
	ans = sum(a, b);
	cout<<ans;
}
