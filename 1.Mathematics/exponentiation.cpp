#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int  exponentiation(int n , int x) {
     
    if(x == 0) {
    	return 1;
	}
       
    int res = exponentiation(n, x/2);
    
    res = res * res;
    
    if(x%2 == 0) {
    	return res;
	}
	else {
		return res * n;
	}
    
}

int main() { 
  
    int n;// base
    cin>>n;
    int x;//power
    cin>>x;
   	cout<<exponentiation(n,x);
	
}
