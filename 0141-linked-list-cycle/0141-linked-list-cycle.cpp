/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> hash;
        ListNode* temp=head;
        while(temp!=NULL){
            if(hash[temp]==1){
                return true;
            }
            hash[temp]+=1;
            temp=temp->next;
        }
        return false;

        
    }
};