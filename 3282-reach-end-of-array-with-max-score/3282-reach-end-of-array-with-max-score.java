class Solution {
    public long findMaximumScore(List<Integer> nums) {
        int prev = nums.get(0);
        int prevI = 0;
        int size = nums.size();
        long ans = 0;
        for (int i = 1; i < size; i++) {
            if (nums.get(i) > prev) {
                ans += (long) (i - prevI) * (prev);
                prevI = i;
                prev = nums.get(i);
            }
        }
        if (prevI != size - 1) {
            ans += (long) (size - 1 - prevI) * prev;
        }
        return ans;
    }
}