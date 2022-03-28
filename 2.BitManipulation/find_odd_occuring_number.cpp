 #include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// 1st iterative solution...
void odd_occuring_number(int arr[] , int n) {
    // Write your code here.
    for(int i=0; i<n; i++) {
    	int count = 0;
    	for(int j=0; j<n; j++) {
    		if(arr[i] == arr[j]) {
    			count++;
			}
		}
		if(count%2 != 0) {
			cout<<arr[i]<<endl;
			break;
		}
		
	}
   
}

int main() { 
  
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
    	cin>>arr[i];
	}
   odd_occuring_number(arr,n);
   
}
