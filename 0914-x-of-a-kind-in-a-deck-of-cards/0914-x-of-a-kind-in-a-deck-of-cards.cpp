class Solution {
public:
    int getGcd(int a,int b){
        if(b==0)
            return a;
        else{
            return getGcd(b,a%b);
        }
        return 0;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;
        for(int n:deck){
            mp[n]++;
        }
        int myGcd = 0;
        for(auto i:mp){
            myGcd = getGcd(myGcd,i.second);
        }
        return myGcd>1;
        
    }
};