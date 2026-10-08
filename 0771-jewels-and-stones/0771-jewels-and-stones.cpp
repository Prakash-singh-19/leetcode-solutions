class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
         unordered_set<char>st;
        for(auto x:jewels){
            st.insert(x);
        }
        int c=0;
        for(auto x:stones){
            if(st.find(x)!=st.end()){
                c++;
            }
        }
        return c;
    }
};