class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        if(columnTitle.length()==1){
            return int(columnTitle[0]-64);
        }
        for(int i=0;i<columnTitle.length();i++){
            if(i==columnTitle.length()-1){
                ans=ans*26+(int(columnTitle[i])-64);
            }
            else{
                ans=ans*26+int(columnTitle[i]-64);
            }
        }
        return ans;
    }
};