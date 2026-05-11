class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=1;
        int n=prices.size();
         long long cnt=1;   //No of valid subarray at that i
        for(int i=1;i<n;i++){
              if(prices[i-1]-prices[i]==1){
                cnt++;
              }
              else {
                cnt=1;
              }
              ans+=cnt;
        }
        return ans;
    }
};