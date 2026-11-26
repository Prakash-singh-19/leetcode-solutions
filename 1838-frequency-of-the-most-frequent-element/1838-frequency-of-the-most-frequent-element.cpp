class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      int left=0;
      long long curr=0;
      int freq=INT_MIN;
      for(int right=0;right<nums.size();right++){
        long target=nums[right];
        curr+=nums[right];
        if((right-left+1)*target-curr>k){
            curr-=nums[left];
            left++;
        }
        freq=max(freq, right-left+1);
      }
      return freq;
    }
};