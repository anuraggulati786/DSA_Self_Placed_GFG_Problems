#include<iostream>
using namespace std;

int square_root_of_a_number(int key) {
	
	int low = 1;
	int high = key;
	
	int ans  = -1;
	
	while(low <= high) {
		
		int mid = low + (high-low)/2;
		
	int	mid_square = mid * mid;
		
		if(mid_square == key) {
			return mid;
		}
		else if(mid_square > key) {
			high = mid-1;
		}
		else {
			ans = mid;
			low = mid + 1;
		}
		
	}

	return ans;
}



int main() {

	int key;
	cout<<"enter the key element :"<<endl;
	cin>>key;
	
	cout<<"square root of key element is = "<<square_root_of_a_number(key);
	
	
}
