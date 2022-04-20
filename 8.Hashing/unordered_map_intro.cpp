#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	
	unordered_map<int,int> ump;
	// insert key value pair in it ...
	
	ump[3] = 1;
	ump[4] = 1;
	ump[5] = 55;
	// printing out map key value...
	for(auto it : ump) {
		cout<<"key is "<<it.first<<" "<<"and"<<" "<<"value is : "<<it.second<<endl;
	}
	
	
	// find an element it unordered map
	
	if(ump.find(4) != ump.end()) {
		cout<<"we found that element !"<<endl;
	}
	else {
		cout<<"we did not found !!"<<endl;
	}
	
	
	// printing the value corrosponding to the given element ...
	
	auto it = ump.find(5);
	if(it != ump.end())
	cout<<it -> second<<" "<<endl;
	
	
	for(auto it = ump.begin(); it != ump.end(); it++) {
		cout<<it -> first <<" "<< it -> second<<endl;
	}
	
	cout<<"size is = "<<ump.size()<<endl;
	
	
	
}
