#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;


// naive approach to solve this is traverse from 0 to n-1 ;
// and see that ith index element present before the ith index in array if it is present skip ith index if not then search in righ t half and count ith index how many times it is present and print that ith index alonmg with coun t::...
void frequency_of_element(int *arr, int n) {
	
	int res = 0;
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
			
			cout<<arr[i] <<" - "<<count<<endl;
			
		}	
		
	}
	
}


// optamized approach ...

int distinct_element(int *arr, int n) {
	  
	  // logic hai bhai unordered_map mai element or count maintain karlo fir print with count .. simple...
	  
	  unordered_map <int,int> ump;
	  
	  for (int i = 0; i < n; i++)
        ump[arr[i]]++;
	  
      for(auto x : ump) {
      	cout<<x.first <<" "<<x.second<<endl;
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
	
	cout<<"distinct elements in our array is :"<<endl;
	frequency_of_element(arr,n);
	
}
