#include<iostream>
#include<unordered_set>
using namespace std;

class node {
	public :
		int data;
		node *next;
	// parameterised constructor 
	node(int value) {
		this -> data = value;
		this -> next = NULL;
	}	
};

void print_list(node* head) {
	node* curr = head;
	while(curr != NULL) {
		cout<<curr -> data <<" ";
		curr = curr -> next;
	}
}

void remove_duplicates(node* head) { // O(n^2) approach not efficient in term of the time .... constant space O(1) Space complexity..
	
	node* ptr1 = head;
	node* ptr2;
	node* dup;
 	
 	while(ptr1 != NULL && ptr1 -> next != NULL) {
 		ptr2 = ptr1;
 		while(ptr2 -> next != NULL) {
 			if(ptr1 -> data == ptr2 -> next -> data) {
 				dup = ptr2 -> next;
 				ptr2 -> next = ptr2 -> next -> next;
 				delete dup;
			 }
			 else {
			 	ptr2 = ptr2 -> next;
			 }
		 }
		 ptr1 = ptr1 -> next;
	 }
	
}

int main() { 
      
      node* head = new node(10);
      node* node1 = new node(15);
      node* node2 = new node(10);
      node* node3 = new node(16);
      node* node4 = new node(15);
      head  -> next = node1;
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      cout<<"Before list :"<<endl;
      print_list(head);
      remove_duplicates(head);
      cout<<endl;
      cout<<"After removal of duplicates :"<<endl;
      print_list(head);
    
}
