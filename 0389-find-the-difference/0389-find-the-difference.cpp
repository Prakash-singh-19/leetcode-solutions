// class Solution {
// public:
//     char findTheDifference(string s, string t) {
//         char ans=0;
//         for(char c: s){
//             ans^=c;
//         }
//         for(char c:t){
//             ans^=c;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i: s){
            mp[i]++;
        }
        for(auto i: t){
            mp[i]--;
            if(mp[i]<0){
                return i;
            }
        }
        return 'a';
    }
};