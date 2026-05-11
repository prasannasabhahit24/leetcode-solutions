class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int cnt=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]-nums[i-1]==nums[i+1]-nums[i]){
                cnt++;
            }
            else {
                cnt=0;
            }
            ans+=cnt;

        }
        return ans;
    }
};