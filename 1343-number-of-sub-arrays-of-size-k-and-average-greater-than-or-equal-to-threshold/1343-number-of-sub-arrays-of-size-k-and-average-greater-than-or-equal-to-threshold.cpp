class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n=nums.size();
        int ans=0;
        int l=0;
        int r=0;
        int sum=0;
       

       while(r<n){
        sum+=nums[r];

        if(r-l+1==k){
            if(sum/k >= threshold){
                ans++;
            }

            sum-=nums[l];
            l++;
        }
        r++;
       }

        return ans;
    }
};