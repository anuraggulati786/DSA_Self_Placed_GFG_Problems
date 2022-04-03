#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void left_rotate_array_by_d_places(int *arr , int n, int d) {
	
	for(int i=0; i<d; i++) {
		int temp = arr[0];
		for(int j = 1; j<n; j++) {
			arr[j-1] = arr[j];
		}
		arr[n-1] = temp;
	}
  
  for(int i=0; i<n; i++) {
  	cout<<arr[i]<<" ";
  }	
	
}

void reverse(int *arr, int s,int e) {
	while(s<=e) {
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
}
void optamized_left_rotate_array_by_d_places(int *arr, int n, int d) {
	
	reverse(arr,0,d-1);
	reverse(arr,d, n-1);
	reverse(arr,0,n-1);
	
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
	int d;
	cout<<"enter the value of D :"<<endl;
	cin>>d;
    cout<<"Call for Naive approach :"<<endl;
    left_rotate_array_by_d_places(arr,n,d);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_left_rotate_array_by_d_places(arr,n,d);
}
