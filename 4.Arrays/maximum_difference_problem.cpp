#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void maximum_difference(int *arr , int n) {
	
	int maxval = arr[1]-arr[0];
	for(int i=0; i<n; i++) { 
	    for(int j=1+i; j<n; j++) {
		  maxval = max(arr[j]-arr[i],maxval);
	 }
   }
   cout<<"maximum difference is = :"<<maxval;
}

void optamized_maximum_difference(int *arr, int n) {
	          
	    int min_val = arr[0];
		int res = arr[1] - arr[0];
		
		for(int i=1; i<n; i++) {
			res = max(res,arr[i]- min_val);
			min_val = min(min_val,arr[i]); 
		}       
	   
	   cout<<"maximum difference is =:" <<   res   <<endl;    
	
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
    maximum_difference(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_maximum_difference(arr,n);
}
