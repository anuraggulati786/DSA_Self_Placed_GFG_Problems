#include<bits/stdc++.h>
using namespace std;

int  fibonacci(int n) {
	// fibonacci series is 0 1 1 2 3 5 8 ....
	if(n == 1) {
		return 0 ;
	}
	if(n == 2) {
		return 1;
	}
	
	else {	
	
	return  fibonacci(n-1) + fibonacci(n-2) ;

	}
}


int main() {
	int n;
	cout<<"enter the terms up to where you want fibonacci series :"<<endl;
	cin>>n;
   for(int i=1; i<=n; i++) 
   {
   
   cout<<fibonacci(i) <<" ";
    }
}
