#include<iostream>
using namespace std;

int find_left_most_element(int arr[] , int n, int key) {
	
	int s = 0, e = n-1; 
	while(s <= e) {
	
	int mid = s + (e-s)/2;
	
	if(arr[mid] > key) {
		e = mid - 1;
	}
	else if(arr[mid] < key) {
		s = mid + 1;
	}
	
	else {
		
		if(mid == 0 || arr[mid] != arr[mid-1]) {
			return mid;
		}
		
		else {
			e = mid - 1;
		}
		
	}
}

	return -1;
}


int count_occurences_of_1_in_binary_array(int arr[] , int n, int key) {
	
	int occurences = 0;
	int first_index = find_left_most_element(arr,n,key);
	
	if(first_index == -1) {
		return -1;
	}
	else {
		occurences = n - first_index;
		return occurences;
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
	
	int key = 1;
	
	cout<<"index of the key element is = "<<count_occurences_of_1_in_binary_array(arr,n,key);
	
	
}
