class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int maxlen=0;
    unordered_map<int,int> mp;
        while(r<n){
             mp[nums[r]]++;


             if(mp.size() > 2) {
                mp[nums[l]]--;

                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
             }
             if(mp.size()<=2){
                maxlen=max(maxlen,r-l+1);
             }
             r++;
        }

        return maxlen;
    }
};