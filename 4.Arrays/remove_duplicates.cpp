#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
// brute force...
void remove_duplicates_from_sorted_Array(int *arr, int n) {
     
     int temp[n];
     temp[0] = arr[0];
     int indx = 1;
     for(int i=1; i<n; i++) {
     	if(temp[indx-1] != arr[i] ){
		      
		      temp[indx] = arr[i];
		      indx++;
		     
		 }
	 }
	 
	 for(int i=0; i<indx; i++) {
	 	cout<<temp[i]<<" ";
	 }
	 cout<<endl;
}

// optamized

void optamized_remove_duplicates_from_sorted_Array(int *arr, int n) {
	
	  int indx = 1;
	  for(int i=1; i<n; i++) {
	  	if(arr[indx-1] != arr[i]) {
	  		arr[indx] = arr[i];
	  		indx++;
		  }
	  }
	for(int i=0; i<indx; i++) {
	 	cout<<arr[i]<<" ";
	 }
	 cout<<endl;
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
    
    cout<<"Call for naive approach :"<<endl;
   	remove_duplicates_from_sorted_Array(arr,n);
    
    cout<<"Call for optamized approach :"<<endl;
    optamized_remove_duplicates_from_sorted_Array(arr,n);
}
