class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ret;
        int maxi=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(maxi<=candies[i]+extraCandies){
                ret.push_back(true);
            }
            else{
                ret.push_back(false);
            }
        }
        return ret;
    }
};