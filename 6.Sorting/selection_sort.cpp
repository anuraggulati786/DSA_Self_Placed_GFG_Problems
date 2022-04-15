#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n) {
	
	for(int i=0; i<n-1; i++) {
		int min_index = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
	
	cout<<"sprted array :"<<endl;
	 for(int i=0; i<n; i++) {
	 	cout<<arr[i]<<" ";
	 }
}



int main() {
	
	int n;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the elements inside the array :"<<endl;
	for(int i=0; i<n; i++)
   {
 	cin>>arr[i];
	 }	
	 
	 selection_sort(arr,n);
	 
	
}
