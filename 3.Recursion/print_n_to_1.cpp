#include<bits/stdc++.h>
using namespace std;

void print_n_to_1(int n) {
	if(n == 0) {
		return;
	}
	
	else {
		cout<<n<<" ";
		return print_n_to_1(n-1);
	}
}


int main() {
	int n;
	cin>>n;
    print_n_to_1(n);
}
