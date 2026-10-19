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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1=head;
        ListNode* t2=head;
        while(k!=1){
            t1=t1->next;
            k--;
        }
        ListNode* n1=t1;
        while(t1->next!=NULL){
            t2=t2->next;
            t1=t1->next;
        }
        ListNode* n2=t2;
        swap(n1->val,n2->val);
        return head;



        
    }
};