#include <iostream>
using namespace std;

void linearSearch(int arr[], int n){
	int temp = -1;
	
	for(int i=0; i<5; i++){
		if(arr[i] == n){
			cout<<"Element found at position: "<<i+1<<endl;
			temp = 0;
			break;
		}
	}
	
	if(temp == -1){
		cout<<"No element was found!";
	}
}

int main(){
	int arr[5];
	cout<<"Enter all the array elements: "<<endl;
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	
	int num;
	cout<<"Enter the value that you want to search: ";
	cin>>num;
	
	linearSearch(arr,num);
}
