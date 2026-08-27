class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
         int len=0;
        int l=0;
        int r=0;
        int maxi=0;
        while(r < n){
            mp[nums[r]]++;

            maxi=max(maxi,mp[nums[r]]);
            while((r-l+1-maxi) > k){
                mp[nums[l]]--;

                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }

            len=max(len,maxi);
             r++;
        }

        return len;
    }
};