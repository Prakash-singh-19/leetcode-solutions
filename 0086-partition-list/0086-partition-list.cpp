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
    ListNode* partition(ListNode* head, int x) {
        ListNode dummys(0);
        ListNode* small = &dummys;
        ListNode dummyL(0);
        ListNode* Big = &dummyL;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (curr->val < x) {
                small->next = curr;
                small = small->next;
            } else {
                Big->next = curr;
                Big = Big->next;
            }
            curr = curr->next;
        }
        
        Big->next = nullptr;
        small->next = dummyL.next;
        
        return dummys.next;
    }
};
