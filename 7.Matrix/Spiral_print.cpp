#include<bits/stdc++.h>
using namespace std; 
                       
void spiral_print(vector<vector<int>> &arr, int rows , int cols) {      
	
	int top_row = 0;
	int bottom_row = rows-1;
	int left_col = 0; 
	int right_col = cols-1;
	
	cout<<"Spiral print will be look like :"<<endl;
	while(top_row <= bottom_row && left_col <= right_col) {
		
		// now we print first row from left to right right and after it increase top as top++...
		for(int i = left_col; i<= right_col; i++) {
			cout<<arr[top_row][i]<<" ";
		}
		//increase top as top++;
		top_row++;
		
		// print last column from top_row to bottom_row..after it decrease right_col by 1 ...
		
		for(int i = top_row; i<= bottom_row; i++) {
			cout<<arr[i][right_col]<<" ";
		}
		right_col--;
		
		// now print last row from right_col to left_col in reverse order...
		
		for(int i = right_col; i >= left_col; i--) {
			cout<<arr[bottom_row][i]<<" ";
		}
		// decrerase bottom_row
		bottom_row--;
		
		// nbow we print first row from bottom_row to top_row..
		
		for(int i = bottom_row; i >= top_row; i--) {
			cout<<arr[i][left_col]<<" ";
		}
		left_col++;
		
	} 

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
	cout<<"our entered matrix will be look like "<<endl;
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	spiral_print(arr, rows , cols);    
}
