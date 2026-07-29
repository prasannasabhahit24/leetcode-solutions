class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();

        int buy1=INT_MIN;
        int sell1=0;
        
        int buy2=INT_MIN;
        int sell2=0;

        for(int n:nums){
            buy1=max(buy1,-n);

            sell1=max(sell1,buy1+n);

            buy2=max(buy2,sell1-n);

            sell2=max(sell2,buy2+n);
        }
        return sell2;
    }
};