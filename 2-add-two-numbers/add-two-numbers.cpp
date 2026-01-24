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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        int temp=0;
        int value=0;
        ListNode* head=l3;
        while(l1 && l2){
            value=l1->val+l2->val+temp;
            temp=value/10;
            l3->next=new ListNode(value%10);
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
        }
        while(l1){
            value=l1->val+temp;
            temp=value/10;
            l3->next=new ListNode(value%10);
            l1=l1->next;
            l3=l3->next;
            
        }
        while(l2){
             value=l2->val+temp;
            temp=value/10;
            l3->next=new ListNode(value%10);
            l2=l2->next;
            l3=l3->next;
        }
        
        if(temp!=0){
            l3->next=new ListNode(temp);
            
        }

    


    return head->next;
        
    }
};