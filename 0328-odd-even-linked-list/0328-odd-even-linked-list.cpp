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
    ListNode* oddEvenList(ListNode* head) {
        ListNode dummyo(0);
        ListNode* odd = &dummyo;
        ListNode dummye(0);
        ListNode* even = &dummye;
        ListNode* curr=head;
        int i=0;
        while(curr!=nullptr){
            if(i%2==0){
                odd->next=curr;
                odd=odd->next;
            }else{
                even->next=curr;
                even=even->next;
            }
            curr=curr->next;
            i++;
        }
        even->next=nullptr;
        odd->next=dummye.next;
        return dummyo.next;
    }
};