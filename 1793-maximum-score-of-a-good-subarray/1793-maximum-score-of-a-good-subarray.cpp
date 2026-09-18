class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        int l=k;
        int r=k;
        int mini=nums[k];
        int maxi=nums[k];
        while(l>0||r<n-1){
            if(l==0) r++;
            else if(r==n-1) l--;
            else if(nums[l-1]>nums[r+1]){
                l--;
            }
            else{
                r++;
            }
            mini = min(mini, min(nums[l], nums[r]));
            maxi = max(maxi, mini * (r - l + 1));

        }

        return maxi;
    }
};