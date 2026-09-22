class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p=0,q=nums.size()-1;
        int n=nums.size();
        vector<int>ans(n);
        int k=q;
        while(p<=q){
            if(abs(nums[p])>abs(nums[q])){
                ans[k]=nums[p]*nums[p];
                p++;
                k--;
            }else{
                ans[k]=nums[q]*nums[q];
                q--;
                k--;
            }
        }
        return ans;
    }
};