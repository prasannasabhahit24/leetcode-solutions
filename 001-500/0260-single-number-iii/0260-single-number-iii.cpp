class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int x:nums){
            mp[x]++;
        }

        for(auto it:mp){
            if(it.second==1){
             ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};