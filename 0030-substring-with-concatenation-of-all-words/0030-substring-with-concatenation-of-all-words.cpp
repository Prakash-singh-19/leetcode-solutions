class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans;
        int n=s.length();
        int m=words.size();
        int l=words[0].length();
        int tl=m*l;
        if(n<tl){
            return ans;
        }
        unordered_map<string,int>mp;
        for(string w:words){
            mp[w]++;
        }
        for(int i=0;i<l;i++){
            int left=i;
            int count=0;
            unordered_map<string,int>temp;
            for(int j=i;j<=n-1;j+=l){
                string str=s.substr(j,l);
                if(mp.count(str)){
                    temp[str]++;
                    count++;
                while(temp[str]>mp[str]){
                    string s1=s.substr(left,l);
                    temp[s1]--;
                    count--;
                    left+=l;
                }
                if(count==m){
                    ans.push_back(left);
                }
                }else{
                    temp.clear();
                    count=0;
                    left=j+l;
                }
            }
        }
        return ans;
    }
};