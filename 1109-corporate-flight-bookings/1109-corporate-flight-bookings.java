class Solution {
    public int[] corpFlightBookings(int[][] bookings, int n) {
     int[] ans = new int[n];
        for(int[] book: bookings){
            int l = book[0];
            int r = book[1];
            int s = book[2];
            ans[l-1]+=s;
            if(r<n){
                ans[r]-=s;
            }
        }
        for(int i =1;i<n;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        return ans;    
    }
}