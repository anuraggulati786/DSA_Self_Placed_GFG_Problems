#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void move_all_zeroes_to_end(int *arr , int n) {
	
	for(int i=0; i<n; i++) {
		if(arr[i] == 0) {
			for(int j = i+1; j<n; j++) {
				if(arr[j] != 0) {
					swap(arr[i],arr[j]);
				}
			}
		}
	}
  
  for(int i=0; i<n; i++) {
  	cout<<arr[i]<<" ";
  }	
	
}


void optamized_move_all_zeroes_to_end(int *arr, int n) {
	
	int indx = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] != 0) {
			swap(arr[i], arr[indx]);
			indx++;
		}
	}
	
	for(int i=0; i<n; i++) {
  	cout<<arr[i]<<" ";
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
    cout<<"Call for Naive approach :"<<endl;
    move_all_zeroes_to_end(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_move_all_zeroes_to_end(arr,n);
}
