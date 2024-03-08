#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	cout<<"Enter 5 elements in array: "<<endl;
	
	int i;
	
	for (i=0; i<5; i++){
		cin>>arr[i];
	}
	
	cout<<"All the elements that you entered are: "<<endl;
	
	for (i=0; i<5; i++){
		cout<<arr[i]<<endl;
	}
}
