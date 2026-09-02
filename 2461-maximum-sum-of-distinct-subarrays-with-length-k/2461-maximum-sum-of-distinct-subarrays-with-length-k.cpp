class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long s=0;
        long long ans=0;
         unordered_map<int, int> mp;
         int l=0;
         int r=0;

         while(r< n){
            s+=nums[r];
            mp[nums[r]]++;
          while(mp[nums[r]]>1){
            s-=nums[l];
            mp[nums[l]]--;
            l++;
          }

           while(r-l+1 > k){
                s -= nums[l];
                mp[nums[l]]--;
                l++;
            }

         if(r-l+1==k){
            ans=max(ans,s);
         }
         
         r++;
        }

         return ans;
    }
};