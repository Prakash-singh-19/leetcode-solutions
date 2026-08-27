class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        if(nums[0]>0){
            ans++;
        }
        for(int x=1;x<n;x++){
            if(nums[x-1]<x && nums[x]>x){
                ans++;
            }
        }
        if(nums[n-1]<n){
            ans++;
        }
        return ans;
    }
};