#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void palindrome_numbers(int n) {
	int orig = n;
	int rev = 0;
	while(n!=0) {
		int rem = n%10;
		n = n/10;
		rev = rev * 10 + rem;
	}

	if(orig == rev) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}

}

int main() { 
  
    int n;
    cin>>n;
   	palindrome_numbers(n);
	
}
