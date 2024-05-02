#include <iostream>
using namespace std;

int largest(int arr[], int n){
	int max = 0;
	
	for(int i=1; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Largest element:"<<largest(arr,n);
}
