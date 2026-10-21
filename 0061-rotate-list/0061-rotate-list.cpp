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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        int c=1;
        ListNode* temp=head;
        while(temp->next!=nullptr){    
            temp=temp->next;
            c=c+1;
        }
        k=k%c;
        if(k==0){
            return head;
        }
        int i = 0;
        while (i != k) {
            fast = fast->next;
            i++;
        }
        while (fast->next != nullptr) {
            slow=slow->next;
            fast=fast->next;
        }  
        ListNode *newhead=slow->next;
        slow->next=nullptr;
        temp->next=head;
        return newhead;
    }
};