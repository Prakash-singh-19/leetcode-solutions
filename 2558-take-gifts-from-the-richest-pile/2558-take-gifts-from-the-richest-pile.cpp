class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq(gifts.begin(),gifts.end());
        while(k>0){
            k--;
           int a = pq.top();
           a= floor(sqrt(a));
           pq.pop();
           pq.push(a);
        }long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};