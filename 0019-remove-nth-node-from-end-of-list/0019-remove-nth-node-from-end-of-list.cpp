/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
          
            return NULL;
        }
        
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(n==count){
            ListNode* newhead=head->next;
            delete head;
            return newhead;
        }
        int k=count-n;
        ListNode* prev=NULL;
        ListNode* temp1=head;
        while(k!=0){
            prev=temp1;
            temp1=temp1->next;
            k--;
        }
       
        prev->next=temp1->next;
        delete temp1;
        return head;
        
    }
};