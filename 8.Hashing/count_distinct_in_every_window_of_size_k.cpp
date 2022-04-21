// An efficient C++ program to
// count distinct elements in
// every window of size k
#include <iostream>
#include <unordered_map>
using namespace std;


// naive approach 

void print_distinct_in_every_window(int *arr, int n, int k) {
	
	
	for(int i=0; i<=n-k; i++) {
		
		int count = 0;
		for(int j=0; j<k; j++) {
			
			bool flag = false;
			
			   for(int p= 0; p<j; p++) {
			   	
			   	if(arr[i+j] == arr[i+p]) {
			   		flag = true;
			   		break;
				   }
			   } 
			if(flag == false) {
				count++;
			}
			
		}
		
		cout<<count<<endl;
	}
	
	
	
	
	
}








// optamized approach...  time complexity O(N) and ....
// auxillary space is O(K)....
void countDistinct(int arr[], int k, int n)
{
	// Creates an empty hashmap hm
	unordered_map<int, int> hm;

	// initialize distinct element count for current window
	int dist_count = 0;

	// Traverse the first window and store count
	// of every element in hash map
	for (int i = 0; i < k; i++) {
		if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]] += 1;
	}

	// Print count of first window
	cout << dist_count << endl;

	// Traverse through the remaining array
	for (int i = k; i < n; i++) {
		// Remove first element of previous window
		// If there was only one occurrence, then reduce distinct count.
		if (hm[arr[i - k]] == 1) {
			dist_count--;
		}
		// reduce count of the removed element
		hm[arr[i - k]] -= 1;

		// Add new element of current window
		// If this element appears first time,
		// increment distinct element count

		if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]] += 1;

		// Print count of current window
		cout << dist_count << endl;
	}
}

int main()
{
	int arr[] = { 1, 2, 1, 3, 4, 2, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	cout<<"optamized call :"<<endl;
	countDistinct(arr, k, size);
	cout<<"naive call :"<<endl;
    print_distinct_in_every_window(arr,size,k);
	return 0;
}
// This solution is contributed by Aditya Goel

