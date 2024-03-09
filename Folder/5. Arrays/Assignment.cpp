// Question 1. Write a code to take user input for array elements and display them.

/* 
#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter 5 elements: "<<endl;
	int my_arr[5];
	
	for (int i=0; i<5; i++){
		cin>>my_arr[i];
	}
	
	for (int i=0; i<5; i++){
		cout<<my_arr[i]<<endl;
	}
}
*/

// Question 2. Calculate sum and average of array elements.

#include <iostream>
using namespace std;

int main()
{
	int arr[4];
	
	cout<<"Enter 4 elements: "<<endl;
	
	for (int i=0; i<4; i++){
		cin>>arr[i];
	}
	
	int sum = 0;
	for (int i=0; i<4; i++){
		sum = arr[i] + sum;
	}
    
    cout<<"Sum of the elements of array is "<<sum<<endl;
    
    int avg = 0;
    for (int i=0; i<4; i++){
		avg = (arr[i] + sum)/4;
	}
	
	cout<<"Average of the elements of array is "<<avg;
}
