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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        if(head->next == nullptr) return head;
        ListNode* slow = head;
        
        ListNode* fast = slow->next;
        while(fast!= nullptr){
            if(fast->val == slow->val) {
                fast= fast->next;
                slow->next = fast;
            }
            else{
                slow = fast;
                fast = fast->next;

            }
        }
        return head;
        

        
    }
};