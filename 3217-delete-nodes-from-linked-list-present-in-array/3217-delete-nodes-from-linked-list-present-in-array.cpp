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
    
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
       
       while(head!=NULL&&hash[head->val]>0){
        head=head->next;
       }
      
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            if (hash[temp->next->val] > 0) {
                ListNode* del = temp->next;
                temp->next = del->next;
                delete del;
            } 
            else {
                temp = temp->next;
            }
        }
        return head;
        
    }
};