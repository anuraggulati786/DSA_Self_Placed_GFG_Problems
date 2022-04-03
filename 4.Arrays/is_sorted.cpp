#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool is_sorted(int *arr, int n) {
     
     for(int i=1; i<n; i++) {
     	if(arr[i] <arr[i-1]) {
     		return false;
		 }
	 }
	 return true; 
  
}



int main() { 
  
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    
    int *arr = new int[n];
    
    cout<<"enter the elements of the array :"<<endl;
    for(int i=0; i<n; i++) {
    	cin>>arr[i];
	}
    
    
   	bool indx = is_sorted(arr,n);
    if(indx)	cout<<"Sorted :"<<endl;
	else cout<<"Not Sorted :";
}
