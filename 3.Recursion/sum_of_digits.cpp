#include<bits/stdc++.h>
using namespace std;

int  sum_of_digits(int n , int sum ) {
	
	if(n == 0) {
		return sum ;
	}
	
	else {	
	int p = n/10;	
	sum = sum + n%10;
	return  sum_of_digits( p , sum );
	}
}


int main() {
	int n;
	cin>>n;
    cout<<sum_of_digits(n,0);
}
