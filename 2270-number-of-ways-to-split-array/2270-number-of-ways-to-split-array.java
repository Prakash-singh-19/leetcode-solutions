class Solution {
    public int waysToSplitArray(int[] nums) {
        int n = nums.length;
        long[] pSum = new long[n];
        pSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pSum[i] = pSum[i - 1] + nums[i];
        }
        long sum = pSum[n - 1];
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (pSum[i] >= (sum - pSum[i])) {
                ans++;
            }
        }
        return ans;
    }
}