#include<iostream>
using namespace std;


int binary_search(int arr[] , int n, int key, int low , int high) {
	
	while(low <= high) {
		int mid = low + (high-low)/2;
		
		if(arr[mid] == key) {
			return mid;
		}
		else if(arr[mid] > key) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	
	return -1;
}



int search_in_infinite_sorted_array(int arr[] , int n, int key) {
	
	if(arr[0] == key) {
		return 0;
	}
	
	int index  = 1;
	while(arr[index] < key) {
		index = index * 2;
	}
	if(arr[index] == key) {
		return index;
	}
	else {
		return binary_search(arr , n , key , index/2 + 1  , index-1);
	}
	

	
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
	
	int key;
	cout<<"enter the key element :"<<endl;
	cin>>key;
	
	cout<<"index of the key element is = "<<search_in_infinite_sorted_array(arr,n,key);
	
	
}
