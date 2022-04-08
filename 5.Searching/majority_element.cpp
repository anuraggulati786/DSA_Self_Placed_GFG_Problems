#include<iostream>
using namespace std;


int majority_element_in_an_array(int arr[] , int n) {
	
	
	// time complkexity for this solution is O(N) .. most optamized solution to solve this problem ...
	// THIS ALGO IS CALLED AS {{ MOORE'S VOTING ALGORITHM }}
	
	
	int res = 0, count = 1;
	
	for(int i=1; i<n; i++) {
		if(arr[res] == arr[i]) {
			count++;
		}
		else {
			count--;
		}
		if(count == 0) {
			res = i;
			count = 1;
		}
	}
	return res;
}

int is_majority(int arr[],int n) {
	
	int res = majority_element_in_an_array(arr,n);
	
	int appearence = 0;

	for(int i=0; i<n; i++) {
		if(arr[i] == arr[res]) {
			appearence++;
		}
	}
	
	if(appearence > n/2) {
		return arr[res];
	}
	else {
		return 0;
	}
}

int main() {
	
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i = 0; i<n; i++) {
		cin>>arr[i];
	}
	

	cout<<"index of the majority element is = "<<is_majority(arr,n);
	
	
}
