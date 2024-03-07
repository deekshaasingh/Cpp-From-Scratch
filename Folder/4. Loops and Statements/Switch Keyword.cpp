#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter either 1 or 2: "<<endl;
	cin>>num;
	
	switch(num){
		case 1: cout<<"Entered number is 1!"<<endl;
		        break;
		case 2: cout<<"Entered number is 2!"<<endl;
		        break;
		default: cout<<"Number is neither 1 or 2!";
	}
}
