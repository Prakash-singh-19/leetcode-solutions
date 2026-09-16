class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (!isalnum(s[i])) {
                 i++; 
                 continue;
                  }
            if (!isalnum(s[j])){
                 j--; 
                 continue; 
                 }

            if (tolower(s[i]) != tolower(s[j])) {
                return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
            }
            i++;
            j--;
        }
        return true;
    }

    bool checkPalindrome(string s, int p, int q) {
        while (p < q) {
            if (!isalnum(s[p])){ 
                p++;
                continue; 
                }
            if (!isalnum(s[q])){
                q--; 
                continue; 
                }
            if (tolower(s[p]) != tolower(s[q])) return false;
            p++;
            q--;
        }
        return true;
    }
};
