class Solution {
    private:
    int atmost(vector<int>& nums,int limit){
        int n=nums.size();
        int l=0;
        int r=0;
        unordered_map<int,int> mp;
          
          int ans=0;
        while(r < n){
            mp[nums[r]]++;

            while(mp.size() > limit){
                mp[nums[l]]--;

                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            ans+=r-l+1;
            r++;
        }
        return ans;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // Your code goes here
        return atmost(nums,k)-atmost(nums,k-1);
    }
};