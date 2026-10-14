class NumArray {
public:
vector<int>pfs;
    NumArray(vector<int>& nums) {
    
    pfs.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        pfs.push_back(pfs[i-1]+nums[i]);
    }   
    }
    int sumRange(int left, int right) {
        if(left==0)return pfs[right];
        return pfs[right]-pfs[left-1];
    }
};


/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */