#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int clear_kth_bit(int n, int k) {
    // Write your code here.
    int mask = 1<<k-1;
    mask = ~ mask;
    int res  = n & mask;
    return res;
   
}


int main() { 
  
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int k;
    cout<<"enter k "<<endl;
    cin>>k;
    
   	cout<<clear_kth_bit(n, k);
	
}
