#include<bits/stdc++.h>
using namespace std;

void  all_subsets(string s ,string curr = " " , int i = 0) {
         
         if(i == s.length()) {
         	 cout<< s <<" ";
			 return;
		 }
		 
		  return all_subsets(s,curr, i++);
          return all_subsets(s,curr+s[i],i++);
          
}

int main() {
	string n;
	cout<<"enter the string :"<<endl;
	cin>>n;
	
   string curr = " ";

   all_subsets(n,curr,0);

}
