class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n=nums.size();
        int l=0;
        int r=0;
        long long pro=1;
        int ans=0;

        if(k<=1) return 0;

        while(r<n){

            pro*=nums[r];

            while(pro>=k){
                pro/=nums[l];
                l++;
            }

            ans+=r-l+1;
            r++;
        }

        return ans;
    }
};