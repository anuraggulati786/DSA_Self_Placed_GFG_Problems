#include<bits/stdc++.h>
using namespace std;

void  tower_of_hanoi(int a , char A, char B, char C) {

	if(a == 1) {
		cout<<"Move 1 from "<<A<<" to"<<C<<endl;
	}
	
	else {
		tower_of_hanoi(a-1, A,C,B);
		cout<<"Move "<<a<<" from "<<A<<" to"<<C<<endl;
		tower_of_hanoi(a-1, B,A,C);
	}

	}


int main() {
	int a;
	cout<<"enter the discs :"<<endl;
	cin>>a;
	
   cout<<"Path is = ";
   char A = 'A';
   char B = 'B';
   char C = 'C';
   tower_of_hanoi(a,A,B,C);

}
