#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


// 1st iterative solution...
int count_set_bits_in_number1(int n) {
    // Write your code here.
    int count = 0;
    while(n != 0) {
    	if(n&1 == 1) {
    		count++;
		}
		n = n>>1;
	}
	return count;
   
}

// 2nd approach using inbuilt fxn...

int count_set_bits_in_number2(int n) {
    // Write your code here.
    
	return __builtin_popcount(n);
   
}

// 3rd approach using brian karningham method...

int count_set_bits_in_number3(int n) {
    // Write your code here.
    
    int count = 0;
    while(n != 0) {
    	n = n&(n-1);
    	count++;
	}
	return count;
   
}



int main() { 
  
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
   cout<<count_set_bits_in_number1(n);
   cout<<endl;
   cout<<count_set_bits_in_number2(n);
   cout<<endl;
   cout<<count_set_bits_in_number3(n); // most optamized .. 
   cout<<endl;	
}
