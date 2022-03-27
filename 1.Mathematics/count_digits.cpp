#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void count_digits(int n) {
	
	int len = 0;
	while(n!=0) {
		n = n/10;
		len++;
	}

	cout<<len<<endl;

}


int main() { 
  
    int n;
    cin>>n;
   	count_digits(n);
	
}
