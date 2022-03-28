#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void check_kth_bit_is_set_or_not(int n, int k) {
    // Write your code here.
    
   int mask = 1<<k-1;
   
   if(mask & n) {
   	cout<<k<<" th bit is set in this number "<<endl;
   }
   else {
   	cout<<k<<" th bit is unset in this number "<<endl;
   }
   
}


int main() { 
  
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int k;
    cout<<"enter k "<<endl;
    cin>>k;
    
   check_kth_bit_is_set_or_not(n, k);
	
}
