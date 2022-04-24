#include<bits/stdc++.h>
using namespace std;                        
void boundary_traversal(int arr[][3]) { 
  
cout<<"Our boundary traversal matrix contains only these element :"<<endl;   
// time complexity is O(RxC)..........

/*	for(int i= 0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			if(i==0 || j==0 || i ==2 || j == 2) {
				cout<<arr[i][j]<<" ";
			}
			else {
				cout<<" "<<" ";
			}
		}
		cout<<endl;
	}

    
   */ 
    // second solution .... not in form of matrix 
    // time complexity is O(R+C)>>>...........
    int n = 3;
    // 1st we proint first row ...
    
    for(int col=0; col<=n-1; col++) {
    	cout<<arr[0][col]<<" ";
	}
    
    // last column 
    
    for(int row=1; row<=n-1; row++) {
    	cout<<arr[row][n-1]<<" ";
	}
	
	// last row 
	
	for(int col = n-2; col>=0; col--) {
		cout<<arr[n-1][col]<<" ";
	}
	
	// forst column 
	
	for(int row = n-2; row>=1; row--) {
		cout<<arr[row][0]<<" ";
	}




}
int main() {
	int arr[3][3] ;
	cout<<"enter the element of the matrix "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cin>>arr[i][j];
		}
	}
	cout<<"our entered matrix will be look like "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	boundary_traversal(arr);    
}
