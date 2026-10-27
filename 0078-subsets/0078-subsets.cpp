class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(nums, 0, curr, res);
        return res;
    }
    void solve(vector<int>& nums, int index, vector<int>& curr, vector<vector<int>>& res){
        if(index == nums.size()){
            res.push_back(curr);
            return;
        }
        solve(nums, index + 1, curr, res);
        curr.push_back(nums[index]); 
        solve(nums, index + 1, curr, res);
        curr.pop_back();
    }
};
 