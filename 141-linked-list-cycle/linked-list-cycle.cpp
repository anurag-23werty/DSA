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
        ListNode* temp=head;
        ListNode* current=head;
        while(temp && temp->next){
            current=current->next;
            temp=temp->next->next;
            if(temp==current){
                return true;
            }
        }
        return false;
        
        
    }
};