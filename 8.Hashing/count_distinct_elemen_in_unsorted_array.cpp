#include<iostream>
#include<unordered_set>
using namespace std;

/*
// naive approach to solve this is traverse from 0 to n-1 ;
// and see thia ith index element present before the ith index in array if it is present skip itnh index if not increase result and print that ith index::...
int distinct_element(int *arr, int n) {
	
	int res = 0;
	for(int i=0; i<n; i++) {
		                        // time complexity hai bhai O(n^2)...
		                        
		bool flag = false;
		
		for(int j=0; j<i; j++) {
			if(arr[j] == arr[i]) {
				flag = true;
				break;
			}
		}
		
		if(flag == false) {
			res++;
		}	
		
	}
	
	
	return res;
}
*/

// optamized approach ...

int distinct_element(int *arr, int n) {
	  
	  // logic hai bhai unordered_set mai unique element aate hai sirf toh sare array ke elements insert kardo unordered_set mai...
	  
	  unordered_set <int> uns;
	  
	  for(int i=0; i<n; i++) {
	  	uns.insert(arr[i]);
	  }
	  
      return uns.size();
}






int main() {
	int n;
	cout<<"eneter the size oif the array :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the el;ements of the array:"<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	
	cout<<"distinct elements in our array is :"<<distinct_element(arr,n);
	
}
