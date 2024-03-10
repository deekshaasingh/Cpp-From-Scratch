#include <iostream>
using namespace std;

int fact (int n)
{
	if(n>1){
		return n*fact(n-1);
	}
	
	else{
		return 1;
	}
}

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	int ans = fact(num);
	cout<<ans;
}
