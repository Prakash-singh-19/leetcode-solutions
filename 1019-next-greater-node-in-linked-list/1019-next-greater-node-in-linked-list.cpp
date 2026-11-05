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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>st;
        vector<int>ans;
        int i=0;
        
        ListNode *temp=head;
        while(temp!=nullptr){
               ans.push_back(0); 
               
            while(!st.empty()&& temp->val > st.top().first ){
              auto a=st.top();
              ans[a.second]=temp->val;
              st.pop();
            }
            st.push({temp->val,i});i++;temp=temp->next;
        }
        return ans;
    }
};