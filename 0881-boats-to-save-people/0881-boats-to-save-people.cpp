class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
         int n=nums.size();
                
        sort(nums.begin(),nums.end());


        int l=0;
        int r=n-1;
        int cnt=0;
        while(l<=r){
            if(nums[l]+nums[r]<=limit){
                l++;
                r--;
               
            }
            else{
                r--;
            }
             cnt++;
        }
        return cnt;
    }
};