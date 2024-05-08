#include <iostream>
using namespace std;

void rev_arr(int arr[], int start, int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void print_arr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main(){
	int arr[]={23,45,34,87,56};
	int n = sizeof(arr)/sizeof(arr[0]);
	print_arr(arr,n);
	rev_arr(arr,0,n-1);
	cout<<"Reversed Array: "<<endl;
	print_arr(arr,n);
}
