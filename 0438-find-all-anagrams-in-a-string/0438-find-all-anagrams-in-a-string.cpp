class Solution {
public:
    vector<int> findAnagrams(string s2, string pattern) {
         unordered_map<char,int> patternMap;
        for(int i=0;i<pattern.length();i++) patternMap[pattern[i]]++;
        vector<int>ans;
        int start=0;
        int matched=0;

        for(int end=0;end<s2.length();end++){
            char curr=s2[end];

            if(patternMap.find(curr)!=patternMap.end()){
                patternMap[curr]--;
                if(patternMap[curr]==0){
                    matched++;
                }
            }

            if(matched==patternMap.size()){
                ans.push_back(start);
            }

           
            if(end>=pattern.length()-1){
                char curr=s2[start];

              
                if(patternMap.find(curr)!=patternMap.end()){
                    if(patternMap[curr]==0){
                        matched--;
                    }
                    patternMap[curr]++;
                }

                start++;
            }
        }
        return ans;
    }
};