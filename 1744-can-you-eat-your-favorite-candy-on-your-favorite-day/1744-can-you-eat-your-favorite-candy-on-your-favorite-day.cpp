class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n = candiesCount.size();
        vector<long long> pfs(n);
        pfs[0] = candiesCount[0];
        for (int i = 1; i < n; i++) {
            pfs[i] = pfs[i - 1] + candiesCount[i];
        }
        
        vector<bool> ans;
        for (int i = 0; i < queries.size(); i++) {
            long long fav = queries[i][0];
            long long day = queries[i][1];
            long long cap = queries[i][2];
            
            long long total = (fav == 0) ? 0 : pfs[fav - 1];
            
           
            if (((day + 1) * cap <= total) || ((day + 1) > pfs[fav])) {
                ans.push_back(false);
            } else {
                ans.push_back(true);
            }
        }
 
        return ans;
    }
};