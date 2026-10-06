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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0){
            return head;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int rotate=k%count;
        
        while(rotate!=0){
          
            ListNode* prev=head;
            ListNode* end=head;
            while(end->next!=NULL){
                prev=end;
                end=end->next;
            }
            prev->next=NULL;
            end->next=head;
            head=end;
            rotate--;
            
        }
        return head;
    }
};