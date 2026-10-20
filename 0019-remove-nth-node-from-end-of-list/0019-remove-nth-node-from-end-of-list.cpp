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
        if(head->next==NULL&&n==1){
            head=NULL;
            return head;

        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(n!=1){
            fast=fast->next;
            n--;
        }
        ListNode* prev=head;
        if(fast->next==NULL){
            slow=slow->next;
            
            head=slow;
            return head;
        }
        while(fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
       prev->next=slow->next;
       delete slow;
       return head;
    }
};