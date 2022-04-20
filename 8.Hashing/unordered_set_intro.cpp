#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
	
	unordered_set<int> uns;
	uns.insert(10);
	uns.insert(20);
	uns.insert(30);
	uns.insert(40);
	uns.insert(50);
	// copy does not create inside it...
	uns.insert(10);
	// for printing the elements inside the set...
	cout<<"elements inside is ="<<" ";
	for(auto it = uns.begin(); it != uns.end(); it++) {
		cout<<*it<<" ";
	}
	cout<<endl;
	// size()....
	cout<<"Size is = "<<uns.size()<<endl;
	
	// find an element inside it present or not .....
	
	if(uns.find(50) != uns.end()) {
		cout<<"We fount the element !"<<endl;
	}
	else {
		cout<<"not found !!"<<endl;
	}
	
	// finding an element not present 
	if(uns.find(99) != uns.end()) {
		cout<<"We fount the element !"<<endl;
	}
	else {
		cout<<"not found !!"<<endl;
	}
	// for accessing that particular element ......
	cout<<*(uns.find(50))<<endl;
	
	
	// if we want to erase the element 50.....
	
	cout<<"erase ! "<<endl;
	uns.erase(50);
	
	cout<<"after erasing 50 :"<<endl;
	cout<<"elements inside is ="<<" ";
	for(auto it = uns.begin(); it != uns.end(); it++) {
		cout<<*it<<" ";
	}
	
	
	
	
}
