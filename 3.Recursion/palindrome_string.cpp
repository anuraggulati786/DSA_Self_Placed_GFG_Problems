#include<bits/stdc++.h>
using namespace std;

bool  palindrome(string n , int s , int e) {

	if(s >= e) {
		return true;
	}
	else {	
	
	return  ((n[s] == n[e]) && palindrome(n,s+1,e-1)) ;

	}
}


int main() {
	string n;
	cout<<"enter the string :"<<endl;
	cin>>n;
   cout<<palindrome(n ,0 ,n.length() -1);

}
