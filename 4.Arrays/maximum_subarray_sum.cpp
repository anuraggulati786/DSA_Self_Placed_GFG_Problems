#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void maximum_subarray_sum(int *arr , int n) {
	
	int res = 0;
	for(int i=0; i<n; i++) {
	   int curr = 0;
		for(int j=i; j<n; j++) {
			curr = curr+arr[j];
			res = max(res,curr);
		}
		res = max(curr,res);
		
	}
	
	cout<<"maximum subarray sum is = "<<res<<endl;
}

void optamized_maximum_subarray_sum(int *arr, int n) {
	          
	    int res = 0;
	    int curr_sum = 0;
	    for(int i=0; i<n; i++) {
	    	curr_sum = curr_sum+arr[i];
	    	if(curr_sum > res) {
	    		res = curr_sum;
			}
			
			if(curr_sum < 0) {
				curr_sum = 0;
			}
		}
	    
	    cout<<"maximum subarray sum is = "<<res<<endl;
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
    maximum_subarray_sum(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_maximum_subarray_sum(arr,n);
}
