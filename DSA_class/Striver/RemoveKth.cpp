#include<iostream>
using namespace std;
int main(){
	int head,n;
	cin>>head>>n;
        Node* fast=head;
        Node* slow=head;
        for(int i=0; i<n; i++) fast= fast->next;
         if(fast==NULL){
             return head->next;
          }
      while(fast->next!=NULL){
        fast=fast->next;
         slow=slow->next;
            }
      ListNode* del=slow->next;
     slow->next=slow->next->next;
      delete del;
      return head;
	
}