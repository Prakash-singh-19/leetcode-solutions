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
    int pairSum(ListNode* head) {
        ListNode *fast =head;
        ListNode *slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;

        }
        
        ListNode *prev=slow;
        slow=slow->next;
        prev->next=nullptr;
        while(slow!=nullptr){
        ListNode *temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
        }

        int m=INT_MIN;
        while(prev!=nullptr){
            int sum=head->val+prev->val;
            m=max(m,sum);
            head=head->next;
            prev=prev->next;
        }
        return m;
    }
};