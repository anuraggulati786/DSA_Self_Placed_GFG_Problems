#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int gcd(int a, int b) {
     
     if(a == b) {
     	return a;
	 }
	 if(a%b == 0) {
	 	return b;
	 }
	 if(b%a == 0) {
	 	return a;
	 }
	 
	 while(a != b) {
	 	if( a > b) {
	 		a = a-b;
		 }
		 else {
		 	b = b-a;
		 }
	 }
	 return b;

}

int lcm(int a , int b) {
	
	return (a*b) / gcd(a,b);
	
}


int main() { 
  
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
   	cout<<lcm(n1, n2);
	
}
