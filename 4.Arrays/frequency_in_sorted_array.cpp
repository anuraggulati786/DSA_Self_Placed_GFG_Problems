#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


int frequency_of_elements_in_sorted_Array(int *arr , int n) {
	
     int count = 1;
     for(int i = 0; i<n; i++) {
     	if(arr[i] == arr[i+1]) {
     		count++;
		 }
		 if(arr[i] != arr[i+1]) {
		 	cout<<arr[i] <<" : "<<count<<endl;
		 	count = 1;
		 }
	 }
	
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
    
    frequency_of_elements_in_sorted_Array(arr,n);
   	
	
}
