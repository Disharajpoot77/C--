 ListNode* findLast(ListNode* temp,int k){
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k) return temp;
        cnt++;
        temp=temp->next;

    }
    return temp;
 }
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL && k==0) return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next!=NULL){
            len+=1;
            tail=tail->next;
        }

        if(k%len==0) return head;
        k=k%len;
        tail->next=head;
        ListNode* newLast=findLast(head,len-k);

        head=newLast->next;
        newLast->next=NULL;
        return head;
    }
};