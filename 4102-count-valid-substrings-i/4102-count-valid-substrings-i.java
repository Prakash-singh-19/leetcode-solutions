class Solution {
    public long countValidSubstrings(String s) {
        long ans = 0;
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i >= 2 && s.charAt(i) == 'c' && s.charAt(i - 1) == 'b' && s.charAt(i - 2) == 'a') {
                j = i - 1;
                ans += 2;
            } else {
                ans += i - j + 1;
            }
        }
        return ans;
    }
}