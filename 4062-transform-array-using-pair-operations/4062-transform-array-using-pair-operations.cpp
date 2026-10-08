class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long sum_source = 0, sum_target = 0;
        for(auto it : source)
            sum_source += it;
        for(auto it : target) 
            sum_target += it;
        if(sum_source != sum_target) 
             return false;
        return true;
    }
};