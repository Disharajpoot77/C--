#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;

    
	Node(int val){
		data=val;
		next=NULL;
	}

};

  void insert(Node* &head, int val){
	Node* newNode= new Node(val);
	Node* temp=head;
 	
	while(temp!=NULL){
		temp=temp->next;	

	}
	temp->next=newNode;
  }
  void display(Node* &head){
	Node* temp=head;
	cout<<"Linked List: "; 
	while(temp!=NULL){
		cout << temp->data <<" " ;
		temp=temp->next;
	}
  }



int main(){
	Node* LL=NULL;
	insert(LL,2);
	insert(LL,10);
	insert(LL,12);
	insert(LL,24);
    insert(LL,18);
	// display(LL);

	return 0;
}

