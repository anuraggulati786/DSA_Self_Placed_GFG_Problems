#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// naive approach...
void stock_buy_and_sell(int *arr , int n) {
}

void optamized_stock_buy_and_sell(int *arr, int n) {
	          
	    int profit  = 0;
	    for(int i=1; i<n; i++)  {
	    	if(arr[i] > arr[i-1]) {
	    		profit = profit + arr[i] - arr[i-1];
			}
		}
	    
	    cout<<"maximum profit is = "<<profit<<endl;
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
    stock_buy_and_sell(arr,n);
    cout<<endl;
   	cout<<"Call for optamized approach :"<<endl;
	optamized_stock_buy_and_sell(arr,n);
}
