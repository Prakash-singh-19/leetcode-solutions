class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ret="";
        while(!pq.empty()){
            pair<int,char>a=pq.top();
            pq.pop();
            for(int i=0;i<a.first;i++)ret+=a.second;
        }
        return ret;
    }
};