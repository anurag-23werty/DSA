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
    ListNode* Getkth(ListNode* temp,int k){
        k--;
        while(temp!=nullptr && k>0){
            temp=temp->next;
            k--;
        }
        return temp;
    }
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevlist=nullptr;
        while(temp!=nullptr){
            ListNode* kthNode=Getkth(temp,k);
            if(kthNode==nullptr){
                if(prevlist) prevlist->next=temp;
                break;
            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=nullptr;
            reverseLinkedList(temp);
            if(temp==head) head=kthNode;
            else{
                prevlist->next=kthNode;
            }
            prevlist=temp;
            temp=nextNode;
        }
        return head;

        
    }
};