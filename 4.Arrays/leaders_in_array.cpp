#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void leaders(int *arr , int n) {
	for(int i=0; i<n; i++) {
		bool res = true;
		for(int j=i+1; j<n ; j++) {
			if(arr[j] > arr[i]) {
				res = false;
				break;
			}
		}
		if(res == true) {
			cout<<arr[i]<<" ";
			
		}
	}

}

void optamized_leaders(int *arr, int n) {
	

 int temp = arr[n-1];
 cout<<temp<<" ";
 vector<int> res;
 for(int i=n-2; i>=0; i--) {
 	
 	if(arr[i] > temp) {
 		res.push_back(arr[i]);
 		temp = arr[i];
	 }
 }
 reverse(res.begin(),res.end());
 for(int i=0; i<res.size(); i++) {
 	cout<<res[i]<<" ";
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
    leaders(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_leaders(arr,n);
}
