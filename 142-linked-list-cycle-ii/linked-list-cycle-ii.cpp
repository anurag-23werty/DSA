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
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp=head;
        ListNode *current=temp;
        while(temp && temp->next){
            temp=temp->next->next;
            current = current->next;
            if(temp==current){
                current=head;
                while(temp!=current){
                    temp=temp->next;
                    current=current->next;
                }
                return current;
            }
        }
        return nullptr;
    }
};