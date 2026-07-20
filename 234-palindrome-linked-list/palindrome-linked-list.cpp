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
        if(head == nullptr || head->next==nullptr){
            return head;
        }
        ListNode* newNode = ReverseLL(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = nullptr;
        return newNode;

    }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow= slow->next;
            fast=fast->next->next;
        }
        ListNode* newNode = ReverseLL(slow->next);
        ListNode* first = head;
        ListNode* second=newNode;
        while(second!=nullptr){
            if(first->val != second->val) return false;
            else{
                first=first->next;
                second=second->next;
            }
            
        }
        return true;
        
    }
};