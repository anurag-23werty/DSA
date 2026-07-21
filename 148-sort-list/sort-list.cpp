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
    ListNode* mergeList(ListNode* l1, ListNode* l2){
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* ptr = dummy;
        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1->val <=temp2->val){
                dummy->next =temp1;
                temp1 = temp1->next;
            }
            else{
                dummy->next = temp2;
                temp2=temp2->next;
            }
            dummy = dummy->next;
            
        }
        if(temp1==nullptr){
            dummy->next = temp2;
            
        }
        if(temp2==nullptr){
            dummy->next = temp1;
        }
        return ptr->next;
        
    }
        

    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp =slow->next;
        slow->next =nullptr;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(temp);
        return mergeList(l1,l2);
    }
    


        
    
};