class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;

        for(int i=0;i<n;i++){
            int sum=0;
            while(nums[i] > 0){
                int mod=nums[i] % 10;
                sum+=mod;
                nums[i]=nums[i] / 10;
            }
            if( sum < mini){
                mini=sum;
            }
        }
        return mini;
    }
};