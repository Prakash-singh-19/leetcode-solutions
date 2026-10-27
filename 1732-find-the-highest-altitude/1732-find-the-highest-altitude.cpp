class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_v =0;
        int curr = 0;
        for(int i=0;i<gain.size();i++){
            curr+=gain[i];
            max_v=max(max_v,curr);
        }
        return max_v;
    }
};