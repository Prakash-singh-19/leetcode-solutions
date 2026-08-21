class Solution {
public:
    int jump(vector<int>& nums) {
         int jumps = 0;
        int current_end = 0;
        int f = 0;
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            f = max(f, i + nums[i]);
            
            if (i == current_end) {
                jumps++;
                current_end = f;
                
                if (current_end >= nums.size() - 1) {
                    break;
                }
            }
        }
        
        return jumps;
    }
};