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
    ListNode* insertionSort(ListNode* sorted, ListNode* head) {
        if (sorted == nullptr || head->val < sorted->val) {
            head->next = sorted;
            return head;
        }
        sorted->next = insertionSort(sorted->next, head);
        return sorted;
    }

    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* curr = head->next;
        head->next = nullptr;
        ListNode* sorted = insertionSortList(curr);
        return insertionSort(sorted, head);
    }
};