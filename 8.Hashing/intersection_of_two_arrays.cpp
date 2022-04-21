#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

/*
// naive approach to solve this is traverse from 0 to n-1 ;
// and see that ith index element present before the ith index in array if it is present skip ith index if not then search in second array  and count ith index how many times it is present and print that ith index alonmg with coun t::...
int intersection_of_two_Array(int *arr1,int *arr2 ,int n1,int n2) {
	
	int res = 0;
	for(int i=0; i<n1; i++) {
	    // time complexity hai bhai O(n1*(n1*n2))...
		                        
		bool flag = false;
		
		for(int j=0; j<i; j++) {
			if(arr1[j] == arr1[i]) {
				flag = true;
				break;
			}
		}
		
		if(flag == true) {
			continue;
		}
		else {
			
			for(int j=0; j<n2; j++) {
				
				if(arr1[i] == arr2[j]) {
					res++;
					break;
				}
			}			
		}	
		
	}
	
	return res;
	
}

*/
// optamized approach ...

int intersection_of_two_Array(int *arr1,int arr2,int n1, int n2) {
	  
	  // logic hai bhai unordered_map mai element or count maintain karlo fir print with count .. simple...
	  
	  unordered_set <int> us;
	  
	  for (int i = 0; i < n1; i++)
          us.insert(arr1[i]);
          
          
	  int res = 0;
	  
	  
      for(int i=0; i<n2;i++) {
      	if(us.find[arr2[i]] != us.end()) {
      		res++;
      		us.erase(arr2[i]);
		  }
	  }
	  return res;
}






int main() {
	
	int n1;
	cout<<"eneter the size of the array :"<<endl;
	cin>>n1;
	int arr1[n1];
	cout<<"enter the el;ements of the array:"<<endl;
	for(int i=0; i<n1; i++) {
		cin>>arr1[i];
	}
	
	int n2;
	cout<<"eneter the size oif the array :"<<endl;
	cin>>n2;
	int arr2[n2];
	cout<<"enter the el;ements of the array:"<<endl;
	for(int i=0; i<n2; i++) {
		cin>>arr2[i];
	}
	
	
	
	cout<<"intersection of two arrays is :"<<endl;
	cout<<intersection_of_two_Array(arr1,arr2,n1,n2);
	
}
