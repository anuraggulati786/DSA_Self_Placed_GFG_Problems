#include<bits/stdc++.h>
using namespace std;

void print_1_to_n(int n , int k) {
	if(n == 0) {
		return;
	}
	
	else {

		cout<<k<<" ";
		return print_1_to_n(n-1 , k+1);
	}
}


int main() {
	int n;
	cin>>n;
    print_1_to_n(n,1);
}
