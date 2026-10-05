class Solution {
    public int xorAllNums(int[] nums1, int[] nums2) {
     int xor = 0;
        if (nums1.length % 2 == 1) {
            for (int n : nums2) {
                xor ^= n;
            }
        }
        if (nums2.length % 2 == 1) {
            for (int n : nums1) {
                xor ^= n;
            }
        }
        return xor;  
    }
}