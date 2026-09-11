class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>answer;
        for(int i=0;i<nums.size();i++){
            int element=nums[nums[i]];
            answer.push_back(element);
        }
        return answer;  
    }
};