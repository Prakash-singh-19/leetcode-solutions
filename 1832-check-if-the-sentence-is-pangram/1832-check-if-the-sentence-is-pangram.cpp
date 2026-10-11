class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<int>s;
        for(char x:sentence){
            if(s.find(x)==s.end()){
                s.insert(x);
            }

        }
        if(s.size()==26)return true;
        return false;
    }
};