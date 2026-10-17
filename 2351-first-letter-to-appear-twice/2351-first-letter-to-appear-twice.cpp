class Solution {
public:
    char repeatedCharacter(string s) {
         unordered_set<char>st;
        for(char x:s){
            if(st.find(x)!=st.end()){
                return x;
            }
            else{
                st.insert(x);
            }
        }
        return -1;
    }
};