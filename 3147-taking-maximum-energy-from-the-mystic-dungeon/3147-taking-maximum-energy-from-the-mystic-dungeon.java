class Solution {
    public int maximumEnergy(int[] energy, int k) {
        int l = energy.length;
        int[] pSum = new int[l];
        int max = Integer.MIN_VALUE;
        for (int i = l - 1; i > l - 1 - k; i--) {
            pSum[i] = energy[i];
            max = Math.max(max, pSum[i]);
        }
        for (int i = l - 1 - k; i >= 0; i--) {
            pSum[i] = energy[i] + pSum[i + k];
            max = Math.max(max, pSum[i]);
        }
        return max;
    }
}