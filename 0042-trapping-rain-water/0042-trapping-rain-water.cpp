class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();

        int lmax=0;
     
     int rmax=0;
     int total=0;
        int l=0;
        int r=n-1;

        while(l<=r){
            if(nums[l]<=nums[r]){
                if(lmax > nums[l]){
                    total+=lmax-nums[l];
                }
                else{
                    lmax=nums[l];
                }
                l++;
            }
            else {
                if(rmax>nums[r]){
                    total+=rmax-nums[r];
                }
                else{
                    rmax=nums[r];
                }
                r--;
            }
        }

        return total;
    }
};