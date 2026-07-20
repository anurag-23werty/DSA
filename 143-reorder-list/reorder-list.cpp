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
    ListNode* ReverseLL(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* newNode = ReverseLL(head->next);
        ListNode* front = head->next;
        front->next=head;
        head->next = nullptr;
        return newNode;
    }
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next=nullptr;
        ListNode* newNode =ReverseLL(second);
        ListNode* curr= head;
        int i=0;
        ListNode* temp1;
        ListNode* temp2;
        while(newNode!=nullptr){
            temp1 = curr->next;
            temp2 = newNode->next;
            curr->next =newNode;
            newNode->next = temp1;
            curr = temp1;
            newNode= temp2;
            
        }
        
    }
};