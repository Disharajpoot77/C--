#include<iostream>
#include<map>

using namespace std;
int main(){
	// input linked list
	int n;
	cin>>n;
	int data;
	cin>>data;
	 map<ListNode*,int>mpp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return true;
            } 
            mpp[temp]=1;
            temp=temp->next;
        }
	
}