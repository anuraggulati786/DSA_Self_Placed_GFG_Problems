#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void swap(int n, int k) {
    // Write your code here.
    
    n = n^k;
    k = n^k;
    n = n^k;
    
    cout<<"value after swap is = "<<n<<" "<<k<<endl;
   
}


int main() { 
  
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int k;
    cout<<"enter k "<<endl;
    cin>>k;
    
   swap(n, k);
	
}
