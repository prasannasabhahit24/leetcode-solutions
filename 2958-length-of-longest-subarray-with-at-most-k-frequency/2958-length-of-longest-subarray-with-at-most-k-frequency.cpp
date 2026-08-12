class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();

        int len=0;

        int l=0;
        int r=0;

        unordered_map<int,int> mp;

        while(r<n){
            mp[nums[r]]++;
            while(mp[nums[r]] > k ){ 
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
        
                len=max(len,r-l+1);
            
            r++;
        }

        return len;
    }
};