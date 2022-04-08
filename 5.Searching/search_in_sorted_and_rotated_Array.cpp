#include<iostream>
using namespace std;


int key_index_in_sorted_rotated_Array_is(int arr[] , int n, int key) {
	
	int low = 0;
	int high = n-1;
	
	while(low <= high) {
		
		int mid = low + (high-low)/2;
		
		
		if(arr[mid] == key) {
			return mid;
		}
		// left part sorted haio bhai .....
		else if(arr[mid] > arr[low]) {
			
			if(key >= arr[low] && key < arr[mid]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
			
		}
		// else right part is sorted ...
		else {
			if(key > arr[mid] && key <= arr[high]) {
				low = mid + 1; 
			}
			else {
				high = mid - 1;
			}
		}
	
	}
	
return -1;	
}



int main() {
	
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	
	int arr[n];
	cout<<"enter the elements of the array :"<<endl;
	for(int i = 0; i<n; i++) {
		cin>>arr[i];
	}
	
	int key ;
	cout<<"enter the key element :"<<endl;
	cin>>key;
	
	cout<<"index of the key element is = "<<key_index_in_sorted_rotated_Array_is(arr,n,key);
	
	
}
