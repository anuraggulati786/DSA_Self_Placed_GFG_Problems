#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n) {
	
	for(int i=1; i<n; i++) {
		for(int j=0; j<n-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap(arr[j],arr[j+1]);
			}
		}
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
	 
	 bubble_sort(arr,n);
	 
	
}
