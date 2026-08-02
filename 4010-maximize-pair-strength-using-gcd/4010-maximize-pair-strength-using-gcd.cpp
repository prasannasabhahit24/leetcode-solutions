class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();

        long long maxi=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               int gc=gcd(nums[i],nums[j]);

                maxi=max(maxi,1LL*nums[i]*nums[j]/gc/gc);
            }
        }

        return maxi;
    }
};