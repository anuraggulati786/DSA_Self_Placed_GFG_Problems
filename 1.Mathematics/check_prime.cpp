#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void check_for_prime(int a) {
     
    if(a == 1) {
    	cout<<"Not Prime"<<endl;
	}
	if(a == 2 || a == 3) {
		cout<<"Prime Number"<<endl;
	}
	
	if(a % 2 == 0 || a % 3 == 0) {
		cout<<"Not Prime"<<endl;
	}
	else {
	for(int i = 5; i*i <= a; i+= 6) {
		if(a%i == 0 || a%(i+2) == 0) {
			cout<<"Not Prime"<<endl;
		}
	}
cout<<"Prime Number"<<endl;
}
}



int main() { 
  
    int n;
    cin>>n;
   	check_for_prime(n);
	
}
