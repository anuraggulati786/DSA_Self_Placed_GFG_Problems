#include<bits/stdc++.h>
using namespace std;

int  rope_cutting(int n ,int a, int b, int c) {
         
         if(n == 0) {
         	return 0;
		 }
		 if(n < 0) {
		 	return -1;
		 }
		 
		 int res = max(rope_cutting(n-a,a,b,c),rope_cutting(n-b,a,b,c),rope_cutting(n-c,a,b,c));
		 
		 if(res == -1) {
		 	return -1;
		 }
		 else {
		 	return res+1;
		 }

}

int main() {
	int n;
	cout<<"enter the length of the rope :"<<endl;
	cin>>n;
	
   int a,b,c;
   cout<<"enter a , b , c "<<endl;
   cin>>a>>b>>c;
   cout<<rope_cutting(n,a,b,c);

}
