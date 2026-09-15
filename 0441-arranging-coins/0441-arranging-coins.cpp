class Solution {
public:
    int arrangeCoins(int n) {
        long long l=1,r=n;
        long long ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long s=(mid*(mid+1))/2;
            if(s<=n){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};