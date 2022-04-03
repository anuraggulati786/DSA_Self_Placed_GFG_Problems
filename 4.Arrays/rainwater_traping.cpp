#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void traping_railwater(int *arr , int n) {
	
	int res = 0;
	for(int i=1; i<n-1; i++) {
		
		int lmax = arr[i];
		for(int j=0; j<i; j++) {
			lmax = max(arr[j],lmax);
		}
		
		int rmax  =arr[i];
		for(int j = i+1; j<n; j++) {
			rmax  = max(rmax,arr[j]);
		}
		
		res = res + (min(rmax,lmax) - arr[i]);
		
	}
	
	cout<<"maximum water we can traped is = "<<res<<endl;
}

void optamized_traping_railwater(int *arr, int n) {
	          
	    int res = 0;
	    int lmax[n];
	    int rmax[n];
	    
	    lmax[0] = arr[0];
	    
	    for(int i=1; i<n; i++) {
	    	lmax[i] = max(arr[i],lmax[i-1]);
		}
		
		rmax[n-1] = arr[n-1];
	    
	    for(int i=n-2; i>=0; i--) {
	    	rmax[i] = max(arr[i],lmax[i+1]);
		}
		
	    for(int i=1; i<n-1; i++) {
	    	res = res + (min(lmax[i],rmax[i]) - arr[i]);
		}
		
		cout<<"maximum water we can traped is = "<<res<<endl;
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
    traping_railwater(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_traping_railwater(arr,n);
}
