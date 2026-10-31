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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* p=nullptr;
        ListNode* c=slow;
        ListNode* n=nullptr;
        while(c!=nullptr){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        while(head!=nullptr&&p!=nullptr){
            if(head->val!=p->val){
                return false;
            }else
            head=head->next;
            p=p->next;
        }
        return true;
    }
};