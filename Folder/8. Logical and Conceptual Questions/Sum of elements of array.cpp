#include <iostream>
using namespace std;

int sum(int arr[], int n){
	int sum = 0;
	
	for (int i=0; i<n; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int arr[] = {32, 45, 56, 78, 34};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Sum: "<<sum(arr, n);
}
