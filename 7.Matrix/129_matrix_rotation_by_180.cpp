#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(int mat[][3])
{  /*
 // time complexity is O(RxC)...
 // space complexity is O(N).......
int tempMat[3][3];
   int N = 3;

cout<<"our 180 degree rotated matrix will be :"<<endl;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			 tempMat[i][j]  = mat[N-i-1][N-j-1];	
     }

	}
	
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			mat[i][j] = tempMat[i][j];
		}
		cout<<endl;
	}

		for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
*/
	
	
	
	for(int i=0; i<=2; i++) {
		int low = 0,high = 2;
		while(low < high) {
			swap(mat[low][i],mat[high][i]);
			low++;
			high--;
			
		}
	}
	
	for(int i=0; i<=2; i++) {
		int low = 0,high = 2;
		while(low < high) {
			swap(mat[i][low],mat[i][high]);
			low++;
			high--;
			
		}
	}
	
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	
}
}

int main()
{
	int arr1[3][3] ;
	cout<<"enter the element of the matrix 1"<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cin>>arr1[i][j];
		}
	}
	cout<<"our entered matrix 1 will be look like "<<endl;
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=2; j++) {
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

	rotateMatrix(arr1);
	return 0;
}

