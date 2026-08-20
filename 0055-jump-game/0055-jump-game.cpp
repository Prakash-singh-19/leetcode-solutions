class Solution {
public:
    bool canJump(vector<int>& nums) {
         int Max = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
     
            if (i > Max) {
                return false;
            }
            Max= max(Max, i + nums[i]);
            if (Max >= n - 1) {
                return true;
            }
        }
        
        return true;
    }
};