class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        int ans=0;
        for(int x:nums){
            mp[x]++;
        }

        for(auto it:mp){
             if(it.second >maxi){
                maxi=it.second;
                ans=it.first;
             }
            
        }
        return ans;
    }
};