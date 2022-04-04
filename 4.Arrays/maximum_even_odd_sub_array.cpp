#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void maximum_consecutive_even_odd(int *arr , int n) {
	
	int res = 1;
	for(int i=0; i<n; i++) {
		int curr_len = 1;
	   
		for(int j=i+1; j<n; j++) {
			if((arr[j]%2 == 0 && arr[j-1]%2 != 0) ||(arr[j]%2 != 0 && arr[j-1]%2 == 0) ) {
				curr_len++;
			}
			else {
				break;
			}
		}
		res = max(curr_len,res);
		
	}
	
	cout<<"maximum even_odd_subarray is = "<<res<<endl;
}

void optamized_maximum_consecutive_even_odd(int *arr, int n) {
	          
	    int res = 1;
	    int curr_sum = 1;
	    for(int j=1; j<n; j++) {
	    	if((arr[j]%2 == 0 && arr[j-1]%2 != 0) ||(arr[j]%2 != 0 && arr[j-1]%2 == 0) ) {
				curr_sum++;
				res = max(res,curr_sum);
			}
			else {
				curr_sum = 1;
			}
		}
	    
	    cout<<"maximum even_odd_subarray is = "<<res<<endl;
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
    maximum_consecutive_even_odd(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_maximum_consecutive_even_odd(arr,n);
}
