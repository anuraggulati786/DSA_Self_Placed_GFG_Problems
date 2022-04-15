#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n) {
	
	for(int i=1; i<n; i++) {
		int temp = arr[i];
		int j;
		for(j=i-1; j>=0; j--) {
			
			if(arr[j] > temp) {
				arr[j+1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j+1] = temp;
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
	 
	 insertion_sort(arr,n);
	 
	
}
