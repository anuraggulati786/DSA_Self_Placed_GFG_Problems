#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;


// naive approach to solve this is traverse from 0 to n-1 ;
// and see that ith index element present before the ith index in array if it is present skip ith index if not then search in righ t half and count ith index how many times it is present and print that ith index alonmg with coun t::...
void more_than_n_by_k(int *arr, int n,int k) {
	
	
	for(int i=0; i<n; i++) {
		int count = 1;                      // time complexity hai bhai O(n^2)...
		                        
		bool flag = false;
		
		for(int j=0; j<i; j++) {
			if(arr[j] == arr[i]) {
				flag = true;
				break;
			}
		}
		
		if(flag == true) {
			continue;
		}
		else {
			
			for(int j=i+1; j<n; j++) {
				
				if(arr[i] == arr[j]) {
					count++;
				}
			}
			
			
			if(count > k)
			cout<<arr[i] <<" - "<<count<<endl;
			
		}	
		
	}
	
}


// a little optamized approach ... in O(N LOG N)>>>>>.... <<<< Using Sorting >>>>>

int optamized_more_than_n_by_k(int *arr, int n, int k) {
	  
	 sort(arr,arr+n);
	 
	// Traverse the array
    for (int i = 0; i < n;) {
 
        // Stores frequency of arr[i]
        int cnt = 1;
 
        // Traverse array elements which
        // is equal to arr[i]
        while ((i + 1) < n && arr[i] == arr[i + 1]) {
 
            // Update cnt
            cnt++;
 
            // Update i
            i++;
        }
 
        // If frequency of arr[i] is
        // greater than (N / K)
        if (cnt > (n / k)) {
        	
            cout << arr[i] << " "<<endl;
            
        }
        i++;
    }
	 
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
	int k;
	cin>>k;
	cout<<"enter the value of k:"<<endl;
	k = n/k;
	cout<<"Naive call :"<<endl;
	
	more_than_n_by_k(arr,n,k);
	
	cout<<"Optamized call :"<<endl;
	
	optamized_more_than_n_by_k(arr,n,k);

}
