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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1;
        int i =0;
        while(i<a-1){
            curr1=curr1->next;
            i++;
        }
        ListNode* curr2 = curr1;
        while(i<=b){
            curr2=curr2->next;
            i++;
        }
        curr1->next =list2;
        while(curr1->next!=nullptr){
            curr1=curr1->next;
        }
        curr1->next = curr2;
        return list1;
        
    }
};