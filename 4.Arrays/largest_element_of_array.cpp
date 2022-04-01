#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int largest_element_in_array(int *arr, int n) {
     
     int indx  = 0;
     for(int i=1;i<n; i++) {
     	if(arr[i] > arr[indx]) {
     		indx = i;
		 }
	 }
	 
	 cout<<"Largest element os the array is ="<<arr[indx]<<endl;
	 return indx;
  
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
    
    
   	int indx = largest_element_in_array(arr,n);
   	cout<<"largest element is at index :"<<indx;
	
}
