class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double maxsum=0;
        int p=0;
        int q=k-1;
        for(int i=0;i<=q;i++){
            sum+=nums[i];
        }
        maxsum=sum;
        for(int i=k;i<nums.size();i++){
            sum=sum-nums[i-k]+nums[i];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
        double avg=maxsum/k;
        return avg;

    }
};