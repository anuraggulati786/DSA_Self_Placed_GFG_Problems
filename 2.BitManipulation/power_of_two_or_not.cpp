 #include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

// 1st iterative solution...
int power_of_2_or_not(int n) {
    // Write your code here.
    if(n == 0) {
    	return false;
	}
	int count = 0;
	while(n != 0) {
		if(n & 1 == 1) {
			count++;
		}
		n = n>>1;
	}
	if(count == 1) {
		return true;
	}
	else {
		return false;
	}
   
}

int main() { 
  
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
   cout<<power_of_2_or_not(n);
   
}
