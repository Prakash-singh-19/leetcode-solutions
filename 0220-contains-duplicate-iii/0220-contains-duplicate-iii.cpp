class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
         if (indexDiff <= 0 || valueDiff < 0) return false;
        set<long long> window;
        for (int i = 0; i < nums.size(); ++i) {
            long long x = nums[i];
            auto it = window.lower_bound(x - (long long)valueDiff);
            if (it != window.end() && *it <= x + (long long)valueDiff) {
                return true;
            }
            window.insert(x);
            if (i >= indexDiff) {
                window.erase((long long)nums[i - indexDiff]);
            }
        }
        
        return false;
    }
}; 