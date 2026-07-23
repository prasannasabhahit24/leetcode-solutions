class Solution {
public:
    int rob(vector<int>& nums) {
        int maxi=0;
       int n=nums.size();
       int n1=0;
       int n2=0;
        for(int i=0;i<n ;i++){
           int maxi=max(nums[i]+n1,n2);
           n1=n2;
           n2=maxi;

        }
        return n2;
    }
};