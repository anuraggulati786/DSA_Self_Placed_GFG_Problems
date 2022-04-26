#include<bits/stdc++.h>
using namespace std; 
                       
void search_in_2d_matrix_using_binary_search_method(vector<vector<int>> &arr, int rows , int cols, int key) {      
	
	// we will grap the right most element of upeer side of the matrix and then start our intution right...
	
	int row = 0;
	int col = cols-1;// beacuse of zero based indexing .....

	while(row <= rows && col >= 0) {
		
		if(arr[row][col] == key) {
			cout<<"Found the element !"<<endl;
			return;
		}
		else if( arr[row][col] > key) {
			col--;
		}
		else {
			row++;
		}
		
	}
	
	cout<<"Not found !"<<endl;

}

int main() {
	// 2d matrix 
	vector<vector<int>> arr;
	
	int rows,cols;
	cout<<"enter rpws and columns"<<endl;
	cin>>rows>>cols;
	
	cout<<"enter the element of the matrix "<<endl;
	for(int i=0; i<rows; i++) {
		vector<int> v;
		for(int j=0; j<cols; j++) {
			int t;
			cin>>t;
			v.push_back(t);
		}
		arr.push_back(v);
	}
	int key;
	cout<<"Enter key element to search in matrix : "<<endl;
	cin>>key;
	cout<<"our entered matrix will be look like "<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	search_in_2d_matrix_using_binary_search_method(arr, rows , cols,key);    
}
