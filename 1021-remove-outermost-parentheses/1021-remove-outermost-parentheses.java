class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder sb = new StringBuilder();
        int nest = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '(') {
                if (nest >= 1)
                    sb.append(c);
                nest++;
            } else {
                if (nest > 1)
                    sb.append(c);
                nest--;
            }
        }
        return sb.toString();
    }
}