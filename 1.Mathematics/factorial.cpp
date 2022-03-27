#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void factorial(int n) {
     
     int res = 1;
     for(int i=n; i>=1; i--) {
     	res = res * i;
	 }
	 cout<<res<<endl;

}

int main() { 
  
    int n;
    cin>>n;
   	factorial(n);
	
}
