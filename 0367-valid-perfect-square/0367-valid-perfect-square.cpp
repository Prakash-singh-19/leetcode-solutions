class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1,h=num;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long s=mid*mid;
            if(s==num){
                return true;
            }
            if(s<num){
                l=mid+1;
            }
            else 
                h=mid-1;
        }
        return false;
    }
};