class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n=nums.size();
        long long pair=0;
        long long ans=0;
        unordered_map<int, int> mp;
        int l=0;
        int r=0;
        while(r < n){
           pair+=mp[nums[r]];
           mp[nums[r]]++;

           while(pair >=k){
            ans+=n-r;

                mp[nums[l]]--;

            pair-=mp[nums[l]];
            
            l++;
           }
           r++;
        }
         return ans;
    }
};