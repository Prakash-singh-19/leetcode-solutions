class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> pre;
        unordered_map<char,char> next;

        if(s.length()!=t.length())
        return false;
        for(int i=0;i<s.length();i++){
            int c1=s[i],c2=t[i];

            if(pre.count(c1) && pre[c1]!=c2) return false;
            if(next.count(c2) && next[c2]!=c1) return false;

            pre[c1]=c2;
            next[c2]=c1;
        }
        return true;
    }
};