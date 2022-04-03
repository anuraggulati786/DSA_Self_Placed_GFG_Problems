#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void reverse(int *arr, int n) {
     
     int i = 0;
     int j = n-1;
     
     while(i<j) {
     	swap(arr[i],arr[j]);
     	i++;
     	j--;
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
    
    
   	reverse(arr,n);
    
    for(int i=0; i<n; i++) {
    	cout<<arr[i]<<" ";
	}
    
    
}
