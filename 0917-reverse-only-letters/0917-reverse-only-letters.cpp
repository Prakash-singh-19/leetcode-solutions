class Solution {
public:
    string reverseOnlyLetters(string s) {
        int p=0;
        int q=s.size()-1;
        while(p<q){
            while((p<q)&&!isalpha(s[p]))
            p++;
            while((p<q)&&!isalpha(s[q]))
            q--;
            swap(s[p],s[q]);
            p++;
            q--;
        }
        return s;
    }
};