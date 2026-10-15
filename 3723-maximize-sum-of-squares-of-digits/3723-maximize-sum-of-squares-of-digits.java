class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if(sum/9+(sum%9==0?0:1)>num) return "";
        StringBuilder sb = new StringBuilder();
        while(sb.length()!=num){
            if(sum-9>=0) {
                sb.append(9);
                sum-=9;
            }
            else {
                sb.append(sum);
                sum=0;
            }
        }
        return sb.toString();
    }
}