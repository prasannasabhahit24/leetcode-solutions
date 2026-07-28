class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();

        int p=0;

        for(int i=1;i<n;i++){
           if(nums[i]>nums[i-1]){
            p+=nums[i]-nums[i-1];
           }
        }

        return p;
    }
};