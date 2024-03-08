#include <iostream>
using namespace std;

int main()
{
	int arr[4] = {4, 3, 6, 3};
	
	int i; 
	int sum = 0;
	
	for (i=0; i<4; i++){
		sum = arr[i]+sum;
	}
	
	cout<<sum;
}
