#include<bits/stdc++.h>
using namespace std;

int  factorial_of_number(int n , int fact) {
	
	if(n == 0) {
		return fact ;
	}
	
	else {	
	
	fact = fact * n;
	return  factorial_of_number( n-1 , fact);
	}
}


int main() {
	int n;
	cin>>n;
    cout<<factorial_of_number(n,1);
}
