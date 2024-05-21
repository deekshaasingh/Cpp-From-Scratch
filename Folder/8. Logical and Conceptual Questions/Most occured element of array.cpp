#include <bits/stdc++.h>
using namespace std;

int freq(int arr[], int n){
	sort(arr, arr+n);
	
	int max_count = 1, pos = arr[0], curr_count = 1;
	for(int i=1; i<n; i++){
		if(arr[i]==arr[i-1]){
			curr_count++;
		}
		
		else{
			if(curr_count > max_count){
				max_count = curr_count;
				pos = arr[i-1];
			}
		}
	}
	
	if(curr_count > max_count){
		max_count = curr_count;
		pos = arr[n-1];
	}
	
	return pos;
}

int main(){
	int arr[] = {1,2,3,4,5,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Most occuring element is: "<<freq(arr, n);
}
