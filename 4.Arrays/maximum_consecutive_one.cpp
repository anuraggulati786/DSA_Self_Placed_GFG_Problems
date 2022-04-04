#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void maximum_consecutive_one(int *arr , int n) {
	
	int res = 0;

	for(int i=0; i<n; i++) {
	   int curr = 0;
		for(int j=i; j<n; j++) {
			if(arr[j] == 1) {
				curr++;
			}
			if(arr[j] == 0) {
				break;
			}
			
		}
		res = max(curr,res);
		
	}
	
	cout<<"maximum consecutive ones is is = "<<res<<endl;
}

void optamized_maximum_consecutive_one(int *arr, int n) {
	          
	    int res = 0;
	    int curr_max = 0;
	    for(int i=0; i<n; i++) {
	    	
	    	if(arr[i] == 1) {
	    		curr_max++;
	    		res = max(res,curr_max);
			}
			if(arr[i] == 0) {
				curr_max = 0;
			}
		}
	    
	    cout<<"maximum consecutive ones is is = "<<res<<endl;
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
    maximum_consecutive_one(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_maximum_consecutive_one(arr,n);
}
