import java.util.StringTokenizer;
class Solution {
    public String discountPrices(String sentence, int discount) {
        StringTokenizer st = new StringTokenizer(sentence);
        StringBuilder sb = new StringBuilder();
        String regex = "^\\$\\d+$";
        while (st.hasMoreTokens()) {
            String s = st.nextToken();
            if (s.matches(regex)) {
                double num = Double.parseDouble(s.substring(1));
                num = num - num * discount / 100;
                sb.append('$');
                sb.append(String.format("%.2f", num));
            } else
                sb.append(s);
            sb.append(" ");
        }
        return sb.toString().strip();
    }
}