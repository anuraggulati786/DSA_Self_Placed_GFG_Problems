#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void sieve_of_erathosthenes(int n) {
     
    vector<bool> p(n+1, true);
    for(int i=2; i*i <= n; i++) {
    	if(p[i]) {
    		for(int j=i*2; j<=n; j+=i) {
    			p[j] = false;
			}
		}
	}
	
	for(int i=2; i<= n; i++) {
		if(p[i]) {
			cout<<i<<" ";
		}
	}
}



int main() { 
  
    int n;
    cin>>n;
   	sieve_of_erathosthenes(n);
	
}
