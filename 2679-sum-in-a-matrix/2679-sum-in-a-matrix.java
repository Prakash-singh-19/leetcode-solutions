class Solution {
    public int matrixSum(int[][] nums) {
        for (int[] num : nums) {
            Arrays.sort(num);
        }
        int ans = 0;
        for (int i = nums[0].length - 1; i >= 0; i--) {
            int max = 0;
            for (int j = 0; j < nums.length; j++) {
                max = Math.max(nums[j][i], max);
            }
            ans += max;
        }
        return ans;
    }
}