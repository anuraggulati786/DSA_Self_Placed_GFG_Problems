/*#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int largest_element_in_array(int *arr, int n) {
     
     int indx  = 0;
     for(int i=1;i<n; i++) {
     	if(arr[i] > arr[indx]) {
     		indx = i;
		 }
	 }
	 
	 return indx;
  
}


int second_largest_element(int *arr , int n) {
	
	int largest = largest_element_in_array(arr,n);
	
	int res  = -1;
	
	for(int i=0; i<n; i++) {
		
		if(arr[i] != arr[largest]) {
			
			if(res == -1) {
				res = i;
			}
			
			if(arr[i] > arr[res]) {
				res = i;
			}
			
		}
		
	}
	cout<<arr[res]<<endl;
	return res;
	
}


int main() { 
  
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    
    int *arr = new int[n];
    
    cout<<"enter the elements of the array :"<<endl;
    for(int i=0; i<n; i++) {
    	cin>>arr[i];
	}
    
    
   	int indx = second_largest_element(arr,n);
   	cout<<"largest element is at index :"<<indx;
	
}


*/

//###############################################################################################################################################


// OPTAMIOZED SOLUTION .......

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


int second_largest_element(int *arr , int n) {
	
	int largest = 0;
	int res  = -1;
	
	for(int i = 1; i < n; i++) {
		
		if(arr[i] > arr[largest]) {
			
			res = largest;
			largest = i;
			
		}
		
		else  if(arr[i] < arr[largest]) {
                
				if(res == -1 || arr[i] > res) {
					res = i;
				}			
		}
		
	}
	cout<<arr[res]<<endl;
	return res;
	
}


int main() { 
  
    int n;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    
    int *arr = new int[n];
    
    cout<<"enter the elements of the array :"<<endl;
    for(int i=0; i<n; i++) {
    	cin>>arr[i];
	}
    
    
   	int indx = second_largest_element(arr,n);
   	cout<<"largest element is at index :"<<indx;
	
}

